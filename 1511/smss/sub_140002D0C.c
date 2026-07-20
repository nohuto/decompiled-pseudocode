/*
 * XREFs of sub_140002D0C @ 0x140002D0C
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_140002A8C @ 0x140002A8C (sub_140002A8C.c)
 * Callees:
 *     <none>
 */

__int64 sub_140002D0C()
{
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  Interval.QuadPart = -2500000LL;
  while ( 1 )
  {
    result = RtlGetCurrentServiceSessionId();
    if ( (_DWORD)result != -1 )
      break;
    NtDelayExecution(0, &Interval);
  }
  return result;
}
