/*
 * XREFs of BcdOpenObject @ 0x1404FCC2C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     PopBcdSetPendingResume @ 0x1404F57FC (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x1404FBEB0 (PopBcdEstablishResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140654A4C (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14068DC70 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14068EC74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14068F08C (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x14068FB74 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1406914FC (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14011BBD4 (BiIsOfflineHandle.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 *     BiCloseKey @ 0x1404FD274 (BiCloseKey.c)
 *     BiOpenKey @ 0x1404FD5F4 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x1404FD760 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x1404FD784 (BiAcquireBcdSyncMutant.c)
 *     BiIsObjectAliased @ 0x1404FDCA0 (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1404FE7A4 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14068DC70 (BiGetDefaultBootEntryIdentifier.c)
 */

NTSTATUS __cdecl BcdOpenObject(HANDLE BcdStoreHandle, const GUID *Identifier, PHANDLE BcdObjectHandle)
{
  __int64 v6; // rcx
  char v7; // r15
  NTSTATUS result; // eax
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  NTSTATUS v11; // eax
  wchar_t *Buffer; // rsi
  NTSTATUS CurrentBootEntryIdentifier; // eax
  HANDLE Handle; // [rsp+20h] [rbp-30h] BYREF
  GUID Guid; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING GuidString; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  LOBYTE(v6) = BiIsOfflineHandle((char)BcdStoreHandle);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( result < 0 )
    return result;
  *BcdObjectHandle = 0LL;
  Handle = 0LL;
  GuidString.Buffer = 0LL;
  v10 = BiOpenKey(BcdStoreHandle, L"Objects", 131097LL, &Handle);
  if ( v10 < 0 )
    goto LABEL_9;
  if ( !(unsigned __int8)BiIsObjectAliased(Identifier, &v17) )
  {
    Guid = *Identifier;
LABEL_5:
    v11 = RtlStringFromGUIDEx(&Guid, &GuidString, 1u);
    Buffer = GuidString.Buffer;
    v10 = v11;
    if ( v11 >= 0 )
      v10 = BiOpenKey(Handle, GuidString.Buffer, 983103LL, BcdObjectHandle);
    if ( Buffer )
      RtlFreeAnsiString(&GuidString);
    goto LABEL_9;
  }
  v9 = (unsigned int)(v17 - 1);
  if ( v17 == 1 )
  {
    CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(&Guid);
LABEL_15:
    v10 = CurrentBootEntryIdentifier;
    goto LABEL_16;
  }
  if ( v17 == 2 )
  {
    CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(BcdStoreHandle, &Guid);
    goto LABEL_15;
  }
  v10 = -1073741811;
LABEL_16:
  if ( v10 >= 0 )
    goto LABEL_5;
LABEL_9:
  if ( Handle )
    BiCloseKey(Handle);
  LOBYTE(v9) = v7;
  BiReleaseBcdSyncMutant(v9);
  return v10;
}
