/*
 * XREFs of PopNetUserPresencePredictionNotify @ 0x1406737B4
 * Callers:
 *     PopUpdateSmartUserPresencePredictions @ 0x140675020 (PopUpdateSmartUserPresencePredictions.c)
 * Callees:
 *     PopNetClearConnectivityConstraint @ 0x1405805C0 (PopNetClearConnectivityConstraint.c)
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
