/*
 * XREFs of RtlpInitializeMap @ 0x1800ED6BC
 * Callers:
 *     RtlpInitializeLeakDetection @ 0x1800ED618 (RtlpInitializeLeakDetection.c)
 *     RtlpSetBlockInfo @ 0x1800EDDF8 (RtlpSetBlockInfo.c)
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
