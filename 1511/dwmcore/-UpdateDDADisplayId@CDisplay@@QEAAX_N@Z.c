/*
 * XREFs of ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x18013A09C
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180114810 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z @ 0x180114900 (-UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDisplay::UpdateDDADisplayId(CDisplay *this, char a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 464LL))(
    *((_QWORD *)this + 8),
    *(unsigned int *)(*((_QWORD *)this + 17) + 244LL));
  LOBYTE(v4) = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 312LL))(*((_QWORD *)this + 8), v4);
}
