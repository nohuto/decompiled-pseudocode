/*
 * XREFs of ?UpdateDisplayId@CDisplay@@QEAAX_N@Z @ 0x18003479C
 * Callers:
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180034700 (-EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@Mi.c)
 *     ?UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z @ 0x18011CA70 (-UpdateTransposeFlagAndId@CHwndRenderTarget@@MEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::UpdateDisplayId(CDisplay *this, char a2)
{
  __int64 v4; // rdx

  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 464LL))(
    *((_QWORD *)this + 7),
    *(unsigned int *)(*((_QWORD *)this + 17) + 244LL));
  LOBYTE(v4) = a2;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 328LL))(*((_QWORD *)this + 7), v4);
}
