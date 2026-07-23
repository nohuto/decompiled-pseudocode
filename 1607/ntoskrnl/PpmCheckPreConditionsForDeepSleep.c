/*
 * XREFs of PpmCheckPreConditionsForDeepSleep @ 0x1401FF5FC
 * Callers:
 *     PpmIdleSelectStates @ 0x14013BBF0 (PpmIdleSelectStates.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmCheckPreConditionsForDeepSleep(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 33) && PopDeepSleepIsEnabled && PopDeepSleepIsEngaged )
    return PopDeepSleepEvaluateWorkItemQueued == 0;
  return v1;
}
