/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x1401E6E34
 * Callers:
 *     PpmIdleSelectStates @ 0x140134970 (PpmIdleSelectStates.c)
 * Callees:
 *     PopCheckForDeepSleep @ 0x1401F3C40 (PopCheckForDeepSleep.c)
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 33) )
    return (unsigned __int8)PopCheckForDeepSleep() != 0;
  return v1;
}
