/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180001814 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E93C (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000ECAC (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18001374C (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x1800197F0 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18001CCC0 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x180029650 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x180036804 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180068604 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180068BB4 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180068D34 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x1800770E0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x18008EEC8 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800993BC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180012970 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??_GCText@@EEAAPEAXI@Z @ 0x180016AC0 (--_GCText@@EEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180016DB0 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x1800197F0 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x180019D90 (--_GCButton@@MEAAPEAXI@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x18001E4C0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 v5; // r14
  CVisual *v6; // rdi
  int (*v7)(CVisual *__hidden, struct CVisual *); // rsi
  int v8; // eax
  volatile signed __int32 *v9; // rdi
  CClientArea *(__fastcall *v10)(CClientArea *, char); // rsi
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v4 = 0;
    do
    {
      v5 = 8LL * v4;
      v6 = *(CVisual **)(v5 + *((_QWORD *)this + 2));
      v7 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)v6 + 64LL);
      if ( v7 == CVisual::SetParent )
        v8 = CVisual::SetParent(v6, 0LL);
      else
        v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD))v7)(*(_QWORD *)(v5 + *((_QWORD *)this + 2)), 0LL);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x154u);
        return v2;
      }
      v9 = *(volatile signed __int32 **)(v5 + *((_QWORD *)this + 2));
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = **(CClientArea *(__fastcall ***)(CClientArea *, char))v9;
          if ( (char *)v10 == (char *)CCanvas::`scalar deleting destructor' )
          {
            CCanvas::`scalar deleting destructor'((CCanvas *)v9, 1u);
          }
          else if ( v10 == CClientArea::`scalar deleting destructor' )
          {
            CClientArea::`scalar deleting destructor'((CClientArea *)v9, 1);
          }
          else if ( (char *)v10 == (char *)CButton::`scalar deleting destructor' )
          {
            CButton::`scalar deleting destructor'((CButton *)v9, 1u);
          }
          else if ( (char *)v10 == (char *)CTopLevelAtlasedRectsVisual::`scalar deleting destructor' )
          {
            CTopLevelAtlasedRectsVisual::`scalar deleting destructor'((CTopLevelAtlasedRectsVisual *)v9, 1u);
          }
          else if ( (char *)v10 == (char *)CText::`scalar deleting destructor' )
          {
            CText::`scalar deleting destructor'((CText *)v9, 1u);
          }
          else
          {
            v10((CClientArea *)v9, 1);
          }
        }
        *(_QWORD *)(v5 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 10) );
    v11 = *((_QWORD *)this + 1);
    v14 = 50LL;
    v12 = *(_QWORD *)(v11 + 16);
    HIDWORD(v14) = *(_DWORD *)(v12 + 24);
    v13 = MilResource_SendCommand(&v14, 8u, *(struct MIL_CHANNEL__ **)(v12 + 16));
    v2 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x86u);
    if ( (v2 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x15Cu);
      return v2;
    }
  }
  *((_DWORD *)this + 10) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 8LL);
  return v2;
}
