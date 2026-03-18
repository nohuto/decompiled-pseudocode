/*
 * XREFs of ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180058374
 * Callers:
 *     ??1CDisplay@@EEAA@XZ @ 0x1800582D0 (--1CDisplay@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x1800FA7C4 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ @ 0x1800FA970 (-ReleaseHwRenderTarget@CHwndRenderTargetDDA@@EEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplay::ReleaseDDAHwRenderTarget(CDisplay *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 9);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 432LL))(*((_QWORD *)this + 9));
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 9));
      *((_QWORD *)this + 9) = 0LL;
    }
  }
}
