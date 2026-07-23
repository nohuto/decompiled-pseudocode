/*
 * XREFs of RtlSetThreadSubProcessTag @ 0x18003B510
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003B3F4 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlpWnfWalkUserSubscriptionList @ 0x180065EF8 (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlpTpIoCallback @ 0x180096590 (RtlpTpIoCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
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
