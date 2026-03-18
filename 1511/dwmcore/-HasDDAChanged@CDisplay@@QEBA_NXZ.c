/*
 * XREFs of ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x1800704C4
 * Callers:
 *     ?IsUpToDate@CDisplaySet@@QEBA_NXZ @ 0x1800700C0 (-IsUpToDate@CDisplaySet@@QEBA_NXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x180107180 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CDisplay::HasDDAChanged(CDisplay *this)
{
  __int64 v1; // rsi
  int v2; // edi

  v1 = *((_QWORD *)this + 6);
  v2 = 0;
  if ( v1 )
  {
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 24LL))(*((_QWORD *)this + 6)) != 0;
    LOBYTE(v2) = *((unsigned __int8 *)this + 303) != v2;
  }
  return v2;
}
