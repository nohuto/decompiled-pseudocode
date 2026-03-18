/*
 * XREFs of ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x18003434C
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x180034590 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180034700 (-EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@Mi.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x180073FB0 (-ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseHwRenderTarget(CDisplay *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2);
    v3 = *((_QWORD *)this + 7);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
