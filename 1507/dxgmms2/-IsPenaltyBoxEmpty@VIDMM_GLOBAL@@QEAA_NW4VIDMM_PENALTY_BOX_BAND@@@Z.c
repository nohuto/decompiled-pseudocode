/*
 * XREFs of ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0005D28
 * Callers:
 *     ?SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z @ 0x1C0033210 (-SelectResumeDevice@VIDMM_GLOBAL@@QEAAPEAVVIDMM_DEVICE@@PEA_N@Z.c)
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0035D80 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0005E14 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00061D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 */

char __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmpty(__int64 a1, int a2)
{
  _QWORD *v4; // rax
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6, (struct DXGPUSHLOCK *const)(a1 + 41152), 0);
  DXGPUSHLOCK::AcquireShared(v7);
  v8 = 1;
  v4 = (_QWORD *)(16LL * (unsigned int)(a2 - 1) + a1 + 41176);
  LOBYTE(a2) = *v4 == (_QWORD)v4;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return a2;
}
