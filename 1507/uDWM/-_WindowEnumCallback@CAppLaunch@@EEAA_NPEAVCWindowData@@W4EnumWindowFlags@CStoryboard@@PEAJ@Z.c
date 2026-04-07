/*
 * XREFs of ?_WindowEnumCallback@CAppLaunch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800953A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x180005990 (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x18000F528 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180038C34 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x180090AD0 (-GetPVLTarget@CAppLaunch@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800923E4 (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180092CA0 (-_CreateAndAddNullComponentWithWindow@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationCompo.c)
 *     ?_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z @ 0x1800936A4 (-_RecordMonitorRectForWindow@CLaunchSwitchBase@@IEAAXPEBVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800966E0 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 */

char __fastcall CAppLaunch::_WindowEnumCallback(__int64 a1, __int64 a2, char a3, int *a4)
{
  __int64 v8; // r8
  struct CAnimationComponent *v9; // rbx
  __int16 v10; // ax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  __int16 v14; // r8
  int PVLTarget; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct tagRECT v19; // xmm6
  struct tagPOINT *v20; // rcx
  __int64 v21; // rcx
  char result; // al
  struct tagRECT v23; // [rsp+50h] [rbp-38h] BYREF
  struct CAnimationComponent *v24; // [rsp+98h] [rbp+10h] BYREF

  CGroupingStoryboard::_WindowEnumCallback();
  v8 = *(unsigned int *)(a2 + 568);
  v9 = 0LL;
  v10 = *(_DWORD *)(a2 + 568);
  v24 = 0LL;
  v11 = v10 & 0xFFF;
  v12 = 0;
  if ( (a3 & 1) == 0 )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_28;
    if ( v11 == 1 )
    {
      *(_BYTE *)(a1 + 168) = 1;
    }
    else if ( v11 <= 2 || v11 > 4 )
    {
      goto LABEL_28;
    }
    CLaunchSwitchBase::_RecordMonitorRectForWindow((CLaunchSwitchBase *)a1, (const struct CWindowData *)a2);
    goto LABEL_26;
  }
  if ( v11 == 1 )
    goto LABEL_7;
  if ( v11 <= 2 )
    goto LABEL_28;
  if ( v11 <= 4 )
    goto LABEL_7;
  if ( v11 != 22 )
  {
    if ( v11 != 30 )
      goto LABEL_28;
LABEL_7:
    v13 = CGroupingStoryboard::_Create3DComponent((CGroupingStoryboard *)a1, (struct CWindowData *)a2, v8);
    v12 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x8E5u);
    goto LABEL_28;
  }
  if ( !ContainsRect((const struct tagRECT *)(a1 + 152), (const struct tagRECT *)(a2 + 48)) )
    goto LABEL_28;
  if ( *(_BYTE *)(a1 + 168) )
  {
    PVLTarget = CAppLaunch::GetPVLTarget(a1, v14);
    v16 = CStoryboard::_CreateAndAddNullComponentWithWindow(
            (CStoryboard *)a1,
            (struct CWindowData *)a2,
            PVLTarget,
            &v24);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v16, 0x8EFu);
    goto LABEL_17;
  }
  if ( (*(_BYTE *)(a2 + 552) & 1) == 0 || (*(_BYTE *)(a2 + 556) & 1) != 0 )
    goto LABEL_28;
  v17 = CAppLaunch::GetPVLTarget(a1, v14);
  v18 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          (CStoryboard *)a1,
          (struct CWindowData *)a2,
          0,
          v17,
          0LL,
          0LL,
          -1,
          1,
          &v24);
  v12 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v18, 0x8F5u);
LABEL_17:
    v9 = v24;
    goto LABEL_26;
  }
  v9 = v24;
  v20 = (struct tagPOINT *)*((_QWORD *)v24 + 5);
  v23 = *(struct tagRECT *)((char *)v24 + 88);
  v19 = v23;
  CAnimatedTransitionVisual::SetBeginRect(v20, &v23);
  v21 = *((_QWORD *)v9 + 5);
  *(struct tagRECT *)(v21 + 856) = v19;
  CVisual::SetDirtyFlags((CVisual *)(v21 + 8), 4096);
LABEL_26:
  if ( v9 )
    CBaseObject::Release(v9);
LABEL_28:
  result = 1;
  *a4 = v12;
  return result;
}
