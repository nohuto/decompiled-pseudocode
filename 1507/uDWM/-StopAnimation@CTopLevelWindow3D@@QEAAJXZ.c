/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E7E8 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180025700 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180027100 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x180027690 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180027900 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180027A30 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180027F98 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180076554 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     _lambda_678e02ded86544c2cd395b42c4824875_::operator() @ 0x18008BBF4 (_lambda_678e02ded86544c2cd395b42c4824875_--operator().c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x18001DF40 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x18001EA00 (-SetIsVisible@CVisual@@QEAAJ_N@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180026574 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180027F28 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180030198 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x180030240 (-UpdateAccentBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069F00 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     Template_qp @ 0x18006C038 (Template_qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(unsigned __int64 this)
{
  char v2; // si
  int v3; // eax
  unsigned int IsVisible; // edi
  __int64 v5; // rdx
  char v6; // r11
  char v7; // r11
  __int64 v8; // rbx
  CLivePreview *v10; // rcx
  bool v11; // al
  __int64 v12; // rax
  struct MIL_CHANNEL__ *v13; // r8
  char v14; // dl
  __int64 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  bool v19; // al
  int v20; // ecx
  void (__fastcall *v21)(CVisual *, int); // rbp
  unsigned int v22; // [rsp+20h] [rbp-68h]
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+44h] [rbp-44h]
  unsigned __int64 v26; // [rsp+54h] [rbp-34h]

  v2 = 1;
  if ( *(_QWORD *)(this + 344) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 352));
    CTopLevelWindow3D::GetScenarioGuid(this, *(unsigned int *)(this + 352), &v23);
    v12 = v23 - *(_QWORD *)&GUID_NULL.Data1;
    if ( (_QWORD)v23 == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = *((_QWORD *)&v23 + 1) - *(_QWORD *)GUID_NULL.Data4;
    if ( v12 )
    {
      v24 = 14;
      v13 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
      v25 = v23;
      v26 = this | 0xD100000000000000uLL;
      MilResource_SendCommand(&v24, 0x1Cu, v13);
    }
    v14 = CDesktopManager::s_fTimelineDirty;
    v15 = (__int64 *)(this + 360);
    v16 = 10LL;
    do
    {
      v17 = *v15;
      if ( *v15 )
      {
        if ( !--*(_DWORD *)(v17 + 8) )
          v14 = 1;
        *v15 = 0LL;
        CDesktopManager::s_fTimelineDirty = v14;
      }
      ++v15;
      --v16;
    }
    while ( v16 );
    v18 = *(_QWORD *)(this + 344);
    if ( v18 )
    {
      --*(_DWORD *)(v18 + 8);
      v19 = v14;
      if ( !*(_DWORD *)(v18 + 8) )
        v19 = 1;
      *(_QWORD *)(this + 344) = 0LL;
      CDesktopManager::s_fTimelineDirty = v19;
    }
    if ( CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
      --*((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 7);
    v20 = *(_DWORD *)(this + 352);
    if ( v20 == 9 && !*(_BYTE *)(this + 272) || *(_DWORD *)(this + 356) && (unsigned int)(v20 - 7) > 2 )
      *(_OWORD *)(this + 292) = *(_OWORD *)(*(_QWORD *)(this + 312) + 48LL);
    if ( (unsigned int)(v20 - 7) > 2 )
      *(_DWORD *)(this + 356) = 0;
    *(_DWORD *)(this + 352) = 0;
  }
  else if ( *(_BYTE *)(this + 464) && CDesktopManager::UnregisterForGlobalTimeChangeNotification((struct CVisual *)this) )
  {
    *(_BYTE *)(this + 464) = 0;
  }
  v3 = CVisual::ClearInstructions((CVisual *)this);
  IsVisible = v3;
  if ( v3 < 0 )
  {
    v22 = 1447;
    goto LABEL_55;
  }
  CTopLevelWindow3D::ReleaseSceneObjects((CTopLevelWindow3D *)this);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*(double *)(this + 176) - 1.0)) & _xmm) > 0.0000011920929 )
  {
    *(_QWORD *)(this + 176) = 0x3FF0000000000000LL;
    v21 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)this + 24LL);
    if ( v21 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags((CVisual *)this, 32);
    else
      v21((CVisual *)this, 32);
  }
  v5 = *(_QWORD *)(this + 312);
  v6 = *(_BYTE *)(v5 + 552);
  if ( (v6 & 4) != 0 )
  {
    v3 = CWindowList::QueueDestroySprite(
           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
           (struct CWindowData *)v5);
    IsVisible = v3;
    if ( v3 >= 0 )
      return IsVisible;
    v22 = 1469;
LABEL_55:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, v22);
    return IsVisible;
  }
  v7 = v6 & 1;
  if ( !v7
    || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170), !*((_BYTE *)v10 + 264))
     || !v5
      ? (v11 = 0)
      : (v11 = CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v5)),
        !v11) )
  {
    v8 = *(_QWORD *)(v5 + 368);
    if ( v8 )
    {
      if ( *(char *)(v8 + 264) >= 0 )
      {
        v2 = v7;
        if ( (*(_BYTE *)(*(_QWORD *)(v8 + 744) + 556LL) & 1) != 0 )
          v2 = 0;
      }
      IsVisible = CVisual::SetIsVisible(*(CVisual **)(v8 + 280), v2);
      CWindowList::UpdateAccentBlurBehind(
        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
        *(struct CWindowData **)(v8 + 744));
      if ( (IsVisible & 0x80000000) != 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, IsVisible, 0x5B8u);
    }
  }
  return IsVisible;
}
