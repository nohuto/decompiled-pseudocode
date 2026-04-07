/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001FE50
 * Callers:
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A574 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18000AA64 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18001549C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180019280 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001F750 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180022130 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002C4B4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE8C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180071930 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180071AB0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x18007EED0 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x18009AAAC (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x18001C4A0 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001EA80 (--_GCButton@@MEAAPEAXI@Z.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001F750 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x1800238D0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180023FA0 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002B2D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x18003D250 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  unsigned int v4; // esi
  __int64 v5; // r14
  int (*v6)(CVisual *__hidden, struct CVisual *); // rbp
  int v7; // eax
  volatile signed __int32 *v8; // rdi
  CTopLevelAtlasedRectsVisual *(__fastcall *v9)(CTopLevelAtlasedRectsVisual *, char); // rbp
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v4 = 0;
    do
    {
      v5 = 8LL * v4;
      v6 = *(int (**)(CVisual *__hidden, struct CVisual *))(**(_QWORD **)(v5 + *((_QWORD *)this + 2)) + 64LL);
      if ( v6 == CVisual::SetParent )
        v7 = CVisual::SetParent(*(CVisual **)(v5 + *((_QWORD *)this + 2)), 0LL);
      else
        v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD))v6)(*(_QWORD *)(v5 + *((_QWORD *)this + 2)), 0LL);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x154u);
        return v2;
      }
      v8 = *(volatile signed __int32 **)(v5 + *((_QWORD *)this + 2));
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          v9 = **(CTopLevelAtlasedRectsVisual *(__fastcall ***)(CTopLevelAtlasedRectsVisual *, char))v8;
          if ( v9 == CCanvas::`scalar deleting destructor' )
          {
            CCanvas::`scalar deleting destructor'((CCanvas *)v8, 1);
          }
          else if ( (char *)v9 == (char *)CClientArea::`scalar deleting destructor' )
          {
            CClientArea::`scalar deleting destructor'((CClientArea *)v8, 1u);
          }
          else if ( (char *)v9 == (char *)CTopLevelWindow::`scalar deleting destructor' )
          {
            CTopLevelWindow::`scalar deleting destructor'((CTopLevelWindow *)v8, 1u);
          }
          else if ( v9 == CButton::`scalar deleting destructor' )
          {
            CButton::`scalar deleting destructor'((CButton *)v8, 1);
          }
          else if ( v9 == CTopLevelAtlasedRectsVisual::`scalar deleting destructor' )
          {
            CTopLevelAtlasedRectsVisual::`scalar deleting destructor'((CTopLevelAtlasedRectsVisual *)v8, 1);
          }
          else
          {
            v9((CTopLevelAtlasedRectsVisual *)v8, 1);
          }
        }
        *(_QWORD *)(v5 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 10) );
    v10 = *((_QWORD *)this + 1);
    v13 = 53LL;
    v11 = *(_QWORD *)(v10 + 16);
    HIDWORD(v13) = *(_DWORD *)(v11 + 24);
    v12 = MilResource_SendCommand(&v13, 8u, *(struct MIL_CHANNEL__ **)(v11 + 16));
    v2 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x86u);
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
