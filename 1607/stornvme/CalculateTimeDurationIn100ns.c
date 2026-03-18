/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C000C7F0
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0001F70 (NVMeCompletionDpcRoutine.c)
 *     RecordCommandTimingHistory @ 0x1C000EAEC (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) % a2) / a2 + 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2));
  return v2;
}
