/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18008B0C8
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x180086864 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180042AF4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18006FE2C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18008B290 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  unsigned int v7; // ebx
  _DWORD *v8; // r8
  __int64 v9; // rax
  int v10; // edi
  int v11; // ebx
  _QWORD *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-28h]

  *((struct tagPOINT *)this + 35) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_q((__int64)this, (__int64)&UdwmPenPressHoldVisual_Start, 0);
  v4 = (struct CBitmapSource ***)((char *)this + 312);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (__int64)this + 312);
  v7 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v14 = 56;
LABEL_15:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v14);
    goto LABEL_16;
  }
  v8 = (_DWORD *)((char *)this + 304);
  v9 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 38) = v9;
  if ( (int)v9 < 1 )
    *v8 = 1;
  if ( *((int *)this + 77) < 1 )
    *((_DWORD *)this + 77) = 1;
  v10 = a2->x - *v8 / 2;
  v11 = a2->y - *((_DWORD *)this + 77) / 2;
  CVisual::SetSize(*((struct tagSIZE **)this + 37), (const struct tagSIZE *)this + 38);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 37), v10);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 37), v11);
  CImage::SetBitmapSource(*((CImage **)this + 37), **v4);
  CVisual::SetOpacity(this, 1.0);
  v12 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                    WPF::g_pProcessHeap,
                    80LL);
  if ( v12 )
    v12 = CTimeline<float>::CTimeline<float>((__int64)v12, 0.300000011920929, 0.0, 1.0, 0);
  *((_QWORD *)this + 36) = v12;
  if ( !v12 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x53u);
LABEL_16:
    CPenPressHoldVisual::Stop(this);
    return v7;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  v7 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v14 = 85;
    goto LABEL_15;
  }
  return v7;
}
