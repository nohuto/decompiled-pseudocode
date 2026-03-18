/*
 * XREFs of ??0CFlipExBuffer@@IEAA@XZ @ 0x1C001E770
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C004AE10 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C001E904 (--0CCompositionBuffer@@IEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::CFlipExBuffer(CFlipExBuffer *this)
{
  CCompositionBuffer::CCompositionBuffer(this);
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  *((_DWORD *)this + 88) = -1;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 89) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_WORD *)this + 192) = 0;
  *((_BYTE *)this + 386) = 0;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 16) = 0;
  return this;
}
