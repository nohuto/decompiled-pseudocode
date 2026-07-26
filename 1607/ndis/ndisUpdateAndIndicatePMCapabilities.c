/*
 * XREFs of ndisUpdateAndIndicatePMCapabilities @ 0x1C004AE24
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisOidPrePMHaltOnSuspend @ 0x1C004A080 (ndisOidPrePMHaltOnSuspend.c)
 *     ndisAoAcInitDisconnectedStandby @ 0x1C004EE1C (ndisAoAcInitDisconnectedStandby.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BBF8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
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
    if ( (unsigned __int8)byte_1C00895D5 >= 2u )
      WPP_SF_(0x78u, &WPP_cb02054c676b38280cb5aae44c86a7fe_Traceguids);
    return 3221225626LL;
  }
}
