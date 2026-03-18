/*
 * XREFs of ??0CCompositionBuffer@@IEAA@XZ @ 0x1C001E904
 * Callers:
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C001E770 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00F39B4 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     memset @ 0x1C008A080 (memset.c)
 */

CCompositionBuffer *__fastcall CCompositionBuffer::CCompositionBuffer(CCompositionBuffer *this)
{
  CCompositionBuffer *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *(_QWORD *)this = &CCompositionBuffer::`vftable';
  *((_BYTE *)this + 40) = 0;
  *((_BYTE *)this + 224) = 0;
  *((_BYTE *)this + 292) = 0;
  memset((char *)this + 48, 0, 0xB0uLL);
  *((_QWORD *)this + 30) = (char *)this + 232;
  *((_QWORD *)this + 29) = (char *)this + 232;
  result = this;
  *((_DWORD *)this + 66) = 0;
  return result;
}
