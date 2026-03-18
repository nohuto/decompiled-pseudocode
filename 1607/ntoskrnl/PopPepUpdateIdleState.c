/*
 * XREFs of PopPepUpdateIdleState @ 0x1400C2BF8
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x1400C2B4C (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1400C2D54 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130748 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x140141D40 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014BD30 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140205F58 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402062B4 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400C29F8 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1400C2C54 (PopPepGetComponentPreferedIdleState.c)
 */

__int64 __fastcall PopPepUpdateIdleState(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = PopPepGetComponentPreferedIdleState(a2);
  if ( (_DWORD)result != *(_DWORD *)(a2 + 176) )
  {
    if ( a3 )
      LODWORD(result) = result | 0x80000000;
    return PopPepTriggerActivity(a1, a2, 1, result);
  }
  return result;
}
