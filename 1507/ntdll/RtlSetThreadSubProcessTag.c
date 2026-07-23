/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x18003C310
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003C274 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x1800F5F70 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

PVOID __cdecl RtlSetThreadSubProcessTag(PVOID SubProcessTag)
{
  struct _TEB *v1; // rax
  PVOID v2; // rbx
  _BYTE Fields[6]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v5; // [rsp+26h] [rbp-32h]
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  v1 = NtCurrentTeb();
  v2 = v1->SubProcessTag;
  v1->SubProcessTag = SubProcessTag;
  if ( MEMORY[0x7FFE0390] && SubProcessTag != v2 )
  {
    v7 = (int)SubProcessTag;
    v5 = 1349;
    v6 = (int)v2;
    NtTraceEvent((HANDLE)MEMORY[0x7FFE0390], 0x402u, 8u, Fields);
  }
  return v2;
}
