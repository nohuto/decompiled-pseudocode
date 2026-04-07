/*
 * XREFs of ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180008A30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18000AA64 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     sub_1800113BC @ 0x1800113BC (sub_1800113BC.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18000F4D8 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180013708 (-AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneRelative(
        CTransitionVisualController *this,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        bool a4,
        struct CVisual *a5,
        bool a6,
        bool a7,
        bool a8,
        bool *a9)
{
  __int64 v9; // rax
  int v10; // ebx
  __int128 v13; // rdi
  int v15; // eax
  __int64 v16; // rdx
  VisualCollection *v17; // rcx
  int inserted; // eax
  __int64 v19; // rax
  bool *v20; // rbx
  __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rax
  int v26; // eax
  int v27; // r14d
  bool v28; // al
  int v29; // r9d
  unsigned int v30; // [rsp+20h] [rbp-30h]
  CVisual *v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+38h] [rbp-18h] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h]
  struct tagPOINT v34; // [rsp+88h] [rbp+38h] BYREF

  v9 = *((_QWORD *)a2 + 93);
  v10 = 0;
  v31 = 0LL;
  *(_QWORD *)&v13 = a2;
  if ( (*(_BYTE *)(v9 + 568) & 4) != 0 )
    return (unsigned int)v10;
  v15 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, 0, a4, &v31);
  v10 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v15, 0x94u);
    goto LABEL_17;
  }
  v16 = *(_QWORD *)(v13 + 744);
  if ( v16 )
  {
    v34 = *(struct tagPOINT *)(v16 + 48);
    if ( a7 )
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
        *(HWND *)(v16 + 40),
        &v34);
  }
  else
  {
    v34 = *(struct tagPOINT *)(v13 + 104);
  }
  *((_QWORD *)&v13 + 1) = v31;
  CVisual::SetOffset(v31, &v34);
  v17 = (struct CVisual *)((char *)a3 + 32);
  if ( !a6 )
  {
    inserted = VisualCollection::InsertRelative(v17, *((struct CVisual **)&v13 + 1), a5, 0, 1);
    v10 = inserted;
    if ( inserted >= 0 )
      goto LABEL_8;
    v30 = 175;
LABEL_33:
    v29 = inserted;
LABEL_36:
    MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v29, v30);
    goto LABEL_18;
  }
  inserted = VisualCollection::InsertRelative(v17, *((struct CVisual **)&v13 + 1), a5, 1, 1);
  v10 = inserted;
  if ( inserted < 0 )
  {
    v30 = 171;
    goto LABEL_33;
  }
LABEL_8:
  if ( a8 )
  {
    v19 = *(_QWORD *)(v13 + 744);
    if ( !v19 || (*(_DWORD *)(v19 + 576) & 0x20000000) == 0 )
      CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 1);
  }
  v20 = a9;
  v32 = v13;
  LOBYTE(v33) = a4;
  *(_WORD *)((char *)&v33 + 1) = 257;
  if ( a9 )
  {
    v28 = *a9 && CTransitionVisualController::AllowSnapshotForSWR(*(HWND *)(*(_QWORD *)(v13 + 744) + 40LL));
    *v20 = v28;
    BYTE2(v33) = v28;
  }
  v21 = *((unsigned int *)this + 12);
  v22 = v21 + 1;
  if ( (int)v21 + 1 < (unsigned int)v21 )
  {
    v27 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v10 = -2147024362;
LABEL_35:
    v30 = 193;
    v29 = v27;
    goto LABEL_36;
  }
  v10 = 0;
  if ( v22 > *((_DWORD *)this + 11) )
  {
    v26 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 24, 24LL, 1LL, &v32);
    v27 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xC0u);
    v10 = v27;
    if ( v27 >= 0 )
      goto LABEL_16;
    goto LABEL_35;
  }
  v23 = 3 * v21;
  v24 = *((_QWORD *)this + 3);
  *(_OWORD *)(v24 + 8 * v23) = v32;
  *(_QWORD *)(v24 + 8 * v23 + 16) = v33;
  *((_DWORD *)this + 12) = v22;
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
LABEL_17:
  *((_QWORD *)&v13 + 1) = v31;
LABEL_18:
  if ( v10 < 0 && *((_QWORD *)&v13 + 1) )
  {
    CTransitionVisualController::_MoveWindowOffscreen((struct CTopLevelWindow *)v13, 0);
    VisualCollection::Remove((struct CVisual *)((char *)a3 + 32), *((struct CVisual **)&v13 + 1));
    CBaseObject::Release(*((CBaseObject **)&v13 + 1));
  }
  return (unsigned int)v10;
}
