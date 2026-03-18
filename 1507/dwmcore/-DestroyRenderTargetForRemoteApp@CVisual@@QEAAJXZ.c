/*
 * XREFs of ?DestroyRenderTargetForRemoteApp@CVisual@@QEAAJXZ @ 0x180037148
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180034854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180038274 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180039240 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z @ 0x18005C97C (-RemoveRemoteAppVisual@CWindowManager@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ @ 0x180067F00 (-GetPrimaryDesktopRenderTargetNoRef@CComposition@@QEAAPEAVIRenderTargetDesktop@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z @ 0x1800E3094 (-NotifyTopLevelWndDestroy@CComposition@@QEAAJ_K@Z.c)
 *     ?RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z @ 0x1801237DC (-RemoveAplicationWindow@CRemoteApplicationWindowSet@@QEAAJ_KPEA_N@Z.c)
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
  if ( (*((_BYTE *)this + 89) & 0x10) != 0 )
    CWindowManager::RemoveRemoteAppVisual(*(CWindowManager **)(*((_QWORD *)this + 2) + 48LL), this);
  if ( (*((_BYTE *)this + 89) & 0x10) != 0 && *(int *)(*((_QWORD *)this + 2) + 1032LL) >= 2 )
  {
    v4 = *((_QWORD *)this + 28);
    v8 = 0;
    CRemoteApplicationWindowSet::RemoveAplicationWindow(qword_1801930E0, v4, &v8);
    if ( v8 )
    {
      PrimaryDesktopRenderTargetNoRef = CComposition::GetPrimaryDesktopRenderTargetNoRef(*((CComposition **)this + 2));
      if ( PrimaryDesktopRenderTargetNoRef
        && (v6 = (*(__int64 (__fastcall **)(struct IRenderTargetDesktop *, _QWORD))(*(_QWORD *)PrimaryDesktopRenderTargetNoRef
                                                                                  + 280LL))(
                   PrimaryDesktopRenderTargetNoRef,
                   *((_QWORD *)this + 28)),
            v1 = v6,
            v6 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA22u);
      }
      else
      {
        v7 = CComposition::NotifyTopLevelWndDestroy(*((CComposition **)this + 2), *((_QWORD *)this + 28));
        v1 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA25u);
      }
    }
  }
  return v1;
}
