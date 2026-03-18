/*
 * XREFs of LinkNodeRestoreHardwareState @ 0x1C00619F4
 * Callers:
 *     ACPIDevicePowerProcessPhase2SystemSubPhase2 @ 0x1C004A0B0 (ACPIDevicePowerProcessPhase2SystemSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     LinkNodepRestoreIrqRoutingWorker @ 0x1C0061AC0 (LinkNodepRestoreIrqRoutingWorker.c)
 */

__int64 __fastcall LinkNodeRestoreHardwareState(__int64 a1, __int64 a2)
{
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  if ( (*(unsigned __int8 (**)(void))(PmHalDispatchTable + 32))() )
    return 0LL;
  if ( (__int64 *)LinkNodeListHead == &LinkNodeListHead )
  {
    (*(void (**)(void))(PmHalDispatchTable + 40))();
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x41706341u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x30uLL);
  *((_DWORD *)v5 + 7) = -1;
  *((_QWORD *)v5 + 4) = ACPIDeviceCompleteGenericPhase;
  *((_QWORD *)v5 + 5) = a2;
  *(_QWORD *)v5 = LinkNodeListHead - 56;
  KeInitializeSpinLock((PKSPIN_LOCK)v5 + 2);
  return LinkNodepRestoreIrqRoutingWorker(*(_QWORD *)(*(_QWORD *)v5 + 552LL), 0LL, 0LL, v5);
}
