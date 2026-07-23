/*
 * XREFs of PopNetUserPresencePredictionNotify @ 0x140673898
 * Callers:
 *     PopUpdateSmartUserPresencePredictions @ 0x140675104 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     PopNetClearConnectivityConstraint @ 0x140580A6C (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetUserPresencePredictionNotify(__int64 a1)
{
  char result; // al

  if ( !a1 )
    return PopNetClearConnectivityConstraint(4);
  result = MEMORY[0xFFFFF78000000014];
  if ( a1 > MEMORY[0xFFFFF78000000014] )
  {
    result = 0;
    if ( (unsigned __int64)(a1 - MEMORY[0xFFFFF78000000014]) >= 0x165A0BC00LL )
      return PopNetSetConnectivityConstraint(4);
  }
  return result;
}
