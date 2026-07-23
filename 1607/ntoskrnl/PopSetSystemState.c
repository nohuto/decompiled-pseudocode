/*
 * XREFs of PopSetSystemState @ 0x1400B2BC4
 * Callers:
 *     PoSetUserPresent @ 0x1400B2B84 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402056F0 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x1405305A8 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140581298 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x140007ABC (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1400B2C00 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1400B2C84 (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime(3);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
