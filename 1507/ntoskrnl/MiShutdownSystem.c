/*
 * XREFs of MiShutdownSystem @ 0x140402C68
 * Callers:
 *     MmShutdownSystem @ 0x140402FFC (MmShutdownSystem.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140010480 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x140402E6C (MiZeroAllPageFiles.c)
 *     MmLockPagableSectionByHandle @ 0x1404251E8 (MmLockPagableSectionByHandle.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     MmZeroPageFileAtShutdown @ 0x1406A0668 (MmZeroPageFileAtShutdown.c)
 */

char MiShutdownSystem()
{
  int v0; // ebx
  unsigned int i; // ebx
  __int64 Lock; // rax
  PVOID *v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax
  PVOID v8; // rsi
  PVOID v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rcx

  if ( !dword_14034F100 )
  {
    CcNotifyWriteBehind(2);
    v0 = MmZeroPageFileAtShutdown();
    MmFlushAllFilesystemPages(0);
    dword_14034F100 = 1;
    KeSetEvent(&stru_140353D98, 0, 0);
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
    dword_14034E7B0 = -1;
    KeSetEvent(&stru_1403541A8, 0, 0);
    for ( i = 0; i < 0x1F4; ++i )
    {
      if ( (__int64 *)qword_140354250 == &qword_140354250 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      if ( !dword_14034E7B0 )
      {
        dword_14034E7B0 = -1;
        KeSetEvent(&stru_1403541A8, 0, 0);
      }
    }
    Lock = MmAcquireLoadLock();
    v3 = (PVOID *)PsLoadedModuleList;
    v4 = Lock;
    while ( v3 != &PsLoadedModuleList )
    {
      v5 = v3[17];
      if ( v5 != (_QWORD *)1 && v5 != (_QWORD *)-2LL && ((unsigned __int8)v5 & 1) == 0 )
      {
        v6 = 8LL * *v5 + 8;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x54446D4Du);
        v8 = PoolWithTag;
        if ( !PoolWithTag )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(PoolWithTag, v5, v6);
        ExFreePoolWithTag(v5, 0);
        v3[17] = v8;
      }
      v9 = v3[10];
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        v3[10] = 0LL;
      }
      v3 = (PVOID *)*v3;
    }
    MmReleaseLoadLock(v4);
    if ( Count )
    {
      v10 = qword_1403551E0;
      v11 = Count;
      do
      {
        v12 = *v10;
        if ( (*(_BYTE *)(*v10 + 164LL) & 0x40) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v12 + 120), 0);
          v13 = *(void **)(v12 + 184);
          *(_QWORD *)(v12 + 120) = 0LL;
          ObCloseHandle(v13, 0);
        }
        ++v10;
        --v11;
      }
      while ( v11 );
    }
  }
  return 1;
}
