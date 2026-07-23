/*
 * XREFs of PopPepUpdateIdleState @ 0x1400C0A88
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x1400C09DC (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x1400C0BE4 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130CB8 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetLatency @ 0x1401422B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014C2A0 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x140205D84 (PopPepComponentSetWakeHint.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402060E0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x1400C0888 (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x1400C0AE4 (PopPepGetComponentPreferedIdleState.c)
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
