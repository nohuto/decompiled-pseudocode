/*
 * XREFs of RtlFreeSid @ 0x18006DD20
 * Callers:
 *     RtlCheckSandboxedToken @ 0x1800C2BF0 (RtlCheckSandboxedToken.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 */

unsigned __int64 __fastcall RtlFreeSid(unsigned __int64 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  if ( (unsigned int)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1) )
    return 0LL;
  return v1;
}
