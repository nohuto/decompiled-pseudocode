/*
 * XREFs of EtwpRotateCompressionTarget @ 0x14022AE4C
 * Callers:
 *     EtwpCompressBuffer @ 0x14022A108 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x14022AEB0 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpEnqueueAvailableBuffer @ 0x1400ED1E0 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1400ED600 (EtwpDequeueFreeBuffer.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  volatile signed __int32 *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 960) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 16LL) = (*(__int64 (**)(void))(a1 + 40))();
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 960), 5u);
  }
  result = (volatile signed __int32 *)*(unsigned int *)(a1 + 976);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 960) = v1;
  return result;
}
