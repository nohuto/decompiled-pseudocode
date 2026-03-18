/*
 * XREFs of PopSetSystemState @ 0x1400B4D8C
 * Callers:
 *     PoSetUserPresent @ 0x1400B4D4C (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1402058C4 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x140580DEC (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x140007F48 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1400B4DC8 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1400B4E4C (PopDiagTraceSetSystemState.c)
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
