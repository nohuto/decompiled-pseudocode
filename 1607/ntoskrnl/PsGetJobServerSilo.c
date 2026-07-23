/*
 * XREFs of PsGetJobServerSilo @ 0x140076F4C
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140076708 (PsGetEffectiveServerSilo.c)
 *     PspGetJobSilo @ 0x1400767A8 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobServerSilo(__int64 a1, __int64 *a2)
{
  __int64 result; // rax

  if ( !a1 )
  {
    result = 3221225485LL;
    goto LABEL_3;
  }
  result = PspGetJobSilo(a1);
  if ( !result )
  {
LABEL_3:
    *a2 = 0LL;
    return result;
  }
  *a2 = PsGetEffectiveServerSilo(result);
  return 0LL;
}
