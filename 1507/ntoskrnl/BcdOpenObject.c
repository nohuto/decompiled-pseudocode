/*
 * XREFs of BcdOpenObject @ 0x14056F6CC
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     PopBcdSetPendingResume @ 0x140569D2C (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14056E3CC (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14056E4D8 (PopBcdEstablishResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14070D788 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14070E78C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14070E9A4 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14070EBA4 (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x14070F68C (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x14070FDF4 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140711014 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14014FE60 (BiIsOfflineHandle.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140570200 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140570224 (BiAcquireBcdSyncMutant.c)
 *     BiIsObjectAliased @ 0x1405708E8 (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x1405713EC (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14070D788 (BiGetDefaultBootEntryIdentifier.c)
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
