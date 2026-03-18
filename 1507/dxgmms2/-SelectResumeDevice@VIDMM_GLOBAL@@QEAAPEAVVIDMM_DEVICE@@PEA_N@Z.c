/*
 * XREFs of ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C0033210
 * Callers:
 *     ?SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING_QUEUE_PACKET@@PEAPEAVVIDMM_DEVICE@@@Z @ 0x1C0035E60 (-SelectPagingOperation@VIDMM_WORKER_THREAD@@QEAA_NPEAPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_PAGING.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0005D28 (-IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C0035E44 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 */

struct VIDMM_DEVICE *__fastcall VIDMM_GLOBAL::SelectResumeDevice(VIDMM_GLOBAL *this, bool *a2)
{
  int v5; // esi
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 1) )
  {
    if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 2) )
    {
      if ( VIDMM_GLOBAL::IsPenaltyBoxEmpty((__int64)this, 3) )
      {
        *a2 = 0;
        return 0LL;
      }
      v5 = 3;
    }
    else
    {
      v5 = 2;
    }
  }
  else
  {
    v5 = 1;
  }
  *a2 = 1;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v13, (VIDMM_GLOBAL *)((char *)this + 41152));
  v6 = *((_QWORD *)this + 2 * (unsigned int)(v5 - 1) + 5147) - 168LL;
  if ( v5 == 2 )
  {
    v7 = *(_QWORD **)(v6 + 208);
    if ( !v7 )
      goto LABEL_16;
    v8 = v7[24];
    if ( v8 <= *(_QWORD *)(*v7 + 4608LL) )
      goto LABEL_16;
    v9 = 8LL;
    v10 = *((_QWORD *)this + 576) - v8;
  }
  else
  {
    if ( v5 != 3 )
      goto LABEL_16;
    v11 = *((_QWORD *)this + 576);
    v12 = *(_QWORD *)(v6 + 184);
    if ( v11 >= v12 )
      goto LABEL_16;
    v10 = v11 - v12;
    v9 = 6LL;
  }
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v10, v9);
  v6 = 0LL;
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return (struct VIDMM_DEVICE *)v6;
}
