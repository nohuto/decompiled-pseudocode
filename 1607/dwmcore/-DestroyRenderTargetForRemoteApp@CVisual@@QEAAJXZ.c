/*
 * XREFs of ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180051E9C
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800534B8 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x18003AE80 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18004F8E0 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x1800AE154 (-RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z @ 0x180116C80 (-NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z.c)
 *     ?RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z @ 0x180161F44 (-RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z.c)
 */

__int64 __fastcall CVisual::DestroyRenderTargetForRemoteApp(CVisual *this)
{
  unsigned int v1; // edi
  unsigned __int64 TopLevelWindow; // rsi
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v6; // eax
  int v7; // eax
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 153) & 4) != 0 )
    CWindowManager::RemoveRemoteAppVisual(*(CWindowManager **)(*((_QWORD *)this + 2) + 48LL), this);
  if ( (*((_BYTE *)this + 153) & 4) != 0 && *(int *)(*((_QWORD *)this + 2) + 1104LL) >= 2 )
  {
    v8 = 0;
    TopLevelWindow = CVisual::GetTopLevelWindow(this);
    CRemoteApplicationWindowSet::RemoveAplicationWindow(qword_1801EFD20, TopLevelWindow, &v8);
    if ( v8 )
    {
      PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*((CComposition **)this + 2));
      if ( PrimaryDesktopRenderTargetNoRef
        && (v6 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, unsigned __int64))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                            + 264LL))(
                   PrimaryDesktopRenderTargetNoRef,
                   TopLevelWindow),
            v1 = v6,
            v6 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA8Bu);
      }
      else
      {
        v7 = CComposition::NotifyTopLevelWndDestroy(*((CComposition **)this + 2), TopLevelWindow);
        v1 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA8Eu);
      }
    }
  }
  return v1;
}
