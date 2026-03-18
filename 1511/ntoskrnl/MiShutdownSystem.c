/*
 * XREFs of MiShutdownSystem @ 0x1403B1B80
 * Callers:
 *     MmShutdownSystem @ 0x1403B1F2C (MmShutdownSystem.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 *     MmUnlockPagableImageSection @ 0x1400EBD44 (MmUnlockPagableImageSection.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiZeroAllPageFiles @ 0x1403B1D84 (MiZeroAllPageFiles.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     MmLockPagableSectionByHandle @ 0x1404B6838 (MmLockPagableSectionByHandle.c)
 *     MmZeroPageFileAtShutdown @ 0x140620FD4 (MmZeroPageFileAtShutdown.c)
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

  if ( !dword_1402FEC44 )
  {
    CcNotifyWriteBehind(2);
    v0 = MmZeroPageFileAtShutdown();
    MmFlushAllFilesystemPages(0);
    dword_1402FEC44 = 1;
    KeSetEvent(&stru_1402FFDC8, 0, 0);
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
    dword_1402FE2B0 = -1;
    KeSetEvent(&stru_140300218, 0, 0);
    for ( i = 0; i < 0x1F4; ++i )
    {
      if ( (__int64 *)qword_1403002C0 == &qword_1403002C0 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      if ( !dword_1402FE2B0 )
      {
        dword_1402FE2B0 = -1;
        KeSetEvent(&stru_140300218, 0, 0);
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
      v10 = qword_1403013A0;
      v11 = Count;
      do
      {
        v12 = *v10;
        if ( (*(_BYTE *)(*v10 + 204LL) & 0x40) == 0 )
        {
          ExFreePoolWithTag(*(PVOID *)(v12 + 104), 0);
          v13 = *(void **)(v12 + 224);
          *(_QWORD *)(v12 + 104) = 0LL;
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
