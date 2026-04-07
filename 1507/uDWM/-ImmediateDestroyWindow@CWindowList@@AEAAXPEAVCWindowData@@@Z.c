/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC90 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x180007A84 (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x180007AC8 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x180007AEC (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180009A0C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180010110 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180017AFC (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x1800185F4 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18002A5C4 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002C4A4 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180030A98 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030C0C (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180030D04 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x180070380 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009B8EC (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x18009B9E0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CBaseObject *v6; // rcx
  int j; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  CWindowPropertyTracker *v10; // rbx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rbx
  CDesktopManager *v15; // rbp
  __int64 k; // r14
  CBaseObject *v17; // rcx
  struct CVisual *v18; // rbx
  struct CVisual *v19; // rbx
  __int64 v20; // rbx
  unsigned int v21; // edx
  int v22; // eax
  CIconicBitmapRegistry *v23; // rbx
  CBaseObject *v24; // rcx
  void (__fastcall *v25)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v26)(WPF::ProcessHeapImpl *, void *); // rdi
  __int64 v27; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v28; // rdi
  unsigned int v29; // edx
  __int64 m; // rdi
  signed int v31; // edi
  __int64 *v32; // r12
  __int64 v33; // r14
  __int64 v34; // rbp
  struct CVisual *RootVisualForDesktop; // rax
  unsigned __int64 v36; // rcx
  CBaseObject *v37; // rcx
  struct CVisual *v38; // rax
  CBaseObject *v39; // rcx
  void (__fastcall *v40)(WPF::ProcessHeapImpl *, void *); // rbp
  void (__fastcall *v41)(WPF::ProcessHeapImpl *, void *); // rbp
  CBaseObject *v42; // rcx
  __int64 i; // rbx
  struct CSecondaryWindowRepresentation **v44; // rax
  struct CSecondaryWindowRepresentation *v45; // rdx
  CWindowData *v46; // rcx
  struct CVisual *v47; // rdx
  __int64 v48; // rcx
  CBaseObject *v49; // rcx
  struct CVisual *v50; // rdx
  __int64 v51; // rcx
  CBaseObject *v52; // rcx
  __int64 v53; // rcx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+58h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 554) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((__int64 *)this + 59, (__int64 *)&IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 116) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 55));
  while ( *((_DWORD *)a2 + 124) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 59));
  CWindowList::SetOwner(this, a2, 0LL);
  while ( *((_DWORD *)a2 + 106) )
  {
    v44 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 50);
    v45 = *v44;
    if ( a2 == *((struct CWindowData **)*v44 + 4) )
      *((_QWORD *)v45 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v45, v4, v5);
  }
  if ( *((_QWORD *)a2 + 48) )
  {
    v42 = (CBaseObject *)*((_QWORD *)a2 + 48);
    if ( v42 )
    {
      CBaseObject::Release(v42);
      *((_QWORD *)a2 + 48) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 134); i = (unsigned int)(i + 1) )
    {
      v46 = *(CWindowData **)(*((_QWORD *)a2 + 64) + 8 * i);
      if ( (*((_DWORD *)v46 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v46, 0, 0LL, 0);
    }
  }
  v6 = (CBaseObject *)*((_QWORD *)a2 + 49);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 49) = 0LL;
  }
  for ( j = *((_DWORD *)a2 + 134); j; j = *((_DWORD *)a2 + 134) )
    CWindowList::SetOwner(v6, *(struct CWindowData **)(*((_QWORD *)a2 + 64) + 8LL * (unsigned int)(j - 1)), 0LL);
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170), a2, 0LL, 1);
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  if ( v8 )
  {
    v9 = *((_QWORD *)a2 + 5);
    v10 = (CWindowPropertyTracker *)(v8 + 48);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v11 = *((_DWORD *)v10 + 6);
    v12 = 0LL;
    if ( v11 )
    {
      while ( **(_QWORD **)(*(_QWORD *)v10 + 8 * v12) != v9 )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_12;
      }
      if ( (int)v12 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex(v10, v12);
    }
LABEL_12:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  if ( v13 )
  {
    v14 = *((_QWORD *)a2 + 46);
    if ( v14 )
    {
      v31 = *(_DWORD *)(v13 + 48) - 1;
      if ( v31 >= 0 )
      {
        v32 = (__int64 *)(v13 + 24);
        v33 = 24LL * v31;
        do
        {
          v34 = v33 + *v32;
          if ( *(_QWORD *)v34 == v14 )
          {
            v47 = *(struct CVisual **)(v34 + 8);
            v48 = *((_QWORD *)v47 + 3);
            if ( v48 && *(_BYTE *)(v34 + 16) )
              VisualCollection::Remove((VisualCollection *)(v48 + 32), v47);
            if ( *(_QWORD *)v34 )
              CBaseObject::Release(*(CBaseObject **)v34);
            v49 = *(CBaseObject **)(v34 + 8);
            if ( v49 )
              CBaseObject::Release(v49);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v32, v31);
          }
          v33 -= 24LL;
          --v31;
        }
        while ( v31 >= 0 );
      }
    }
  }
  v15 = CDesktopManager::s_pDesktopManagerInstance;
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)v15 + 408); k = (unsigned int)(k + 1) )
    (*(void (__fastcall **)(_QWORD, struct CWindowData *))(**(_QWORD **)(*((_QWORD *)v15 + 201) + 8 * k) + 184LL))(
      *(_QWORD *)(*((_QWORD *)v15 + 201) + 8 * k),
      a2);
  v17 = (CBaseObject *)*((_QWORD *)a2 + 68);
  if ( v17 )
  {
    CBaseObject::Release(v17);
    *((_QWORD *)a2 + 68) = 0LL;
  }
  v18 = (struct CVisual *)*((_QWORD *)a2 + 47);
  if ( v18 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)RootVisualForDesktop + 32), v18);
    v36 = *((_QWORD *)a2 + 47);
    if ( v36 )
      CTopLevelWindow3D::StopAnimation(v36);
    v37 = (CBaseObject *)*((_QWORD *)a2 + 47);
    if ( v37 )
    {
      CBaseObject::Release(v37);
      *((_QWORD *)a2 + 47) = 0LL;
    }
  }
  v19 = (struct CVisual *)*((_QWORD *)a2 + 46);
  if ( v19 )
  {
    v38 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)v38 + 32), v19);
    v39 = (CBaseObject *)*((_QWORD *)a2 + 46);
    if ( v39 )
    {
      CBaseObject::Release(v39);
      *((_QWORD *)a2 + 46) = 0LL;
    }
  }
  v20 = *((_QWORD *)a2 + 46);
  if ( v20 )
  {
    v50 = *(struct CVisual **)(v20 + 496);
    if ( v50 )
    {
      v51 = *((_QWORD *)v50 + 3);
      if ( v51 )
        VisualCollection::Remove((VisualCollection *)(v51 + 32), v50);
      v52 = *(CBaseObject **)(v20 + 496);
      if ( v52 )
      {
        CBaseObject::Release(v52);
        *(_QWORD *)(v20 + 496) = 0LL;
      }
    }
  }
  v21 = *((_DWORD *)a2 + 32);
  if ( v21 )
  {
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v21, 0LL);
    *((_DWORD *)a2 + 32) = 0;
  }
  v22 = *((_DWORD *)a2 + 28);
  if ( v22 >= 8 && v22 <= 11 || (*((_BYTE *)a2 + 557) & 2) != 0 )
  {
    v27 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            (CImmersiveIconicBitmapRegistry *)v27,
                            *((HWND *)a2 + 5));
    v28 = IconicResourceNoRef;
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(
      (__int64 *)(v27 + 16),
      (__int64 *)&IconicResourceNoRef);
    if ( v28 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v28, v29);
    CImmersiveIconicBitmapRegistry::_ClearBitmap((CImmersiveIconicBitmapRegistry *)v27, *((HWND *)a2 + 5));
    for ( m = 0LL; (unsigned int)m < *(_DWORD *)(v27 + 72); m = (unsigned int)(m + 1) )
    {
      if ( *((HWND *)a2 + 5) == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*(_QWORD *)(v27 + 48)
                                                                                           + 8 * m)) )
        CIconicAnimatedVisual::SetIconicData(v53, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v23 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
    *((_BYTE *)a2 + 554) &= 0xF1u;
    CIconicBitmapRegistry::RequestBitmap(v23, a2, 0);
    CIconicBitmapRegistry::ClearBitmap(v23, a2);
  }
  v24 = (CBaseObject *)*((_QWORD *)a2 + 42);
  if ( v24 )
  {
    CBaseObject::Release(v24);
    *((_QWORD *)a2 + 42) = 0LL;
  }
  IconicResourceNoRef = a2;
  DynArray<CWindowData *,0>::Remove((__int64 *)this + 68, (__int64 *)&IconicResourceNoRef);
  if ( *((struct CWindowData **)a2 + 2) != (struct CWindowData *)((char *)a2 + 1158) )
  {
    v41 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v41 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)a2 + 2));
    else
      v41(WPF::g_pProcessHeap, *((void **)a2 + 2));
  }
  if ( *((_QWORD *)a2 + 64) != *((_QWORD *)a2 + 65) )
  {
    v25 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v25 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)a2 + 64));
    else
      v25(WPF::g_pProcessHeap, *((void **)a2 + 64));
    *((_QWORD *)a2 + 64) = 0LL;
  }
  if ( *((_QWORD *)a2 + 59) != *((_QWORD *)a2 + 60) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)a2 + 59));
    *((_QWORD *)a2 + 59) = 0LL;
  }
  if ( *((_QWORD *)a2 + 55) != *((_QWORD *)a2 + 56) )
  {
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)a2 + 55));
    *((_QWORD *)a2 + 55) = 0LL;
  }
  if ( *((_QWORD *)a2 + 50) != *((_QWORD *)a2 + 51) )
  {
    v40 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v40 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, *((void **)a2 + 50));
    else
      v40(WPF::g_pProcessHeap, *((void **)a2 + 50));
    *((_QWORD *)a2 + 50) = 0LL;
  }
  v26 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v26 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a2);
  else
    v26(WPF::g_pProcessHeap, a2);
}
