/*
 * XREFs of ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C00589A0
 * Callers:
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ @ 0x1C0057B58 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ.c)
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0059930 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C004D130 (-FaultOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::FaultAllAllocations(VIDMM_DEVICE *this)
{
  unsigned int i; // ebx
  _QWORD **v3; // r14
  _QWORD *v4; // rsi
  VIDMM_DEVICE **v5; // rdx

  for ( i = 0; i < *((_DWORD *)this + 14); ++i )
  {
    v3 = (_QWORD **)(*((_QWORD *)this + 5) + 56LL * i + 32);
    v4 = *v3;
    while ( v4 != v3 )
    {
      v5 = (VIDMM_DEVICE **)(v4 - 7);
      v4 = (_QWORD *)*v4;
      if ( (*(_DWORD *)(*(_QWORD *)*v5 + 76LL) & 0x100) == 0 )
        VIDMM_GLOBAL::FaultOneAllocation(*(VIDMM_GLOBAL **)this, v5);
    }
  }
}
