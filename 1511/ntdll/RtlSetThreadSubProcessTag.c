/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x180009FC0
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000840C (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180009F20 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpTpIoCallback @ 0x1800950E0 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

void *__fastcall RtlSetThreadSubProcessTag(void *a1)
{
  struct _TEB *v1; // rax
  void *SubProcessTag; // rbx
  char v4[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+26h] [rbp-32h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  SubProcessTag = v1->SubProcessTag;
  v1->SubProcessTag = a1;
  if ( MEMORY[0x7FFE0390] && a1 != SubProcessTag )
  {
    v7 = (int)a1;
    v5 = 1349;
    v6 = (int)SubProcessTag;
    NtTraceEvent(MEMORY[0x7FFE0390], 1026LL, 8LL, v4);
  }
  return SubProcessTag;
}
