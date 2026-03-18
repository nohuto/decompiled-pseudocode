/*
 * XREFs of ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x180007954
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004ADC0 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z @ 0x1800EABA0 (-UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplay::UpdateDisplayId(CDisplay *this, char a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 456LL))(
    *((_QWORD *)this + 8),
    *(unsigned int *)(*((_QWORD *)this + 19) + 852LL));
  LOBYTE(v4) = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 304LL))(*((_QWORD *)this + 8), v4);
}
