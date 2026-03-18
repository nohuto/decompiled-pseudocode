/*
 * XREFs of PopPepUpdateIdleState @ 0x1400DC24C
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x1400DC1A0 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1400DC804 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140125F3C (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401ED110 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1401ED1F0 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1401ED2E0 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1401ED734 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400DC038 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1400DC2A8 (PopPepGetComponentPreferedIdleState.c)
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
