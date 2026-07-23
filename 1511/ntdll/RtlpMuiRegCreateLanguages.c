/*
 * XREFs of RtlpMuiRegCreateLanguages @ 0x1800EB590
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1800ED408 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _SafeAllocBlob @ 0x18001A4CC (_SafeAllocBlob.c)
 */

_QWORD *__fastcall RtlpMuiRegCreateLanguages(unsigned int a1)
{
  _QWORD *result; // rax
  unsigned int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  result = SafeAllocBlob(0x18u, 4u, 0x1Cu, 0, 0, &v2);
  if ( result )
  {
    *(_DWORD *)result = v2;
    result[2] = result + 3;
    *((_DWORD *)result + 1) = 4;
  }
  return result;
}
