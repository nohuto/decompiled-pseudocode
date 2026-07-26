/*
 * XREFs of ndisDereferenceDmaAdapter @ 0x1C005BD10
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C0046080 (NdisFreeSharedMemory.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C005BDF0 (ndisMQueuedAllocateSharedHandler.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00AF6B0 (ndisMInitializeScatterGatherDma.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C00CCF30 (NdisMDeregisterScatterGatherDma.c)
 *     ndisFreeSharedMemory @ 0x1C00D37DC (ndisFreeSharedMemory_ea_1C00D37DC.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D4D9C (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E5488 (ndisPnPIrpRemoveDevice.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 *     NdisMAllocateMapRegisters @ 0x1C00F3800 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C00F3D60 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C00F3E20 (NdisMFreeMapRegisters.c)
 *     ndisPmInitializeMiniport @ 0x1C00F5230 (ndisPmInitializeMiniport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     PplDestroyLookasideList @ 0x1C006FA08 (PplDestroyLookasideList.c)
 */

void __fastcall ndisDereferenceDmaAdapter(PVOID P)
{
  __int64 v1; // rdi
  KIRQL v3; // bp
  __int64 v4; // rcx
  void *v5; // rcx
  struct _KEVENT *v6; // rcx

  v1 = *((_QWORD *)P + 1);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 464747;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 18, 0xFFFFFFFF) == 1 )
  {
    v4 = *((_QWORD *)P + 3);
    if ( v4 )
    {
      *((_QWORD *)P + 16) = v4;
      (*(void (**)(void))(*(_QWORD *)(v4 + 8) + 8LL))();
      *((_QWORD *)P + 3) = 0LL;
    }
    v5 = (void *)*((_QWORD *)P + 8);
    if ( v5 )
    {
      PplDestroyLookasideList(v5);
      *((_QWORD *)P + 8) = 0LL;
    }
    v6 = (struct _KEVENT *)*((_QWORD *)P + 10);
    if ( v6 )
      KeSetEvent(v6, 0, 0);
    *(_QWORD *)(v1 + 504) = 0LL;
    ExFreePoolWithTag(P, 0);
  }
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v3);
}
