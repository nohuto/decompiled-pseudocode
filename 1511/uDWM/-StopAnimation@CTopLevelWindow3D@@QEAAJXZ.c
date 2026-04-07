/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4
 * Callers:
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000A3E0 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180033A60 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x1800359D0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180035C44 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035D7C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x180036278 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007E454 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     sub_18008F6C4 @ 0x18008F6C4 (sub_18008F6C4.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A1A0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180032EF8 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x1800348C0 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x180036208 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x18007268C (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     Template_qp @ 0x180074068 (Template_qp.c)
 */

__int64 __fastcall CTopLevelWindow3D::StopAnimation(unsigned __int64 this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  char v5; // r11
  char v6; // r11
  CTopLevelWindow *v7; // rcx
  int v8; // eax
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
  void (__fastcall *v21)(CVisual *, int); // rsi
  int v22; // eax
  __int128 v23; // [rsp+30h] [rbp-58h] BYREF
  int v24; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+44h] [rbp-44h]
  unsigned __int64 v26; // [rsp+54h] [rbp-34h]

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
      v24 = 15;
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
  v2 = CVisual::ClearInstructions((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x516u);
  }
  else
  {
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
    v4 = *(_QWORD *)(this + 312);
    v5 = *(_BYTE *)(v4 + 568);
    if ( (v5 & 4) != 0 )
    {
      v22 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
              (struct CWindowData *)v4);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x52Cu);
    }
    else
    {
      v6 = v5 & 1;
      if ( !v6
        || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170), !*((_BYTE *)v10 + 264))
         || !v4
          ? (v11 = 0)
          : (v11 = CLivePreview::_IsInLivePreview(v10, (const struct CWindowData *)v4)),
            !v11) )
      {
        v7 = *(CTopLevelWindow **)(v4 + 384);
        if ( v7 )
        {
          v8 = CTopLevelWindow::ShowWindow(v7, v6);
          v3 = v8;
          if ( v8 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x527u);
        }
      }
    }
  }
  return v3;
}
