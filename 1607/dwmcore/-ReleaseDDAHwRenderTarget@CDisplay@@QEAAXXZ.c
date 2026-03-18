/*
 * XREFs of ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180034CC8
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x180034590 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18012DC5C (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x18012DE00 (-ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplay::ReleaseDDAHwRenderTarget(CDisplay *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2);
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
