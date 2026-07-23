/*
 * XREFs of PpmEndProfileAccumulation @ 0x140675CA4
 * Callers:
 *     PpmEventTraceProfiles @ 0x140578C00 (PpmEventTraceProfiles.c)
 *     PpmApplyProfile @ 0x140675B20 (PpmApplyProfile.c)
 * Callees:
 *     <none>
 */

void __fastcall PpmEndProfileAccumulation(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx

  v2 = a2 - a1[353];
  a1[357] += v2;
  if ( a1[355] < v2 )
    a1[355] = v2;
  if ( a1[356] > v2 )
    a1[356] = v2;
  ++a1[354];
  a1[353] = 0LL;
}
