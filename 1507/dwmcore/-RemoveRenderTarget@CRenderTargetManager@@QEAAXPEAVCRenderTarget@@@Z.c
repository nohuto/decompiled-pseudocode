/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x180049EC4
 * Callers:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z @ 0x18004967C (-RemoveRenderTarget@CDesktopRenderTarget@@AEAAXPEAVCHwndRenderTarget@@@Z.c)
 *     ?ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z @ 0x1800680F0 (-ReleaseResource@CComposition@@QEAAJPEAVCResourceTable@@IPEAVCResource@@_N@Z.c)
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z @ 0x1800EBA80 (-RemoveRemoteAppRenderTarget@CDesktopRenderTarget@@UEAAJ_K@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1800EECB0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180060370 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  unsigned int v2; // esi
  struct CRenderTarget **v4; // rcx
  unsigned int i; // eax
  bool v7; // bp
  struct CRenderTarget **v9; // rax
  struct CRenderTarget *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v2 = 0;
  v4 = (struct CRenderTarget **)*((_QWORD *)this + 3);
  for ( i = 0; i < *((_DWORD *)this + 12); ++v4 )
  {
    if ( a2 == *v4 )
      break;
    ++i;
  }
  if ( i >= *((_DWORD *)this + 12) )
  {
    v9 = (struct CRenderTarget **)*((_QWORD *)this + 9);
    if ( *((_DWORD *)this + 24) )
    {
      do
      {
        if ( a2 == *v9 )
          break;
        ++v2;
        ++v9;
      }
      while ( v2 < *((_DWORD *)this + 24) );
      if ( v2 < *((_DWORD *)this + 24) )
      {
        (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
        DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 72, &v10);
        *((_BYTE *)this + 104) = 1;
      }
    }
  }
  else
  {
    v7 = (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 36LL) != 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 128LL))(a2) )
    {
      if ( (*((_DWORD *)this + 15))-- == 1 )
        DwmGenerateMoveData(0LL);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct CRenderTarget *, __int64))(*(_QWORD *)a2 + 48LL))(a2, 50LL) )
      --*((_DWORD *)this + 16);
    (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 16LL))(a2);
    DynArray<CHwndRenderTarget *,0>::Remove((char *)this + 24, &v10);
    if ( v7 )
      --*((_DWORD *)this + 14);
  }
}
