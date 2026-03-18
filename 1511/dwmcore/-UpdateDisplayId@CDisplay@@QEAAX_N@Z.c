/*
 * XREFs of ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x18001DBF0
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C430 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z @ 0x1801065C0 (-UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDisplay::UpdateDisplayId(CDisplay *this, char a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 464LL))(
    *((_QWORD *)this + 7),
    *(unsigned int *)(*((_QWORD *)this + 17) + 244LL));
  LOBYTE(v4) = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 312LL))(*((_QWORD *)this + 7), v4);
}
