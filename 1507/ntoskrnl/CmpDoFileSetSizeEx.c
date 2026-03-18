/*
 * XREFs of CmpDoFileSetSizeEx @ 0x1404AF608
 * Callers:
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x1404AD7D4 (HvInitializeHive.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     CmpDoReconcileNextHive @ 0x1404EB558 (CmpDoReconcileNextHive.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x14055BA64 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     HvpApplyLogEntry @ 0x140666234 (HvpApplyLogEntry.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EFE84 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x14017F4D0 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14044D6E8 (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x1404AF748 (CmpAdjustRequestedFileSize.c)
 *     HvViewMapChangeFileSize @ 0x140662AE0 (HvViewMapChangeFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  void *v8; // rbp
  BOOLEAN v9; // r15
  unsigned __int64 v10; // r8
  NTSTATUS v11; // esi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-28h] BYREF
  __int64 FileInformation; // [rsp+60h] [rbp+8h] BYREF

  v8 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( v8 )
  {
    v9 = IoSetThreadHardErrorMode(0);
    if ( a2 )
      v10 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 2976) : 0LL;
    else
      v10 = *(_QWORD *)(a1 + 2968);
    if ( (a4 & 1) == 0 || !v10 || a3 > v10 )
    {
      FileInformation = CmpAdjustRequestedFileSize(a1, a2, v10, a3);
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
        qword_14077EDB0 = (__int64)v8;
        dword_14077EDB8 = v11;
      }
      else
      {
        *(_QWORD *)(a1 + 2968) = FileInformation;
      }
LABEL_12:
      IoSetThreadHardErrorMode(v9);
      return (unsigned int)v11;
    }
  }
  return 0LL;
}
