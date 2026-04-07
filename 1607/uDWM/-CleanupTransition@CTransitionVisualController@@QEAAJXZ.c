/*
 * XREFs of ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000E6C0
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D208 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180010620 (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??_GCTransitionVisualController@@QEAAPEAXI@Z @ 0x180076464 (--_GCTransitionVisualController@@QEAAPEAXI@Z.c)
 *     ?OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z @ 0x18008F1E0 (-OnAnimationComplete@CTransitionVisualController@@UEAAJI@Z.c)
 * Callees:
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180004640 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BE1C (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x18000C45C (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z @ 0x180013188 (-ScheduleStopAnimation@CAnimationEngine@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x180032ADC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 *     ?RemoveAt@?$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18007C84C (-RemoveAt@-$DynArray@UTransitionBitmap@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CleanupTransition(CTransitionVisualController *this)
{
  CBaseObject ***v2; // rdi
  struct CTopLevelWindow *v3; // rcx
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  __int64 v7; // rdi
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  CAnimationEngine *v13; // rax
  __int64 v14; // rcx
  CAnimationEngine *v15; // rdi
  _QWORD *v16; // rsi
  unsigned int v17; // edi
  __int64 v18; // rbp
  CBaseObject *v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rdi
  struct CVisual *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rsi
  __int64 v28; // rdx
  struct CWindowData *v29; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 22) != -1 )
  {
    v13 = CDesktopManager::AcquireAnimationEngine();
    v15 = v13;
    if ( v13 )
    {
      CAnimationEngine::ScheduleStopAnimation(v13, *((_DWORD *)this + 22));
      CAnimationEngine::Release(v15);
    }
    *((_DWORD *)this + 22) = -1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_q(v14, &UdwmTransitionVisualController_Stop, *((unsigned int *)this + 26));
  }
  if ( *((_DWORD *)this + 44) )
  {
    v16 = (_QWORD *)((char *)this + 152);
    do
    {
      v17 = *((_DWORD *)this + 44) - 1;
      v18 = 56LL * v17;
      v19 = *(CBaseObject **)(*v16 + v18 + 48);
      if ( v19 )
      {
        CBaseObject::Release(v19);
        *(_QWORD *)(*v16 + v18 + 48) = 0LL;
      }
      DynArray<CTransitionVisualController::TransitionBitmap,0>::RemoveAt((char *)this + 152, v17);
    }
    while ( *((_DWORD *)this + 44) );
  }
  while ( *((_DWORD *)this + 20) )
    CTransitionVisualController::DiscardStoredSnapshot(this, **((HWND **)this + 7));
  if ( *((_DWORD *)this + 12) )
  {
    v2 = (CBaseObject ***)((char *)this + 24);
    do
    {
      v3 = **v2;
      if ( v3 )
      {
        CTransitionVisualController::_MoveWindowOffscreen(v3, 0);
        v4 = **v2;
        if ( v4 )
          CBaseObject::Release(v4);
      }
      v5 = (*v2)[1];
      if ( v5 )
        CBaseObject::Release(v5);
      DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, 0);
    }
    while ( *((_DWORD *)this + 12) );
  }
  if ( *((_QWORD *)this + 1) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      while ( *((_DWORD *)this + 34) )
      {
        v20 = *((_QWORD *)this + 14);
        v21 = *((_DWORD *)this + 34) - 1;
        v29 = 0LL;
        v22 = *(_QWORD *)(v20 + 8LL * v21);
        if ( (int)CWindowList::GetSyncedWindowDataByHwnd(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                    *(HWND *)(v22 + 16),
                    &v29) >= 0
          && v29 )
        {
          CTransitionVisualController::RestoreWindow(this, v29, 1);
        }
        v23 = *(struct CVisual **)(v22 + 32);
        if ( v23 )
        {
          v24 = *((_QWORD *)v23 + 3);
          if ( v24 )
            VisualCollection::Remove((VisualCollection *)(v24 + 32), v23);
        }
        v25 = *(_QWORD *)(v22 + 40);
        if ( v25 )
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 2) + 32LL), (struct CVisual *)(v25 + 8));
        CBaseObject::Release((CBaseObject *)v22);
        v26 = *((_DWORD *)this + 34);
        if ( v26 - 1 < v26 )
          --*((_DWORD *)this + 34);
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
      }
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 1) + 32LL), *((struct CVisual **)this + 2));
      v6 = (CBaseObject *)*((_QWORD *)this + 2);
      if ( v6 )
      {
        CBaseObject::Release(v6);
        *((_QWORD *)this + 2) = 0LL;
      }
    }
    v7 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v7 >= 0 )
    {
      v27 = 24LL * (int)v7;
      do
      {
        v28 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v27 + v28 + 16) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v28 + 24 * v7));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((__int64 *)this + 3, v7);
        }
        v27 -= 24LL;
        v7 = (unsigned int)(v7 - 1);
      }
      while ( (int)v7 >= 0 );
    }
    VisualCollection::RemoveAll((VisualCollection *)(*((_QWORD *)this + 1) + 32LL));
    VisualCollection::Remove(
      (VisualCollection *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 32LL),
      *((struct CVisual **)this + 1));
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 2) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 18);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 18) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 1);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 1) = 0LL;
  }
  v11 = (CBaseObject *)*((_QWORD *)this + 23);
  if ( v11 )
  {
    CBaseObject::Release(v11);
    *((_QWORD *)this + 23) = 0LL;
  }
  *((_QWORD *)this + 12) = -1LL;
  *((_DWORD *)this + 26) = -1;
  return 0LL;
}
