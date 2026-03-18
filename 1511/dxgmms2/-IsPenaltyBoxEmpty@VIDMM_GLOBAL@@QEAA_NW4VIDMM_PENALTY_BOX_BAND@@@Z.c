/*
 * XREFs of ?IsPenaltyBoxEmpty@VIDMM_GLOBAL@@QEAA_NW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001C2C8
 * Callers:
 *     ?HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z @ 0x1C0041C70 (-HandlePromotionCandidates@VIDMM_GLOBAL@@QEAAXPEA_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::IsPenaltyBoxEmpty(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v8, (struct _KTHREAD **)(a1 + 41208), a3, a4);
  v6 = (_QWORD *)(a1 + 16 * ((unsigned int)(a2 - 1) + 2577LL));
  LOBYTE(a2) = *v6 == (_QWORD)v6;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  return a2;
}
