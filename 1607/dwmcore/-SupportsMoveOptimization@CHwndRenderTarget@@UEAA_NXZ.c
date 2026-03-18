/*
 * XREFs of ?SupportsMoveOptimization@CHwndRenderTarget@@UEAA_NXZ @ 0x180073AC0
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CHwndRenderTarget::SupportsMoveOptimization(CHwndRenderTarget *this, __int64 a2)
{
  LOBYTE(a2) = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 1 )
    LOBYTE(a2) = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 432LL))(
                   *((_QWORD *)this + 20),
                   a2);
  return a2;
}
