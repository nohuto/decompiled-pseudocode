/*
 * XREFs of RaidpTelemetryRegQueryRoutine @ 0x1C0009D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidpTelemetryRegQueryRoutine(__int64 a1, int a2, _WORD *a3, int a4, unsigned int *a5, __int64 a6)
{
  unsigned int v6; // eax

  v6 = a5[1];
  if ( v6 >= *a5 )
    return 3221225677LL;
  if ( a2 == 4 && a4 == 4 )
  {
    *(_WORD *)(a6 + 2LL * v6) = *a3;
    ++a5[1];
  }
  return 0LL;
}
