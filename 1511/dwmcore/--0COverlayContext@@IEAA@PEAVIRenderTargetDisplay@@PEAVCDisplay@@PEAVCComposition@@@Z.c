/*
 * XREFs of ??0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z @ 0x18007F384
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x1800B3994 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

COverlayContext *__fastcall COverlayContext::COverlayContext(
        COverlayContext *this,
        struct IRenderTargetDisplay *a2,
        struct CDisplay *a3,
        struct CComposition *a4)
{
  __int64 v5; // rdi

  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &COverlayContext::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 9) = a3;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = (char *)this + 264;
  *((_QWORD *)this + 30) = (char *)this + 264;
  *((_DWORD *)this + 62) = 2;
  *(_QWORD *)((char *)this + 252) = 2LL;
  *((_QWORD *)this + 77) = &CDirectFlipInfo::`vftable';
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_BYTE *)this + 656) = 0;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_DWORD *)this + 176) = 0;
  *((_QWORD *)this + 90) = (char *)this + 728;
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_DWORD *)this + 204) = 0;
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 106) = a4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 9) + 8LL));
  return this;
}
