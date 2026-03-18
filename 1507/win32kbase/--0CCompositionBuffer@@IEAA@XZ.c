/*
 * XREFs of ??0CCompositionBuffer@@IEAA@XZ @ 0x1C004A190
 * Callers:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0049EA0 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00DF60C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     memset @ 0x1C0085E40 (memset.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::CCompositionBuffer(CCompositionBuffer *this)
{
  CCompositionBuffer *result; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  *((_WORD *)this + 16) = 0;
  *((_BYTE *)this + 256) = 0;
  *((_BYTE *)this + 324) = 0;
  *((_DWORD *)this + 82) = 2;
  memset((char *)this + 40, 0, 0xA8uLL);
  memset((char *)this + 208, 0, 0x30uLL);
  *((_QWORD *)this + 34) = (char *)this + 264;
  *((_QWORD *)this + 33) = (char *)this + 264;
  result = this;
  *((_DWORD *)this + 74) = 0;
  return result;
}
