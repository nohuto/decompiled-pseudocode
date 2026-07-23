/*
 * XREFs of MiWaitForFreePage @ 0x1401F4008
 * Callers:
 *     MiAllocateKernelStackPages @ 0x140001B34 (MiAllocateKernelStackPages.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiGetSystemPage @ 0x1400FB9D4 (MiGetSystemPage.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MiDoneWithThisPageGetAnother @ 0x140108ABC (MiDoneWithThisPageGetAnother.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MiHandleForkTransitionPte @ 0x1401F701C (MiHandleForkTransitionPte.c)
 *     MmAllocateIndependentPages @ 0x1404C8A68 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x140656E44 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A100 (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiObtainFreePages @ 0x1401E9934 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x1401F31B0 (MiNoPagesLastChance.c)
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
  v2 = (KSPIN_LOCK *)(a1 + 4352);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4352), &LockHandle);
  if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) != 0 || (int *)a1 != MiSystemPartition )
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
  v7 = *(_DWORD *)(v6 + 4384);
  while ( *(_QWORD *)(a1 + 6464) < (unsigned __int64)v4 )
  {
    KeResetEvent((PRKEVENT)(v6 + 4360));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiObtainFreePages(a1);
    if ( KeWaitForSingleObject((PVOID)(v6 + 4360), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiSeventySeconds) == 258
      && v7 == *(_DWORD *)(v6 + 4384) )
    {
      MiNoPagesLastChance(a1, v4);
    }
    v7 = *(_DWORD *)(v6 + 4384);
    KeAcquireInStackQueuedSpinLock(v2, &LockHandle);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
