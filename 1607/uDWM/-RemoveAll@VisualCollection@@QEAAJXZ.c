/*
 * XREFs of ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0
 * Callers:
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180004B54 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180007700 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180009394 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000E318 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000E6C0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001C560 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x1800335A8 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180035BDC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18003744C (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE6C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ @ 0x180073720 (-_CleanupClonedVisualTree@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x1800738A0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x18007F930 (--_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800978B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ??_GCClientArea@@MEAAPEAXI@Z @ 0x180015E10 (--_GCClientArea@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x1800194E0 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCButton@@MEAAPEAXI@Z @ 0x18001B900 (--_GCButton@@MEAAPEAXI@Z.c)
 *     ??_GCCanvas@@MEAAPEAXI@Z @ 0x18001C560 (--_GCCanvas@@MEAAPEAXI@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAV1@@Z @ 0x1800207A0 (-SetParent@CVisual@@UEAAJPEAV1@@Z.c)
 *     ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180020DB0 (--_GCTopLevelWindow@@MEAAPEAXI@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18002AC70 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VisualCollection::RemoveAll(VisualCollection *this)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  CVisual *v5; // rcx
  int (*v6)(CVisual *__hidden, struct CVisual *); // rax
  int v7; // eax
  unsigned int v8; // esi
  volatile signed __int32 *v9; // rcx
  CTopLevelAtlasedRectsVisual *(__fastcall *v10)(CTopLevelAtlasedRectsVisual *, char); // rax
  int v11; // eax

  v2 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    do
    {
      v4 = 8LL * v2;
      v5 = *(CVisual **)(v4 + *((_QWORD *)this + 2));
      v6 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)v5 + 64LL);
      if ( v6 == CVisual::SetParent )
        v7 = CVisual::SetParent(v5, 0LL);
      else
        v7 = ((__int64 (__fastcall *)(CVisual *, _QWORD))v6)(v5, 0LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x150u);
        return v8;
      }
      v9 = *(volatile signed __int32 **)(v4 + *((_QWORD *)this + 2));
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          v10 = **(CTopLevelAtlasedRectsVisual *(__fastcall ***)(CTopLevelAtlasedRectsVisual *, char))v9;
          if ( v10 == CCanvas::`scalar deleting destructor' )
          {
            CCanvas::`scalar deleting destructor'((CCanvas *)v9, 1);
          }
          else if ( v10 == CClientArea::`scalar deleting destructor' )
          {
            CClientArea::`scalar deleting destructor'((CClientArea *)v9, 1);
          }
          else if ( (char *)v10 == (char *)CTopLevelWindow::`scalar deleting destructor' )
          {
            CTopLevelWindow::`scalar deleting destructor'((CTopLevelWindow *)v9, 1u);
          }
          else if ( v10 == CButton::`scalar deleting destructor' )
          {
            CButton::`scalar deleting destructor'((CButton *)v9, 1);
          }
          else if ( v10 == CTopLevelAtlasedRectsVisual::`scalar deleting destructor' )
          {
            CTopLevelAtlasedRectsVisual::`scalar deleting destructor'((CTopLevelAtlasedRectsVisual *)v9, 1);
          }
          else
          {
            v10((CTopLevelAtlasedRectsVisual *)v9, 1);
          }
        }
        *(_QWORD *)(v4 + *((_QWORD *)this + 2)) = 0LL;
      }
      ++v2;
    }
    while ( v2 < *((_DWORD *)this + 10) );
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)
                                                    + 400LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 24LL));
    v2 = v11;
    if ( v11 >= 0 )
      goto LABEL_2;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x156u);
  }
  else
  {
LABEL_2:
    *((_DWORD *)this + 10) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 16, 8LL);
  }
  return v2;
}
