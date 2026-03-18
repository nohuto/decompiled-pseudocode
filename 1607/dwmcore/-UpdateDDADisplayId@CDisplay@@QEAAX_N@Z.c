/*
 * XREFs of ?UpdateDDADisplayId@CDisplay@@QEAAX_N@Z @ 0x1801639F4
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18012DD30 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 *     ?UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z @ 0x18012DE20 (-UpdateTransposeFlagAndId@CHwndRenderTargetDDA@@MEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::UpdateDDADisplayId(CDisplay *this, char a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 8) + 464LL))(
    *((_QWORD *)this + 8),
    *(unsigned int *)(*((_QWORD *)this + 17) + 244LL));
  LOBYTE(v4) = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 8) + 328LL))(*((_QWORD *)this + 8), v4);
}
