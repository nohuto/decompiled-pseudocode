/*
 * XREFs of MiWaitForFreePage @ 0x14022ECFC
 * Callers:
 *     MiBuildForkPte @ 0x14000253C (MiBuildForkPte.c)
 *     MiDoneWithThisPageGetAnother @ 0x140003E18 (MiDoneWithThisPageGetAnother.c)
 *     MiHandleForkTransitionPte @ 0x140004220 (MiHandleForkTransitionPte.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiAllocateKernelStackPages @ 0x140069190 (MiAllocateKernelStackPages.c)
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiGetSystemPage @ 0x1400E1348 (MiGetSystemPage.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmAllocateIndependentPages @ 0x1405610B8 (MmAllocateIndependentPages.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 *     MiFillPagedPoolLockedDown @ 0x1406A4AAC (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 *     MiNoPagesLastChance @ 0x14022DB04 (MiNoPagesLastChance.c)
 */

void __fastcall MiWaitForFreePage(__int64 a1)
{
  KSPIN_LOCK *v1; // r14
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  int v7; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 4032);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 4032), &LockHandle);
  v3 = *(_QWORD *)(a1 + 5504);
  if ( v3 >= 0x80 )
    goto LABEL_10;
  v4 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 2) != 0 )
  {
    if ( v3 >= 2 )
      goto LABEL_10;
    goto LABEL_4;
  }
  if ( (__int16 *)a1 != MiSystemPartition )
  {
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v4 = 128;
  v5 = 1;
LABEL_5:
  v6 = a1 + 32LL * v5;
  v7 = *(_DWORD *)(v6 + 4064);
  do
  {
    KeResetEvent((PRKEVENT)(v6 + 4040));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    MiObtainFreePages(a1);
    if ( KeWaitForSingleObject((PVOID)(v6 + 4040), WrFreePage, 0, 0, (PLARGE_INTEGER)&MiSeventySeconds) == 258
      && v7 == *(_DWORD *)(v6 + 4064) )
    {
      MiNoPagesLastChance(a1, v4);
    }
    v7 = *(_DWORD *)(v6 + 4064);
    KeAcquireInStackQueuedSpinLock(v1, &LockHandle);
  }
  while ( *(_QWORD *)(a1 + 5504) < (unsigned __int64)v4 );
LABEL_10:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
