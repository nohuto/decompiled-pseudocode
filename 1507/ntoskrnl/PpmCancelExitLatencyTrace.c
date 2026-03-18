/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x140233FE4
 * Callers:
 *     KdPowerTransition @ 0x1401FDE40 (KdPowerTransition.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x140234BE8 (PpmIdleCompleteExitLatencyTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmCancelExitLatencyTrace(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 23808);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 3) )
    {
      *(_DWORD *)(v1 + 8) = PpmExitLatencySamplingPercentage != 0;
      result = *(_QWORD *)(a1 + 23808);
      *(_BYTE *)(result + 3) = 0;
      *(_QWORD *)(result + 40) = 0LL;
    }
  }
  return result;
}
