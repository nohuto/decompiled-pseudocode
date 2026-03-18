/*
 * XREFs of EtwpDequeueBuffer @ 0x14009D374
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14009BAD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpDequeueFreeBuffer @ 0x14009D240 (EtwpDequeueFreeBuffer.c)
 *     EtwpFreeTraceBufferPool @ 0x14049D7EC (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1)
{
  _QWORD **v1; // r8
  _QWORD *result; // rax
  _QWORD *v3; // rdx

  v1 = *(_QWORD ***)a1;
  result = 0LL;
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    v3 = *v1;
    *v1 = (_QWORD *)**v1;
    if ( v3 == *(_QWORD **)(a1 + 8) )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)a1;
    return v3 - 4;
  }
  return result;
}
