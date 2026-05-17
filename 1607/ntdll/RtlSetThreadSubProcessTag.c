/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x18003B520
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003B404 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065F08 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpTpIoCallback @ 0x1800965A0 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
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
