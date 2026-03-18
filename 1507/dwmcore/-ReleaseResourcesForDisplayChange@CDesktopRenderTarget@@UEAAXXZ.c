/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@UEAAXXZ @ 0x18008DBD0
 * Callers:
 *     ?Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DELETERESOURCE@@@Z @ 0x180068B54 (-Channel_DeleteResource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_C.c)
 *     ?ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WCI@EAAXXZ @ 0x180099DA0 (-ReleaseResourcesForDisplayChange@CDesktopRenderTarget@@WCI@EAAXXZ.c)
 * Callees:
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800583AC (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800602EC (-InsertAt@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z.c)
 *     ?Remove@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z @ 0x180060370 (-Remove@-$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAHAEBQEAVCHwndRenderTarget@@@Z.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800683F8 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18008DA98 (-RemoveInvalidRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 */

void __fastcall CDesktopRenderTarget::ReleaseResourcesForDisplayChange(CDesktopRenderTarget *this)
{
  __int64 v1; // rax
  CDesktopRenderTarget *v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // r9
  int v6; // edx
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this - 3);
  v3 = (CDesktopRenderTarget *)((char *)this - 40);
  if ( *(_DWORD *)(v1 + 1032) )
  {
    CDesktopRenderTarget::ReleaseRenderTargets(v3);
    *((_BYTE *)this + 144) = 1;
  }
  else
  {
    CDesktopRenderTarget::RemoveInvalidRenderTargets(v3);
    v4 = 1;
    if ( *((_DWORD *)this + 18) > 1u )
    {
      v5 = *((_QWORD *)this + 6);
      while ( 1 )
      {
        v9 = *(_QWORD *)(v5 + 8LL * v4);
        if ( CDisplay::IsPrimary(*(CDisplay **)(v9 + 80)) )
          break;
        v4 = v6 + 1;
        if ( v4 >= v7 )
          goto LABEL_3;
      }
      DynArray<CHwndRenderTarget *,0>::Remove((__int64 *)this + 6, &v9);
      v8 = DynArray<CHwndRenderTarget *,0>::InsertAt((__int64)this + 48, (unsigned __int64)&v9);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11Au);
    }
LABEL_3:
    CComposition::ResetScheduler(*((CComposition **)this - 3));
  }
}
