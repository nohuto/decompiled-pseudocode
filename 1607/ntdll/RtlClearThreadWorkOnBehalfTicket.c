/*
 * XREFs of RtlClearThreadWorkOnBehalfTicket @ 0x1800782D0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 */

__int64 RtlClearThreadWorkOnBehalfTicket()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !*(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket )
    return 0LL;
  result = NtSetInformationThread(-2LL, 44LL, &v1);
  if ( (int)result >= 0 )
    *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = v1;
  return result;
}
