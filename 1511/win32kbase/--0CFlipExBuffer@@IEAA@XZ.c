/*
 * XREFs of ??0CFlipExBuffer@@IEAA@XZ @ 0x1C003E5D0
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0072420 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C003E6E4 (--0CCompositionBuffer@@IEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::CFlipExBuffer(CFlipExBuffer *this)
{
  CCompositionBuffer::CCompositionBuffer(this);
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  *((_DWORD *)this + 96) = -1;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *(_QWORD *)((char *)this + 388) = 0LL;
  *((_DWORD *)this + 99) = 0;
  *((_DWORD *)this + 17) = 0;
  return this;
}
