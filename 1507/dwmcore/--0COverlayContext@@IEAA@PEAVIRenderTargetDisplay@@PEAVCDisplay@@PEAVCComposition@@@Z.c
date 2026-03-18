/*
 * XREFs of ??0COverlayContext@@IEAA@PEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@@Z @ 0x180012BAC
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@Z @ 0x180012278 (-Create@COverlayContext@@SAJPEAVIRenderTargetDisplay@@PEAVCDisplay@@PEAVCComposition@@PEAPEAV1@@.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  *((_QWORD *)this + 71) = -1LL;
  *((_QWORD *)this + 63) = &CDirectFlipInfo::`vftable';
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_BYTE *)this + 544) = 0;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_BYTE *)this + 576) = 0;
  *((_QWORD *)this + 73) = 0LL;
  *((_WORD *)this + 296) = 0;
  *((_BYTE *)this + 594) = 0;
  *((_QWORD *)this + 75) = 0LL;
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 154) = 0;
  *((_QWORD *)this + 79) = (char *)this + 640;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 93) = (char *)this + 752;
  *((_DWORD *)this + 188) = 0;
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 104) = a4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 9) + 8LL));
  return this;
}
