/*
 * XREFs of PopPepUpdateIdleState @ 0x140028640
 * Callers:
 *     PopPepCompleteComponentActiveActivity @ 0x140028594 (PopPepCompleteComponentActiveActivity.c)
 *     PopPepTriggerComponentActivatingActivity @ 0x140028824 (PopPepTriggerComponentActivatingActivity.c)
 *     PopPepIdleTimeoutRoutine @ 0x140135FA0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140138590 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepComponentSetResidency @ 0x14017143C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetLatency @ 0x1401715E4 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetWakeHint @ 0x14023B35C (PopPepComponentSetWakeHint.c)
 * Callees:
 *     PopPepTriggerActivity @ 0x14002844C (PopPepTriggerActivity.c)
 *     PopPepGetComponentPreferedIdleState @ 0x140028698 (PopPepGetComponentPreferedIdleState.c)
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
