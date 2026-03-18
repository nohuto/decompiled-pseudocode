/*
 * XREFs of KdpSysGetVersion @ 0x1406AA434
 * Callers:
 *     KdSystemDebugControl @ 0x1406196A8 (KdSystemDebugControl.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpSysGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8

  v1 = xmmword_1402C7DD0;
  *(_OWORD *)a1 = KdVersionBlock;
  v2 = qword_1402C7DE0;
  *(_OWORD *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 32) = v2;
}
