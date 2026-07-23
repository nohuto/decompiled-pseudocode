/*
 * XREFs of MiShutdownSystem @ 0x1403DE8F8
 * Callers:
 *     MmShutdownSystem @ 0x1403DEC00 (MmShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400A9F48 (CcNotifyWriteBehind.c)
 *     MmUnlockPagableImageSection @ 0x1400AAC64 (MmUnlockPagableImageSection.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x1403DEA58 (MiZeroAllPageFiles.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x1404BFFD0 (MmLockPagableSectionByHandle.c)
 *     MmZeroPageFileAtShutdown @ 0x1406575D8 (MmZeroPageFileAtShutdown.c)
 *     MiDeletePagingFiles @ 0x14065AFE8 (MiDeletePagingFiles.c)
 */

char MiShutdownSystem()
{
  int v0; // ebx
  __int64 Lock; // rax
  PVOID *v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  SIZE_T v5; // r14
  PVOID PoolWithTag; // rax
  PVOID v7; // rsi
  PVOID v8; // rcx

  if ( !dword_140327054 )
  {
    CcNotifyWriteBehind(2);
    v0 = MmZeroPageFileAtShutdown();
    MmFlushAllFilesystemPages(0);
    dword_140327054 = 1;
    KeSetEvent(&stru_140323610, 0, 0);
    if ( v0 == 1 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v2 = (PVOID *)PsLoadedModuleList;
    v3 = Lock;
    while ( v2 != &PsLoadedModuleList )
    {
      v4 = v2[17];
      if ( v4 != (_QWORD *)1 && v4 != (_QWORD *)-2LL && ((unsigned __int8)v4 & 1) == 0 )
      {
        v5 = 8LL * *v4 + 8;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x54446D4Du);
        v7 = PoolWithTag;
        if ( !PoolWithTag )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolWithTag, v4, v5);
        ExFreePoolWithTag(v4, 0);
        v2[17] = v7;
      }
      v8 = v2[10];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        v2[10] = 0LL;
      }
      v2 = (PVOID *)*v2;
    }
    MmReleaseLoadLock(v3);
    MiDeletePagingFiles(MiSystemPartition);
  }
  return 1;
}
