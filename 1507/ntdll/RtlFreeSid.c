/*
 * XREFs of RtlFreeSid @ 0x18006DD20
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

PVOID __cdecl RtlFreeSid(PSID Sid)
{
  PSID v1; // rbx

  v1 = Sid;
  if ( RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid) )
    return 0LL;
  return v1;
}
