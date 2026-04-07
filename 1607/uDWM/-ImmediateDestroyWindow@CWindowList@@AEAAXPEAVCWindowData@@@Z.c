/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18003206C
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C3C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180032490 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000ABF8 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BE1C (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x18001A268 (--1CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001A9F8 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x18001B620 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001B658 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x180030D04 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x180031634 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800336E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180033858 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x1800338D8 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x180033B04 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x180041760 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x1800417A4 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x1800417C8 (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800796D0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x180099BA8 (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x180099BF0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  CBaseObject *v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rsi
  signed int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r14
  CDesktopManager *v11; // rbx
  unsigned int j; // esi
  CBaseObject *v13; // rcx
  struct CVisual *v14; // rbx
  struct CVisual *v15; // rbx
  __int64 v16; // rbx
  CIconicBitmapRegistry *v17; // rbx
  CBaseObject *v18; // rcx
  void (__fastcall *v19)(WPF::ProcessHeapImpl *, void *); // rax
  signed int v20; // esi
  __int64 *v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rbp
  struct CVisual *RootVisualForDesktop; // rax
  unsigned __int64 v25; // rcx
  CBaseObject *v26; // rcx
  struct CVisual *v27; // rax
  CBaseObject *v28; // rcx
  CBaseObject *v29; // rcx
  unsigned int i; // ebx
  __int64 v31; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v32; // rsi
  unsigned int v33; // edx
  unsigned int k; // esi
  struct CSecondaryWindowRepresentation **v35; // rax
  struct CSecondaryWindowRepresentation *v36; // rdx
  CWindowData *v37; // rcx
  struct CVisual *v38; // rdx
  __int64 v39; // rcx
  CBaseObject *v40; // rcx
  CBaseObject *v41; // rcx
  __int64 v42; // rcx
  struct CVisual *v43; // rdx
  __int64 v44; // rcx
  CBaseObject *v45; // rcx
  __int64 v46; // rcx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+58h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 578) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((char *)this + 472, &IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 122) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 58));
  while ( *((_DWORD *)a2 + 130) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 62));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 112) )
  {
    v35 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 53);
    v36 = *v35;
    if ( a2 == *((struct CWindowData **)*v35 + 4) )
      *((_QWORD *)v36 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v36);
  }
  if ( *((int *)a2 + 28) < 8 || *((int *)a2 + 28) > 11 )
    CWindowData::IsShellManaged(a2);
  if ( *((_QWORD *)a2 + 51) )
  {
    v29 = (CBaseObject *)*((_QWORD *)a2 + 51);
    if ( v29 )
    {
      CBaseObject::Release(v29);
      *((_QWORD *)a2 + 51) = 0LL;
    }
    for ( i = 0; i < *((_DWORD *)a2 + 140); ++i )
    {
      v37 = *(CWindowData **)(*((_QWORD *)a2 + 67) + 8LL * i);
      if ( (*((_DWORD *)v37 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v37, 0, 0LL, 0);
    }
  }
  v4 = (CBaseObject *)*((_QWORD *)a2 + 52);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)a2 + 52) = 0LL;
  }
  while ( 1 )
  {
    v5 = *((_DWORD *)a2 + 140);
    if ( !v5 )
      break;
    CWindowList::SetOwner(v4, *(struct CWindowData **)(*((_QWORD *)a2 + 67) + 8LL * (unsigned int)(v5 - 1)), 0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 168), a2, 0LL, 1);
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22);
  if ( v6 )
  {
    v7 = *((_QWORD *)a2 + 5);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v8 = 0;
    if ( *(_DWORD *)(v6 + 72) )
    {
      while ( **(_QWORD **)(*(_QWORD *)(v6 + 48) + 8LL * (unsigned int)v8) != v7 )
      {
        if ( (unsigned int)++v8 >= *(_DWORD *)(v6 + 72) )
          goto LABEL_15;
      }
      if ( v8 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex((CWindowPropertyTracker *)(v6 + 48), v8);
    }
LABEL_15:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23);
  if ( v9 )
  {
    v10 = *((_QWORD *)a2 + 48);
    if ( v10 )
    {
      v20 = *(_DWORD *)(v9 + 48) - 1;
      if ( v20 >= 0 )
      {
        v21 = (__int64 *)(v9 + 24);
        v22 = 24LL * v20;
        do
        {
          v23 = *v21;
          if ( *(_QWORD *)(v22 + *v21) == v10 )
          {
            v38 = *(struct CVisual **)(v22 + v23 + 8);
            v39 = *((_QWORD *)v38 + 3);
            if ( v39 && *(_BYTE *)(v22 + v23 + 16) )
              VisualCollection::Remove((VisualCollection *)(v39 + 32), v38);
            v40 = *(CBaseObject **)(v22 + v23);
            if ( v40 )
              CBaseObject::Release(v40);
            v41 = *(CBaseObject **)(v22 + v23 + 8);
            if ( v41 )
              CBaseObject::Release(v41);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v21, v20);
          }
          v22 -= 24LL;
          --v20;
        }
        while ( v20 >= 0 );
      }
    }
  }
  v11 = CDesktopManager::s_pDesktopManagerInstance;
  for ( j = 0; j < *((_DWORD *)v11 + 404); ++j )
  {
    v42 = *(_QWORD *)(*((_QWORD *)v11 + 199) + 8LL * j);
    (*(void (__fastcall **)(__int64, struct CWindowData *))(*(_QWORD *)v42 + 184LL))(v42, a2);
  }
  v13 = (CBaseObject *)*((_QWORD *)a2 + 71);
  if ( v13 )
  {
    CBaseObject::Release(v13);
    *((_QWORD *)a2 + 71) = 0LL;
  }
  v14 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v14 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)RootVisualForDesktop + 32), v14);
    v25 = *((_QWORD *)a2 + 49);
    if ( v25 )
      CTopLevelWindow3D::StopAnimation(v25);
    v26 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v26 )
    {
      CBaseObject::Release(v26);
      *((_QWORD *)a2 + 49) = 0LL;
    }
  }
  v15 = (struct CVisual *)*((_QWORD *)a2 + 48);
  if ( v15 )
  {
    v27 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)v27 + 32), v15);
    v28 = (CBaseObject *)*((_QWORD *)a2 + 48);
    if ( v28 )
    {
      CBaseObject::Release(v28);
      *((_QWORD *)a2 + 48) = 0LL;
    }
  }
  v16 = *((_QWORD *)a2 + 48);
  if ( v16 )
  {
    v43 = *(struct CVisual **)(v16 + 496);
    if ( v43 )
    {
      v44 = *((_QWORD *)v43 + 3);
      if ( v44 )
        VisualCollection::Remove((VisualCollection *)(v44 + 32), v43);
      v45 = *(CBaseObject **)(v16 + 496);
      if ( v45 )
      {
        CBaseObject::Release(v45);
        *(_QWORD *)(v16 + 496) = 0LL;
      }
    }
  }
  if ( *((_DWORD *)a2 + 32) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4) + 120LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4));
    *((_DWORD *)a2 + 32) = 0;
  }
  if ( *((int *)a2 + 28) >= 8 && *((int *)a2 + 28) <= 11 || CWindowData::IsShellManaged(a2) )
  {
    v31 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            (CImmersiveIconicBitmapRegistry *)v31,
                            *((HWND *)a2 + 5));
    v32 = IconicResourceNoRef;
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v31 + 16, &IconicResourceNoRef);
    if ( v32 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v32, v33);
    CImmersiveIconicBitmapRegistry::_ClearBitmap((CImmersiveIconicBitmapRegistry *)v31, *((HWND *)a2 + 5));
    for ( k = 0; k < *(_DWORD *)(v31 + 72); ++k )
    {
      if ( *((HWND *)a2 + 5) == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*(_QWORD *)(v31 + 48)
                                                                                           + 8LL * k)) )
        CIconicAnimatedVisual::SetIconicData(v46, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v17 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26);
    *((_BYTE *)a2 + 578) &= 0xF1u;
    CIconicBitmapRegistry::RequestBitmap(v17, a2, 0);
    CIconicBitmapRegistry::ClearBitmap(v17, a2);
  }
  v18 = (CBaseObject *)*((_QWORD *)a2 + 44);
  if ( v18 )
  {
    CBaseObject::Release(v18);
    *((_QWORD *)a2 + 44) = 0LL;
  }
  IconicResourceNoRef = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 544, &IconicResourceNoRef);
  CWindowData::~CWindowData(a2);
  v19 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v19 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a2);
  else
    v19(WPF::g_pProcessHeap, a2);
}
