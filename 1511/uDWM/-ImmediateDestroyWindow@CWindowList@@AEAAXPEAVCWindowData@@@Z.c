/*
 * XREFs of ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031C44 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031E10 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x18000357C (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B040 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001D318 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CWindowData@@QEAA@XZ @ 0x18001D6EC (--1CWindowData@@QEAA@XZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18001DE78 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002CCCC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18002D8F8 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z @ 0x18002F814 (-SetOwner@CWindowList@@AEAAJPEAVCWindowData@@0@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180039D68 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18003CBD4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18003CC54 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18003CE80 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z @ 0x18003E84C (-_ClearBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAUHWND__@@@Z.c)
 *     ?_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAUHWND__@@@Z @ 0x18003E890 (-_GetIconicResourceNoRef@CImmersiveIconicBitmapRegistry@@AEAAPEAVCImmersiveIconicResource@1@PEAU.c)
 *     ?Remove@?$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@@Z @ 0x18003E8B4 (-Remove@-$DynArray@PEAVCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@$0A@@@QEAAHAEBQE.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ??_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z @ 0x1800785B0 (--_GCImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAXI@Z.c)
 *     ?GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ @ 0x18009CFBC (-GetWindow@CIconicAnimatedVisual@@QEAAPEAUHWND__@@XZ.c)
 *     ?SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@@Z @ 0x18009D0B0 (-SetIconicData@CIconicAnimatedVisual@@QEAAJPEAVCWindowData@@PEBUtagRECT@@PEAU-$TMILFlagsEnum@W4F.c)
 */

void __fastcall CWindowList::ImmediateDestroyWindow(CWindowList *this, struct CWindowData *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  CBaseObject *v6; // rcx
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // rdi
  signed int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // r14
  CDesktopManager *v13; // rbp
  unsigned int j; // r14d
  CBaseObject *v15; // rcx
  struct CVisual *v16; // rbx
  struct CVisual *v17; // rbx
  __int64 v18; // rbx
  unsigned int v19; // edx
  CIconicBitmapRegistry *v20; // rbx
  CBaseObject *v21; // rcx
  void (__fastcall *v22)(WPF::ProcessHeapImpl *, void *); // rdi
  __int64 v23; // rbx
  CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *v24; // rdi
  unsigned int v25; // edx
  unsigned int k; // edi
  signed int v27; // edi
  __int64 *v28; // r15
  __int64 v29; // rbx
  __int64 v30; // rbp
  struct CVisual *RootVisualForDesktop; // rax
  CTopLevelWindow3D *v32; // rcx
  CBaseObject *v33; // rcx
  struct CVisual *v34; // rax
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  unsigned int i; // ebx
  struct CSecondaryWindowRepresentation **v38; // rax
  struct CSecondaryWindowRepresentation *v39; // rdx
  CWindowData *v40; // rcx
  struct CVisual *v41; // rdx
  __int64 v42; // rcx
  CBaseObject *v43; // rcx
  CBaseObject *v44; // rcx
  struct CVisual *v45; // rdx
  __int64 v46; // rcx
  CBaseObject *v47; // rcx
  __int64 v48; // rcx
  struct CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *IconicResourceNoRef; // [rsp+58h] [rbp+10h] BYREF

  IconicResourceNoRef = a2;
  if ( (*((_BYTE *)a2 + 570) & 1) != 0 )
    DynArray<CWindowData *,0>::Remove((char *)this + 472, &IconicResourceNoRef);
  while ( *((_DWORD *)a2 + 120) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 57));
  while ( *((_DWORD *)a2 + 128) )
    CWindowList::UnregisterThumbnail(this, **((struct CVisual ****)a2 + 61));
  CWindowList::SetOwner((CWindowData **)this, a2, 0LL);
  while ( *((_DWORD *)a2 + 110) )
  {
    v38 = (struct CSecondaryWindowRepresentation **)*((_QWORD *)a2 + 52);
    v39 = *v38;
    if ( a2 == *((struct CWindowData **)*v38 + 4) )
      *((_QWORD *)v39 + 4) = 0LL;
    CWindowData::RemoveSecondaryWindowRepresentation(a2, v39, v4, v5);
  }
  if ( *((_QWORD *)a2 + 50) )
  {
    v36 = (CBaseObject *)*((_QWORD *)a2 + 50);
    if ( v36 )
    {
      CBaseObject::Release(v36);
      *((_QWORD *)a2 + 50) = 0LL;
    }
    for ( i = 0; i < *((_DWORD *)a2 + 138); ++i )
    {
      v40 = *(CWindowData **)(*((_QWORD *)a2 + 66) + 8LL * i);
      if ( (*((_DWORD *)v40 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v40, 0, 0LL, 0);
    }
  }
  v6 = (CBaseObject *)*((_QWORD *)a2 + 51);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)a2 + 51) = 0LL;
  }
  while ( 1 )
  {
    v7 = *((_DWORD *)a2 + 138);
    if ( !v7 )
      break;
    CWindowList::SetOwner(
      (CWindowData **)v6,
      *(struct CWindowData **)(*((_QWORD *)a2 + 66) + 8LL * (unsigned int)(v7 - 1)),
      0LL);
  }
  CLivePreview::OnWindowShowHide(*((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170), a2, 0LL, 1);
  v8 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
  if ( v8 )
  {
    v9 = *((_QWORD *)a2 + 5);
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v10 = 0;
    if ( *(_DWORD *)(v8 + 72) )
    {
      while ( **(_QWORD **)(*(_QWORD *)(v8 + 48) + 8LL * (unsigned int)v10) != v9 )
      {
        if ( (unsigned int)++v10 >= *(_DWORD *)(v8 + 72) )
          goto LABEL_15;
      }
      if ( v10 >= 0 )
        CWindowPropertyTracker::_StopTrackingWindowByIndex((CWindowPropertyTracker *)(v8 + 48), v10);
    }
LABEL_15:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  }
  v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 25);
  if ( v11 )
  {
    v12 = *((_QWORD *)a2 + 48);
    if ( v12 )
    {
      v27 = *(_DWORD *)(v11 + 48) - 1;
      if ( v27 >= 0 )
      {
        v28 = (__int64 *)(v11 + 24);
        v29 = 24LL * v27;
        do
        {
          v30 = *v28;
          if ( *(_QWORD *)(v29 + *v28) == v12 )
          {
            v41 = *(struct CVisual **)(v29 + v30 + 8);
            v42 = *((_QWORD *)v41 + 3);
            if ( v42 && *(_BYTE *)(v29 + v30 + 16) )
              VisualCollection::Remove((VisualCollection *)(v42 + 32), v41);
            v43 = *(CBaseObject **)(v29 + v30);
            if ( v43 )
              CBaseObject::Release(v43);
            v44 = *(CBaseObject **)(v29 + v30 + 8);
            if ( v44 )
              CBaseObject::Release(v44);
            DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(v28, v27);
          }
          v29 -= 24LL;
          --v27;
        }
        while ( v27 >= 0 );
      }
    }
  }
  v13 = CDesktopManager::s_pDesktopManagerInstance;
  for ( j = 0; j < *((_DWORD *)v13 + 408); ++j )
    (*(void (__fastcall **)(_QWORD, struct CWindowData *))(**(_QWORD **)(*((_QWORD *)v13 + 201) + 8LL * j) + 184LL))(
      *(_QWORD *)(*((_QWORD *)v13 + 201) + 8LL * j),
      a2);
  v15 = (CBaseObject *)*((_QWORD *)a2 + 70);
  if ( v15 )
  {
    CBaseObject::Release(v15);
    *((_QWORD *)a2 + 70) = 0LL;
  }
  v16 = (struct CVisual *)*((_QWORD *)a2 + 49);
  if ( v16 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)RootVisualForDesktop + 32), v16);
    v32 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 49);
    if ( v32 )
      CTopLevelWindow3D::StopAnimation(v32);
    v33 = (CBaseObject *)*((_QWORD *)a2 + 49);
    if ( v33 )
    {
      CBaseObject::Release(v33);
      *((_QWORD *)a2 + 49) = 0LL;
    }
  }
  v17 = (struct CVisual *)*((_QWORD *)a2 + 48);
  if ( v17 )
  {
    v34 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)v34 + 32), v17);
    v35 = (CBaseObject *)*((_QWORD *)a2 + 48);
    if ( v35 )
    {
      CBaseObject::Release(v35);
      *((_QWORD *)a2 + 48) = 0LL;
    }
  }
  v18 = *((_QWORD *)a2 + 48);
  if ( v18 )
  {
    v45 = *(struct CVisual **)(v18 + 496);
    if ( v45 )
    {
      v46 = *((_QWORD *)v45 + 3);
      if ( v46 )
        VisualCollection::Remove((VisualCollection *)(v46 + 32), v45);
      v47 = *(CBaseObject **)(v18 + 496);
      if ( v47 )
      {
        CBaseObject::Release(v47);
        *(_QWORD *)(v18 + 496) = 0LL;
      }
    }
  }
  v19 = *((_DWORD *)a2 + 32);
  if ( v19 )
  {
    MilResource_ReleaseOnChannel(*((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4), v19, 0LL);
    *((_DWORD *)a2 + 32) = 0;
  }
  if ( *((int *)a2 + 28) >= 8 && *((int *)a2 + 28) <= 11 || *((char *)a2 + 572) < 0 )
  {
    v23 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 29);
    IconicResourceNoRef = CImmersiveIconicBitmapRegistry::_GetIconicResourceNoRef(
                            (CImmersiveIconicBitmapRegistry *)v23,
                            *((HWND *)a2 + 5));
    v24 = IconicResourceNoRef;
    DynArray<CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *,0>::Remove(v23 + 16, &IconicResourceNoRef);
    if ( v24 )
      CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::`scalar deleting destructor'(v24, v25);
    CImmersiveIconicBitmapRegistry::_ClearBitmap((CImmersiveIconicBitmapRegistry *)v23, *((HWND *)a2 + 5));
    for ( k = 0; k < *(_DWORD *)(v23 + 72); ++k )
    {
      if ( *((HWND *)a2 + 5) == CIconicAnimatedVisual::GetWindow(*(CIconicAnimatedVisual **)(*(_QWORD *)(v23 + 48)
                                                                                           + 8LL * k)) )
        CIconicAnimatedVisual::SetIconicData(v48, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v20 = (CIconicBitmapRegistry *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 28);
    *((_BYTE *)a2 + 570) &= 0xF1u;
    CIconicBitmapRegistry::RequestBitmap(v20, a2, 0);
    CIconicBitmapRegistry::ClearBitmap(v20, a2);
  }
  v21 = (CBaseObject *)*((_QWORD *)a2 + 44);
  if ( v21 )
  {
    CBaseObject::Release(v21);
    *((_QWORD *)a2 + 44) = 0LL;
  }
  IconicResourceNoRef = a2;
  DynArray<CWindowData *,0>::Remove((char *)this + 544, &IconicResourceNoRef);
  CWindowData::~CWindowData((void **)a2);
  v22 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v22 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, a2);
  else
    v22(WPF::g_pProcessHeap, a2);
}
