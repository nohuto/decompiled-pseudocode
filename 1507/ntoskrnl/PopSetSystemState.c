/*
 * XREFs of PopSetSystemState @ 0x14012DEA8
 * Callers:
 *     PoSetUserPresent @ 0x14012DE68 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x14023AD3C (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x14056624C (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x1405C25FC (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopUserPresentSet @ 0x14012DEE4 (PopUserPresentSet.c)
 *     PopResetIdleTime @ 0x14012DF68 (PopResetIdleTime.c)
 *     PopDiagTraceSetSystemState @ 0x14012E0FC (PopDiagTraceSetSystemState.c)
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
