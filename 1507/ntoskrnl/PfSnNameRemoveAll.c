/*
 * XREFs of PfSnNameRemoveAll @ 0x14052B72C
 * Callers:
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 * Callees:
 *     PfSnActiveTraceGetNext @ 0x140112EB8 (PfSnActiveTraceGetNext.c)
 *     PfSnNameRemove @ 0x140112FB8 (PfSnNameRemove.c)
 *     PfSnLogStreamDelete @ 0x14052B778 (PfSnLogStreamDelete.c)
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
