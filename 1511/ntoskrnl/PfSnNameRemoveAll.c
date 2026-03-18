/*
 * XREFs of PfSnNameRemoveAll @ 0x1403F1D78
 * Callers:
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnNameRemove @ 0x1400096DC (PfSnNameRemove.c)
 *     PfSnActiveTraceGetNext @ 0x14002D7B4 (PfSnActiveTraceGetNext.c)
 *     PfSnLogStreamDelete @ 0x1404C4900 (PfSnLogStreamDelete.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *result; // rax
  struct _EX_RUNDOWN_REF *v4; // rbx

  for ( i = 0LL; ; i = v4 )
  {
    result = PfSnActiveTraceGetNext(i);
    v4 = (struct _EX_RUNDOWN_REF *)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_QWORD *)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}
