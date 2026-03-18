/*
 * XREFs of ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEAV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x1C0057744
 * Callers:
 *     ?SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_PAGE_IN_POLICY_PER_COMBINATION@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEA_NPEAPEAV3@@Z @ 0x1C0057C04 (-SuspendDevices@VIDMM_WORKER_THREAD@@AEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_DEVICE@@AEBUVIDMM_P.c)
 * Callees:
 *     ?CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@@Z @ 0x1C0057074 (-CanSuspendThisDevice@VIDMM_DEVICE@@QEAA_NPEAV1@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_P.c)
 *     ?IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ @ 0x1C00579C8 (-IsResumedRecently@VIDMM_DEVICE@@QEBA_NXZ.c)
 *     ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x1C0058C30 (-IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z.c)
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
  VIDMM_DEVICE *v11; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx

  v5 = (_QWORD *)(a1 + 128);
  v7 = *(_QWORD **)(a1 + 128);
  if ( v7 != (_QWORD *)(a1 + 128) )
  {
    do
    {
      v8 = v7 - 3;
      v7 = (_QWORD *)*v7;
      if ( !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)*v8) && !*(_BYTE *)(*(_QWORD *)(*v8 + 32LL) + 312LL) )
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
              v13 = v8 + 3;
              v14 = v8[3];
              v15 = (_QWORD *)v8[4];
              if ( *(_QWORD **)(v14 + 8) != v8 + 3 || (_QWORD *)*v15 != v13 )
                __fastfail(3u);
              *v15 = v14;
              *(_QWORD *)(v14 + 8) = v15;
              v16 = (_QWORD *)v5[1];
              *v13 = v5;
              v8[4] = v16;
              if ( (_QWORD *)*v16 != v5 )
                __fastfail(3u);
              *v16 = v13;
              v5[1] = v13;
              return v10;
            }
            if ( VIDMM_DEVICE::IsBetterYieldCandidate(v11, *a5) )
              *a5 = v10;
          }
        }
      }
    }
    while ( v7 != v5 );
  }
  return 0LL;
}
