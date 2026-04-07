/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180096D90
 * Callers:
 *     <none>
 * Callees:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800023B0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180006DB0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180006F08 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18000DCF8 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180013448 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180093800 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180094CE0 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x180095D08 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  struct CAnimationComponent *v8; // rbx
  __int16 v9; // ax
  int v10; // eax
  int v11; // edi
  BOOL v12; // eax
  __int16 v13; // r8
  int PVLTarget; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  struct tagRECT v18; // xmm6
  struct tagPOINT *v19; // rcx
  __int64 v20; // rcx
  char result; // al
  struct tagRECT v22; // [rsp+50h] [rbp-38h] BYREF
  struct CAnimationComponent *v23; // [rsp+98h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback((CStoryboard *)a1, a2, a3, a4);
  v8 = 0LL;
  v9 = *(_DWORD *)(a2 + 576);
  v23 = 0LL;
  v10 = v9 & 0xFFF;
  v11 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_28;
    if ( v10 == 1 )
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    else if ( v10 <= 2 || v10 > 4 )
    {
      goto LABEL_28;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_26;
  }
  if ( v10 == 1 )
    goto LABEL_7;
  if ( v10 <= 2 )
    goto LABEL_28;
  if ( v10 <= 4 )
    goto LABEL_7;
  if ( v10 != 22 )
  {
    if ( v10 != 30 )
      goto LABEL_28;
LABEL_7:
    v12 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x90Du);
    goto LABEL_28;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
    goto LABEL_28;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v13);
    v15 = CStoryboard::_CreateAndAddNullComponentWithWindow(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            &v23);
    v11 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x917u);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(a2 + 568) & 1) == 0 || (*(_BYTE *)(a2 + 572) & 1) != 0 )
    goto LABEL_28;
  v16 = CAppLaunch::GetPVLTarget(a1, v13);
  v17 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          (CStoryboard *)a1,
          (struct CWindowData *)a2,
          0,
          v16,
          0LL,
          0LL,
          -1,
          1,
          &v23);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v17, 0x91Du);
LABEL_17:
    v8 = v23;
    goto LABEL_26;
  }
  v8 = v23;
  v19 = (struct tagPOINT *)*((_QWORD *)v23 + 5);
  v22 = *(struct tagRECT *)((char *)v23 + 88);
  v18 = v22;
  CAnimatedTransitionVisual::SetBeginRect(v19, &v22);
  v20 = *((_QWORD *)v8 + 5);
  *(struct tagRECT *)(v20 + 856) = v18;
  CVisual::SetDirtyFlags((CVisual *)(v20 + 8), 4096);
LABEL_26:
  if ( v8 )
    CBaseObject::Release(v8);
LABEL_28:
  result = 1;
  *a4 = v11;
  return result;
}
