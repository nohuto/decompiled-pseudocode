/*
 * XREFs of EtwpDequeueBuffer @ 0x1400ED754
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140085490 (EtwpAdjustTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x1400ED600 (EtwpDequeueFreeBuffer.c)
 *     EtwpFreeTraceBufferPool @ 0x1404936AC (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r9
  _QWORD *result; // rax
  _QWORD *v4; // r8

  v2 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    result = 0LL;
    if ( !*v2 )
      break;
    v4 = *v2;
    *v2 = (_QWORD *)**v2;
    if ( *v4 )
      *v4 = 0LL;
    else
      *a2 = v2;
    result = v4 - 4;
    if ( *((_DWORD *)v4 + 3) != 6 )
      break;
    *v4 = *(_QWORD *)(a1 + 992);
    *(_QWORD *)(a1 + 992) = v4;
  }
  return result;
}
