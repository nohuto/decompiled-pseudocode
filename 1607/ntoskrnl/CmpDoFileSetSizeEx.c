/*
 * XREFs of CmpDoFileSetSizeEx @ 0x14047D650
 * Callers:
 *     HvWriteLogFile @ 0x1403F4934 (HvWriteLogFile.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x14047E8F8 (HvInitializeHive.c)
 *     CmpDoReconcileNextHive @ 0x14047F42C (CmpDoReconcileNextHive.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x14047F7CC (HvTruncateCurrentLogFileIfRequired.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404D2C40 (HvTruncateAllLogFilesIfRequired.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     HvpApplyLogEntry @ 0x1406126C4 (HvpApplyLogEntry.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 *     CmpAdjustRequestedFileSize @ 0x14047D770 (CmpAdjustRequestedFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 *     HvViewMapChangeFileSize @ 0x14060FB84 (HvViewMapChangeFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  char v5; // r10
  unsigned __int64 v6; // r9
  void *v8; // rbp
  unsigned __int64 v9; // r8
  BOOLEAN v10; // r14
  NTSTATUS v11; // esi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+60h] [rbp+8h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( v8 )
  {
    if ( a2 )
      v9 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 2976) : 0LL;
    else
      v9 = *(_QWORD *)(a1 + 2968);
    if ( (v5 & 1) == 0 || !v9 || v6 > v9 )
    {
      FileInformation = CmpAdjustRequestedFileSize(a1, a2, v9);
      v10 = IoSetThreadHardErrorMode(0);
      v11 = ZwSetInformationFile(v8, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
      if ( v11 < 0 )
        goto LABEL_22;
      if ( a2 )
      {
        if ( a2 - 4 <= 1 || a2 == 1 )
          *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 2976) = FileInformation;
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(a1 + 124) & 4) != 0 && (v11 = HvViewMapChangeFileSize(a1 + 200, a1, FileInformation), v11 < 0) )
      {
LABEL_22:
        CmRegistryIODebug = 3;
        qword_140747ED0 = (__int64)v8;
        dword_140747ED8 = v11;
      }
      else
      {
        *(_QWORD *)(a1 + 2968) = FileInformation;
      }
LABEL_12:
      IoSetThreadHardErrorMode(v10);
      return (unsigned int)v11;
    }
  }
  return 0LL;
}
