/*
 * XREFs of ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180049C60
 * Callers:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004B800 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180094744 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x1800AB5C8 (-RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z.c)
 *     ?NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z @ 0x18010118C (-NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z.c)
 *     ?RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z @ 0x180138D6C (-RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z.c)
 */

__int64 __fastcall CVisual::DestroyRenderTargetForRemoteApp(CVisual *this)
{
  unsigned int v1; // ebx
  unsigned __int64 v4; // rdx
  struct IRenderTargetDesktop *PrimaryDesktopRenderTargetNoRef; // rax
  int v6; // eax
  int v7; // eax
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_BYTE *)this + 73) & 4) != 0 )
    CWindowManager::RemoveRemoteAppVisual(*(CWindowManager **)(*((_QWORD *)this + 2) + 48LL), this);
  if ( (*((_BYTE *)this + 73) & 4) != 0 && *(int *)(*((_QWORD *)this + 2) + 1000LL) >= 2 )
  {
    v4 = *((_QWORD *)this + 26);
    v8 = 0;
    CRemoteApplicationWindowSet::RemoveAplicationWindow(qword_1801A39E0, v4, &v8);
    if ( v8 )
    {
      PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*((CComposition **)this + 2));
      if ( PrimaryDesktopRenderTargetNoRef
        && (v6 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, _QWORD))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                  + 272LL))(
                   PrimaryDesktopRenderTargetNoRef,
                   *((_QWORD *)this + 26)),
            v1 = v6,
            v6 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x988u);
      }
      else
      {
        v7 = CComposition::NotifyTopLevelWndDestroy(*((CComposition **)this + 2), *((_QWORD *)this + 26));
        v1 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x98Bu);
      }
    }
  }
  return v1;
}
