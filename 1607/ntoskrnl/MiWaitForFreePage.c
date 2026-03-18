/*
 * XREFs of MiWaitForFreePage @ 0x1401F41DC
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1400019C0 (MiAllocateKernelStackPages.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiCopyOnWriteEx @ 0x1400E2730 (MiCopyOnWriteEx.c)
 *     MiGetSystemPage @ 0x1400FDC54 (MiGetSystemPage.c)
 *     MiGetPageTablePages @ 0x140102808 (MiGetPageTablePages.c)
 *     MiDoneWithThisPageGetAnother @ 0x14010AD3C (MiDoneWithThisPageGetAnother.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x1401E8B48 (MiSwitchToTransition.c)
 *     MiSplitDirectMapPage @ 0x1401EDA58 (MiSplitDirectMapPage.c)
 *     MiHandleForkTransitionPte @ 0x1401F71F0 (MiHandleForkTransitionPte.c)
 *     MmAllocateIndependentPages @ 0x1404E6034 (MmAllocateIndependentPages.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 *     MiAllocateDriverPage @ 0x140526790 (MiAllocateDriverPage.c)
 *     MiAllocateTopLevelPage @ 0x140656D60 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x14065A01C (MiFillPagedPoolLockedDown.c)
 *     MiFillPerSessionProtos @ 0x140661E34 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     MiObtainFreePages @ 0x1401E9B08 (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x1401F3384 (MiNoPagesLastChance.c)
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
