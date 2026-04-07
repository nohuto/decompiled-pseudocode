/*
 * XREFs of ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4
 * Callers:
 *     _lambda_9b37f3d03e1ad1f523dfdba086665a20_::operator() @ 0x180008F74 (_lambda_9b37f3d03e1ad1f523dfdba086665a20_--operator().c)
 *     ?_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z @ 0x18000E1B4 (-_StopAnimations@CTransitionVisualController@@IEAAXPEAVCWindowData@@@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180028250 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029B30 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x18002A324 (-OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002A460 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ??1CTopLevelWindow3D@@MEAA@XZ @ 0x18002A988 (--1CTopLevelWindow3D@@MEAA@XZ.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18007F008 (-StartDelayHideAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180020310 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z @ 0x180029038 (-GetScenarioGuid@CTopLevelWindow3D@@AEAAXW4WindowAnimationType@1@PEAU_GUID@@@Z.c)
 *     ?ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ @ 0x18002A918 (-ReleaseSceneObjects@CTopLevelWindow3D@@AEAAXXZ.c)
 *     ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x180032CB4 (-QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800744A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     Template_qp @ 0x180075F2C (Template_qp.c)
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
  char v13; // cl
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rax
  bool v19; // al
  int v20; // ecx
  void (__fastcall *v21)(CVisual *, int); // rax
  int v22; // eax
  _QWORD v23[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_QWORD *)(this + 344) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_qp(this, &UdwmAnimation_Stop, *(unsigned int *)(this + 352));
    CTopLevelWindow3D::GetScenarioGuid(this, *(unsigned int *)(this + 352), v23);
    v12 = v23[0] - *(_QWORD *)&GUID_NULL.Data1;
    if ( v23[0] == *(_QWORD *)&GUID_NULL.Data1 )
      v12 = v23[1] - *(_QWORD *)GUID_NULL.Data4;
    if ( v12 )
      (*(void (__fastcall **)(_QWORD, _QWORD *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 4)
                                                                 + 224LL))(
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
        v23,
        this | 0xD100000000000000uLL);
    v13 = CDesktopManager::s_fTimelineDirty;
    v14 = (__int64 *)(this + 360);
    v15 = 10LL;
    do
    {
      v16 = *v14;
      if ( *v14 )
      {
        v17 = (*(_DWORD *)(v16 + 8))-- == 1;
        if ( v17 )
          v13 = 1;
        *v14 = 0LL;
        CDesktopManager::s_fTimelineDirty = v13;
      }
      ++v14;
      --v15;
    }
    while ( v15 );
    v18 = *(_QWORD *)(this + 344);
    if ( v18 )
    {
      v17 = (*(_DWORD *)(v18 + 8))-- == 1;
      v19 = v13;
      if ( v17 )
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x521u);
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
    v5 = *(_BYTE *)(v4 + 576);
    if ( (v5 & 4) != 0 )
    {
      v22 = CWindowList::QueueDestroySprite(
              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
              (struct CWindowData *)v4);
      v3 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x537u);
    }
    else
    {
      v6 = v5 & 1;
      if ( !v6
        || ((v10 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168), !*((_BYTE *)v10 + 264))
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
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x532u);
        }
      }
    }
  }
  return v3;
}
