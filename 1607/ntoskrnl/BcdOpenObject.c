/*
 * XREFs of BcdOpenObject @ 0x14053D54C
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     PopBcdSetPendingResume @ 0x1405349E4 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14053C630 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14053C72C (PopBcdEstablishResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x140693FEC (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1406D24D0 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D33E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1406D380C (BiBindEfiEntries.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1406D4310 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1406D5CF0 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14012E08C (BiIsOfflineHandle.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14053E1A4 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14053E1C8 (BiAcquireBcdSyncMutant.c)
 *     BiIsObjectAliased @ 0x14053E708 (BiIsObjectAliased.c)
 *     BiGetCurrentBootEntryIdentifier @ 0x14053F080 (BiGetCurrentBootEntryIdentifier.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1406D24D0 (BiGetDefaultBootEntryIdentifier.c)
 */

__int64 __fastcall BcdOpenObject(__int64 a1, __int128 *a2, _QWORD *a3)
{
  __int64 v6; // rcx
  char v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // eax
  wchar_t *Buffer; // rsi
  int CurrentBootEntryIdentifier; // eax
  HANDLE Handle; // [rsp+20h] [rbp-30h] BYREF
  __int128 v15; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+88h] [rbp+38h] BYREF

  LOBYTE(v6) = BiIsOfflineHandle(a1);
  v7 = v6;
  result = BiAcquireBcdSyncMutant(v6);
  if ( (int)result < 0 )
    return result;
  *a3 = 0LL;
  Handle = 0LL;
  UnicodeString.Buffer = 0LL;
  v10 = BiOpenKey(a1, L"Objects", 131097LL, &Handle);
  if ( v10 < 0 )
    goto LABEL_9;
  if ( !(unsigned __int8)BiIsObjectAliased(a2, &v17) )
  {
    v15 = *a2;
LABEL_5:
    v11 = RtlStringFromGUIDEx((unsigned int *)&v15, (__int64)&UnicodeString, 1);
    Buffer = UnicodeString.Buffer;
    v10 = v11;
    if ( v11 >= 0 )
      v10 = BiOpenKey(Handle, UnicodeString.Buffer, 983103LL, a3);
    if ( Buffer )
      RtlFreeAnsiString(&UnicodeString);
    goto LABEL_9;
  }
  v9 = (unsigned int)(v17 - 1);
  if ( v17 == 1 )
  {
    CurrentBootEntryIdentifier = BiGetCurrentBootEntryIdentifier(&v15);
LABEL_15:
    v10 = CurrentBootEntryIdentifier;
    goto LABEL_16;
  }
  if ( v17 == 2 )
  {
    CurrentBootEntryIdentifier = BiGetDefaultBootEntryIdentifier(a1, &v15);
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
  return (unsigned int)v10;
}
