/*
 * XREFs of PopPolicyWorkerActionPromote @ 0x1404F56DC
 * Callers:
 *     PopPolicyWorkerThread @ 0x14009934C (PopPolicyWorkerThread.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1400975A0 (PopGetPolicyWorker.c)
 *     KeAreApcsDisabled @ 0x140099410 (KeAreApcsDisabled.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopIssueActionRequest @ 0x1404F7688 (PopIssueActionRequest.c)
 */

__int64 PopPolicyWorkerActionPromote()
{
  __int64 v0; // rcx
  char v2; // bl
  int v3; // ecx

  PopAcquirePolicyLock();
  if ( !PopAction )
    goto LABEL_2;
  v2 = PopAction;
  if ( !byte_1402DE081 )
  {
    if ( (PopAction & 2) == 0 )
      goto LABEL_2;
    byte_1402DE081 = 1;
    v3 = 2;
    goto LABEL_12;
  }
  if ( byte_1402DE081 != 2 )
    goto LABEL_2;
  LOBYTE(v0) = 1;
  if ( (int)PopIssueActionRequest(
              v0,
              (unsigned int)qword_1402DE084,
              HIDWORD(qword_1402DE084),
              (unsigned int)dword_1402DE08C) >= 0 )
  {
    PopAction &= ~v2;
    goto LABEL_2;
  }
  if ( byte_1402DE081 != 2 )
  {
    v3 = 1;
LABEL_12:
    PopGetPolicyWorker(v3);
  }
LABEL_2:
  PopReleasePolicyLock();
  if ( KeAreApcsDisabled() )
    __fastfail(0x20u);
  return 0LL;
}
