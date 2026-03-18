/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x180075250
 * Callers:
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@WCI@EAAJXZ @ 0x1800BCAA0 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@WCI@EAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180075580 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18007C550 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyInvalidDisplaySet(CDesktopRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rdi
  CDisplaySet *v4; // rcx

  v2 = *((_DWORD *)this + 18) - 1;
  for ( i = v2;
        i >= 0;
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(*(_QWORD *)(*((_QWORD *)this + 6)
                                                                                            + 8 * i--)
                                                                                + 40LL)) )
  {
    ;
  }
  CDesktopRenderTarget::ReleaseRenderTargets((CDesktopRenderTarget *)((char *)this - 40));
  v4 = (CDisplaySet *)*((_QWORD *)this + 25);
  if ( v4 )
  {
    CDisplaySet::Release(v4);
    *((_QWORD *)this + 25) = 0LL;
  }
  *((_BYTE *)this + 192) = 1;
  return 0LL;
}
