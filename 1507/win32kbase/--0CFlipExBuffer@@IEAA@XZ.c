/*
 * XREFs of ??0CFlipExBuffer@@IEAA@XZ @ 0x1C0049EA0
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0010214 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CCompositionBuffer@@IEAA@XZ @ 0x1C004A190 (--0CCompositionBuffer@@IEAA@XZ.c)
 */

CFlipExBuffer *__fastcall CFlipExBuffer::CFlipExBuffer(CFlipExBuffer *this)
{
  CCompositionBuffer::CCompositionBuffer(this);
  *(_QWORD *)this = &CFlipExBuffer::`vftable';
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_BYTE *)this + 392) = 0;
  *((_DWORD *)this + 99) = 0;
  *((_WORD *)this + 200) = 0;
  *((_DWORD *)this + 101) = 0;
  *((_BYTE *)this + 408) = 0;
  *((_DWORD *)this + 15) = 0;
  return this;
}
