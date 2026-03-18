/*
 * XREFs of ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800579F8
 * Callers:
 *     ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x18004AA90 (-ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ.c)
 *     ??1CDisplay@@EEAA@XZ @ 0x1800582D0 (--1CDisplay@@EEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplay::ReleaseHwRenderTarget(CDisplay *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 8);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 432LL))(*((_QWORD *)this + 8));
    v3 = *((_QWORD *)this + 8);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 8));
      *((_QWORD *)this + 8) = 0LL;
    }
  }
}
