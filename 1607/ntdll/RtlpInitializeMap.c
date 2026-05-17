/*
 * XREFs of RtlpInitializeMap @ 0x1800ED5FC
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800ED558 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800EDD38 (RtlpSetBlockInfo.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void *__fastcall RtlpInitializeMap(_QWORD *a1, _QWORD *a2)
{
  void *result; // rax

  result = memset(a1, 0, 0x840uLL);
  a1[263] = a2;
  if ( a2 )
  {
    result = (void *)(*a2 >> 8);
    *a1 = result;
  }
  return result;
}
