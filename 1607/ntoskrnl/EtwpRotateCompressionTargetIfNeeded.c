/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x14022ACDC
 * Callers:
 *     EtwpCompressBuffer @ 0x140229F34 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x14022A2B4 (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x14022AC78 (EtwpRotateCompressionTarget.c)
 */

volatile signed __int32 *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  volatile signed __int32 *result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = (volatile signed __int32 *)*(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
