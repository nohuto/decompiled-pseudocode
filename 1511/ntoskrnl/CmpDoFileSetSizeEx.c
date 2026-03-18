/*
 * XREFs of CmpDoFileSetSizeEx @ 0x1404BC2A4
 * Callers:
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvInitializeHive @ 0x1403D0F54 (HvInitializeHive.c)
 *     HvWriteLogFile @ 0x1403D27F0 (HvWriteLogFile.c)
 *     CmpDoReconcileNextHive @ 0x1403D3EDC (CmpDoReconcileNextHive.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1403D4084 (HvTruncateCurrentLogFileIfRequired.c)
 *     HvpAddBin @ 0x1403D5214 (HvpAddBin.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1404C4358 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     HvpApplyLogEntry @ 0x1405EDD44 (HvpApplyLogEntry.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x140150B00 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1403D43F4 (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x1404BC3D4 (CmpAdjustRequestedFileSize.c)
 *     HvViewMapChangeFileSize @ 0x1405EB02C (HvViewMapChangeFileSize.c)
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
        qword_1406FBDA8 = (__int64)v8;
        dword_1406FBDB0 = v11;
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
