/*
 * XREFs of HUBPSM30_StartingTimerForAllowingReconnect @ 0x1C000E620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_StartingTimerForAllowingReconnect(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  v2 = -20000000LL;
  v3 = *(_DWORD *)(v1 + 1336);
  v4 = *(_QWORD *)(v1 + 1312);
  if ( (v3 & 2) == 0 )
    v2 = -10000000LL;
  ExSetTimer(v4, v2, 0LL, 0LL);
  return 3013LL;
}
