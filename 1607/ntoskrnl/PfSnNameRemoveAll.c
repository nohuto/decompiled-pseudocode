/*
 * XREFs of PfSnNameRemoveAll @ 0x1404F4BC4
 * Callers:
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnNameRemove @ 0x140034610 (PfSnNameRemove.c)
 *     PfSnActiveTraceGetNext @ 0x1400EAFA0 (PfSnActiveTraceGetNext.c)
 *     PfSnLogStreamDelete @ 0x1404CF25C (PfSnLogStreamDelete.c)
 */

__int64 *__fastcall PfSnNameRemoveAll(__int64 a1)
{
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *result; // rax
  __int64 v4; // rbx

  for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v4 )
  {
    result = PfSnActiveTraceGetNext(i);
    v4 = (__int64)result;
    if ( !result )
      break;
    if ( (unsigned int)PfSnNameRemove((__int64)result, *(_QWORD *)(a1 + 16)) )
      PfSnLogStreamDelete(a1, v4);
  }
  return result;
}
