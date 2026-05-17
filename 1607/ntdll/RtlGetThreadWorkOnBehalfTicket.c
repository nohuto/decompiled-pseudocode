/*
 * XREFs of RtlGetThreadWorkOnBehalfTicket @ 0x18003D220
 * Callers:
 *     TppWorkPost @ 0x18003CDF4 (TppWorkPost.c)
 *     TpPostWork @ 0x18003CEF0 (TpPostWork.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlGetThreadWorkOnBehalfTicket(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 3) == 3 )
    return 3221225712LL;
  if ( a2 == 2 )
    return ZwQueryInformationThread(-2LL, 44LL, a1, 8LL, 0LL);
  result = 0LL;
  *a1 = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
  return result;
}
