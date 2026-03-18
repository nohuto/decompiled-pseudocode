/*
 * XREFs of ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@UEAAJXZ @ 0x180076760
 * Callers:
 *     ?NotifyInvalidDisplaySet@CDesktopRenderTarget@@WCI@EAAJXZ @ 0x1800BF8C0 (-NotifyInvalidDisplaySet@CDesktopRenderTarget@@WCI@EAAJXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800744A0 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::NotifyInvalidDisplaySet(CDesktopRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  CDisplaySet *v6; // rcx

  v2 = *((_DWORD *)this + 18) - 1;
  for ( i = v2;
        i >= 0;
        CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)(*(_QWORD *)(*((_QWORD *)this + 6)
                                                                                            + 8 * i--)
                                                                                + 112LL)) )
  {
    ;
  }
  CDesktopRenderTarget::ReleaseRenderTargets((CDesktopRenderTarget *)((char *)this - 112));
  v6 = (CDisplaySet *)*((_QWORD *)this + 31);
  if ( v6 )
  {
    CDisplaySet::Release(v6, v4, v5);
    *((_QWORD *)this + 31) = 0LL;
  }
  *((_BYTE *)this + 240) = 1;
  return 0LL;
}
