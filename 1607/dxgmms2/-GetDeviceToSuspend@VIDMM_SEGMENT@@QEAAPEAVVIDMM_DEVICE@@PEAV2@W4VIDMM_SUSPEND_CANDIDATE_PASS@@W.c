/*
 * XREFs of ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C008FE00
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@W4_VIDMM_PLACEMENT_RESTRICTION@@PEA_NPEAPEAV3@@Z @ 0x1C0090408 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C008F5EC (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x1C00901C8 (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C0090D08 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_SEGMENT::GetDeviceToSuspend(
        __int64 a1,
        VIDMM_DEVICE *a2,
        int a3,
        int a4,
        struct VIDMM_DEVICE **a5)
{
  _QWORD *v5; // rbx
  _QWORD *v7; // rsi
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  VIDMM_DEVICE *v10; // rdi
  __int64 v11; // rdx
  VIDMM_DEVICE *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx

  v5 = (_QWORD *)(a1 + 128);
  v7 = *(_QWORD **)(a1 + 128);
  if ( v7 != (_QWORD *)(a1 + 128) )
  {
    do
    {
      v8 = v7 - 3;
      v7 = (_QWORD *)*v7;
      if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)*v8) && !*(_BYTE *)(*(_QWORD *)(*v8 + 32LL) + 288LL) )
      {
        v9 = (_QWORD *)v8[5];
        while ( v9 != v8 + 5 )
        {
          v10 = (VIDMM_DEVICE *)v9[4];
          v9 = (_QWORD *)*v9;
          if ( VIDMM_DEVICE::CanSuspendThisDevice(v10, a2, a3, a4) )
          {
            if ( !VIDMM_DEVICE::IsResumedRecently(v10) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = v10;
              v20 = v8 + 3;
              v21 = v8[3];
              v22 = (_QWORD *)v8[4];
              if ( *(_QWORD **)(v21 + 8) != v8 + 3 || (_QWORD *)*v22 != v20 )
                __fastfail(3u);
              *v22 = v21;
              *(_QWORD *)(v21 + 8) = v22;
              v23 = (_QWORD *)v5[1];
              if ( (_QWORD *)*v23 != v5 )
                __fastfail(3u);
              *v20 = v5;
              v8[4] = v23;
              *v23 = v20;
              v5[1] = v20;
              return v10;
            }
            if ( VIDMM_DEVICE::IsBetterYieldCandidate(v12, *a5) )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = v10;
              *a5 = v10;
            }
          }
        }
      }
    }
    while ( v7 != v5 );
  }
  return 0LL;
}
