/*
 * XREFs of PpmCancelExitLatencyTrace @ 0x1401FF500
 * Callers:
 *     KdPowerTransition @ 0x1401D1594 (KdPowerTransition.c)
 *     PpmIdleCompleteExitLatencyTrace @ 0x1402001F8 (PpmIdleCompleteExitLatencyTrace.c)
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
