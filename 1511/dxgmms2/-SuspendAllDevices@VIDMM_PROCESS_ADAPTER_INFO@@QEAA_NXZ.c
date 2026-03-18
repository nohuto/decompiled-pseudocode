/*
 * XREFs of ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_NXZ @ 0x1C007F0DC
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C007F188 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x1C007F020 (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1C007F850 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C007F9A4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 */

char __fastcall VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(VIDMM_PROCESS_ADAPTER_INFO *this)
{
  char v1; // r8
  unsigned int i; // ebx
  __int64 v4; // rbp
  _QWORD **v5; // rcx
  _QWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rsi
  VIDMM_DEVICE *v9; // rcx

  v1 = 0;
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v4 = 184LL * i;
    v5 = (_QWORD **)(v4 + *((_QWORD *)this + 2) + 40LL);
    v6 = *v5;
    if ( *v5 != v5 )
    {
      do
      {
        v7 = v6 - 2;
        v6 = (_QWORD *)*v6;
        v8 = v7[6];
        if ( *(_QWORD *)(v8 + 24)
          && (*(_DWORD *)(v8 + 52) & 3) == 0
          && !VIDMM_DEVICE::IsResumedRecently((VIDMM_DEVICE *)v8) )
        {
          VIDMM_DEVICE::FullySuspend(v9);
          VIDMM_DEVICE::FaultAllAllocations((VIDMM_DEVICE *)v8);
          v1 = 1;
        }
      }
      while ( v6 != (_QWORD *)(v4 + *((_QWORD *)this + 2) + 40LL) );
    }
  }
  return v1;
}
