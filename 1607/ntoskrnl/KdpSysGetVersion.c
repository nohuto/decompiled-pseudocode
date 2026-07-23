/*
 * XREFs of KdpSysGetVersion @ 0x1406F418C
 * Callers:
 *     KdSystemDebugControl @ 0x14064E93C (KdSystemDebugControl.c)
 * Callees:
 *     <none>
 */

void __fastcall KdpSysGetVersion(__int64 a1)
{
  __int128 v1; // xmm1
  __int64 v2; // xmm0_8

  v1 = xmmword_1402F4E38;
  *(_OWORD *)a1 = KdVersionBlock;
  v2 = qword_1402F4E48;
  *(_OWORD *)(a1 + 16) = v1;
  *(_QWORD *)(a1 + 32) = v2;
}
