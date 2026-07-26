/*
 * XREFs of ndisDereferenceDmaAdapter @ 0x1C005F880
 * Callers:
 *     NdisFreeSharedMemory @ 0x1C004B990 (NdisFreeSharedMemory.c)
 *     ndisMQueuedAllocateSharedHandler @ 0x1C005F960 (ndisMQueuedAllocateSharedHandler.c)
 *     ndisMInitializeScatterGatherDma @ 0x1C00B1620 (ndisMInitializeScatterGatherDma.c)
 *     NdisMDeregisterScatterGatherDma @ 0x1C00CBDF0 (NdisMDeregisterScatterGatherDma.c)
 *     ndisFreeSharedMemory @ 0x1C00D2C9C (ndisFreeSharedMemory_ea_1C00D2C9C.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisMCommonHaltMiniport @ 0x1C00EB5E4 (ndisMCommonHaltMiniport.c)
 *     NdisMAllocateMapRegisters @ 0x1C00F45F0 (NdisMAllocateMapRegisters.c)
 *     NdisMDeregisterDmaChannel @ 0x1C00F4B50 (NdisMDeregisterDmaChannel.c)
 *     NdisMFreeMapRegisters @ 0x1C00F4C10 (NdisMFreeMapRegisters.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     PplDestroyLookasideList @ 0x1C0073D38 (PplDestroyLookasideList.c)
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
  *(_DWORD *)(v1 + 1856) = 464886;
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
