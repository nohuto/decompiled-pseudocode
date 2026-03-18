/*
 * XREFs of HUBHSM_WaitingForOvercurrentToClear @ 0x1C0007DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C00028BC (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall HUBHSM_WaitingForOvercurrentToClear(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 960);
  v3 = 500;
  WPP_RECORDER_SF_qd(
    *(_QWORD *)(v1 + 2464),
    2u,
    3u,
    0x38u,
    (__int64)&WPP_ad6d99566eff37ab7f3364317bcf702c_Traceguids,
    v1,
    v3);
  ExSetTimer(*(_QWORD *)(v1 + 2248), -5000000LL, 0LL, 0LL);
  return 1000LL;
}
