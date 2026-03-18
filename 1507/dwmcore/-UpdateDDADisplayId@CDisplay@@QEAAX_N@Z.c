/*
 * XREFs of ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x180124B60
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800FA8A0 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z @ 0x1800FA990 (-UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplay::UpdateDDADisplayId(CDisplay *this, char a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 456LL))(
    *((_QWORD *)this + 9),
    *(unsigned int *)(*((_QWORD *)this + 19) + 852LL));
  LOBYTE(v4) = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 9) + 304LL))(*((_QWORD *)this + 9), v4);
}
