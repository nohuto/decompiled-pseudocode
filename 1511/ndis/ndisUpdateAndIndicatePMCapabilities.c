/*
 * XREFs of ndisUpdateAndIndicatePMCapabilities @ 0x1C0046DDC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C0046540 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisAoAcInitDisconnectedStandby @ 0x1C004A48C (ndisAoAcInitDisconnectedStandby.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00CEB60 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C001FFD8 (ndisScheduleWorkItemInternal.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 */

__int64 __fastcall ndisUpdateAndIndicatePMCapabilities(__int64 a1)
{
  _QWORD *PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  if ( PoolWithTag )
  {
    ndisReferenceMiniportNoCheck(a1, 0x10u);
    *PoolWithTag = a1;
    PoolWithTag[1] = ndisQueuedUpdatePMCapabilities;
    ndisScheduleWorkItemInternal((__int64)PoolWithTag);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)byte_1C0083715 >= 2u )
      WPP_SF_(0x78u, &WPP_6e2fc96078008429fd92c28490874609_Traceguids);
    return 3221225626LL;
  }
}
