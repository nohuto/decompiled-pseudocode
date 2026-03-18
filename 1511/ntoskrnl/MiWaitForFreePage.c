/*
 * XREFs of MiWaitForFreePage @ 0x1401E4C20
 * Callers:
 *     MiGetSystemPage @ 0x140011A30 (MiGetSystemPage.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiAllocateKernelStackPages @ 0x1400DFB3C (MiAllocateKernelStackPages.c)
 *     MiDoneWithThisPageGetAnother @ 0x1400EC988 (MiDoneWithThisPageGetAnother.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MiHandleForkTransitionPte @ 0x1401E4E64 (MiHandleForkTransitionPte.c)
 *     MmCreateProcessAddressSpace @ 0x1403CB7AC (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1403CBDCC (MmAllocateIndependentPages.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x140621CD4 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x1406251DC (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 */

void __fastcall MiWaitForFreePage(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  KSPIN_LOCK *v2; // r15
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  int v7; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (KSPIN_LOCK *)(a1 + 4224);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
  if ( ((__int64)CurrentThread[1].Queue & 2) != 0 || (int *)a1 != MiSystemPartition )
  {
    v5 = 0;
    v4 = 34;
  }
  else
  {
    v4 = 160;
    v5 = 1;
  }
  v6 = a1 + 32LL * v5;
  v7 = *(_DWORD *)(v6 + 4256);
  while ( *(_QWORD *)(a1 + 5888) < (unsigned __int64)v4 )
  {
    KeResetEvent((PRKEVENT)(v6 + 4232));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiObtainFreePages(a1);
    if ( KeWaitForSingleObject((PVOID)(v6 + 4232), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiSeventySeconds) == 258
      && v7 == *(_DWORD *)(v6 + 4256) )
    {
      MiNoPagesLastChance(a1, v4);
    }
    v7 = *(_DWORD *)(v6 + 4256);
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
