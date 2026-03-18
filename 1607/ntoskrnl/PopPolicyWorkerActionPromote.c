/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x140534858
 * Callers:
 *     PopPolicyWorkerThread @ 0x140009874 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x140008B0C (PopGetPolicyWorker.c)
 *     KeAreApcsDisabled @ 0x140009B90 (KeAreApcsDisabled.c)
 *     PopSetPowerActionState @ 0x140114580 (PopSetPowerActionState.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopIssueActionRequest @ 0x140530068 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  char v1; // bl
  int v2; // ecx

  PopAcquirePolicyLock();
  if ( !PopAction )
    goto LABEL_2;
  v1 = PopAction;
  if ( !byte_140303461 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    PopSetPowerActionState(1);
    v2 = 2;
    goto LABEL_12;
  }
  if ( byte_140303461 != 2 )
    goto LABEL_2;
  if ( (int)PopIssueActionRequest(1, (POWER_ACTION)qword_140303464, SHIDWORD(qword_140303464), dword_14030346C) >= 0 )
  {
    PopAction &= ~v1;
    goto LABEL_2;
  }
  if ( byte_140303461 != 2 )
  {
    v2 = 1;
LABEL_12:
    PopGetPolicyWorker(v2);
  }
LABEL_2:
  PopReleasePolicyLock();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
