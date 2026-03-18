/*
 * XREFs of ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800703AC
 * Callers:
 *     ??1CDisplay@@EEAA@XZ @ 0x180070CEC (--1CDisplay@@EEAA@XZ.c)
 *     ?ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ @ 0x18007BFD0 (-ReleaseHwRenderTarget@CHwndRenderTarget@@EEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CDisplay::ReleaseHwRenderTarget(CDisplay *this)
{
  __int64 v1; // rdi
  __int64 v3; // rdi

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 232LL))(v1);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 440LL))(*((_QWORD *)this + 7));
    v3 = *((_QWORD *)this + 7);
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 7));
      *((_QWORD *)this + 7) = 0LL;
    }
  }
}
