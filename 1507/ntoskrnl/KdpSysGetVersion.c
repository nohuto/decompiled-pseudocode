/*
 * XREFs of KdpSysGetVersion @ 0x14072A890
 * Callers:
 *     KdSystemDebugControl @ 0x140697CC4 (KdSystemDebugControl.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpSysGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8

  v1 = xmmword_140316EA0;
  *(_OWORD *)a1 = KdVersionBlock;
  v2 = qword_140316EB0;
  *(_OWORD *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 32) = v2;
}
