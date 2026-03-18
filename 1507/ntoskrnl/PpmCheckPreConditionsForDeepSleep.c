/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x1402340E0
 * Callers:
 *     PpmIdleSelectStates @ 0x140160AB0 (PpmIdleSelectStates.c)
 * Callees:
 *     PopCheckForDeepSleep @ 0x140241D1C (PopCheckForDeepSleep.c)
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 33) )
    return (unsigned __int8)PopCheckForDeepSleep() != 0;
  return v1;
}
