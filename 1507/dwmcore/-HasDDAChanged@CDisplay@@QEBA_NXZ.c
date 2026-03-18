/*
 * XREFs of ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x180057AE8
 * Callers:
 *     ?IsUpToDate@CDisplaySet@@QEBA_NXZ @ 0x1800554C0 (-IsUpToDate@CDisplaySet@@QEBA_NXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1800EB690 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CDisplay::HasDDAChanged(CDisplay *this)
{
  __int64 v1; // rsi
  int v2; // edi

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( v1 )
  {
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 24LL))(*((_QWORD *)this + 7)) != 0;
    LOBYTE(v2) = *((unsigned __int8 *)this + 148) != v2;
  }
  return v2;
}
