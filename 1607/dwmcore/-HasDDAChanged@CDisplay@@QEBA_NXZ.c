/*
 * XREFs of ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18003466C
 * Callers:
 *     ?IsDDAUpToDate@CDisplaySet@@QEBA_NXZ @ 0x180036480 (-IsDDAUpToDate@CDisplaySet@@QEBA_NXZ.c)
 *     ?HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x18011DB40 (-HandleDDAArivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplay::HasDDAChanged(CDisplay *this)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0;
    LOBYTE(v2) = *((unsigned __int8 *)this + 303) != v2;
  }
  return v2;
}
