/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400F4D44
 * Callers:
 *     ExSetTimer @ 0x1400F4ACC (ExSetTimer.c)
 *     ExpSetTimer2 @ 0x1400F4D70 (ExpSetTimer2.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( !*(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 8) > -2LL;
  return v1;
}
