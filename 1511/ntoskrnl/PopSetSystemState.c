/*
 * XREFs of PopSetSystemState @ 0x1400F1DD8
 * Callers:
 *     PoSetUserPresent @ 0x1400F1D98 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x1401ECA80 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x14054B1E4 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopUserPresentSet @ 0x1400F1E14 (PopUserPresentSet.c)
 *     PopResetIdleTime @ 0x1400F1E98 (PopResetIdleTime.c)
 *     PopDiagTraceSetSystemState @ 0x1400F1F60 (PopDiagTraceSetSystemState.c)
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
      result = PopResetIdleTime(3LL);
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
