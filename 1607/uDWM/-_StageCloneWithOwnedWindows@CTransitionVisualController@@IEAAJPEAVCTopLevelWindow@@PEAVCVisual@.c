/*
 * XREFs of ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x180004B54
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000C0E0 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ??$ForEachOwnedWindow@V_lambda_01b389546427082a9499a493e716ac63_@@@CTransitionVisualController@@KAJPEBVCWindowData@@AEBV_lambda_01b389546427082a9499a493e716ac63_@@_N@Z @ 0x18000519C (--$ForEachOwnedWindow@V_lambda_01b389546427082a9499a493e716ac63_@@@CTransitionVisualController@@.c)
 *     ?CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z @ 0x1800096F8 (-CreateBackground@CTransitionVisualController@@SAJPEBUtagRECT@@PEAPEAVCAccent@@@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x18000B2B0 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000BE1C (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000E898 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18001CBB0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTransitionVisualController::_StageCloneWithOwnedWindows(
        __int64 a1,
        struct CTopLevelWindow *a2,
        struct CVisual *a3,
        int a4,
        bool a5,
        int a6)
{
  unsigned int v6; // r15d
  bool v7; // zf
  struct tagRECT *v9; // rbx
  struct CAccent *v11; // rsi
  int v12; // eax
  int v13; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int inserted; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  bool v29; // [rsp+50h] [rbp-49h] BYREF
  struct CVisual *v30; // [rsp+58h] [rbp-41h] BYREF
  struct CAccent *v31; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v32[5]; // [rsp+68h] [rbp-31h] BYREF
  struct tagRECT rc; // [rsp+90h] [rbp-9h] BYREF
  int v34; // [rsp+108h] [rbp+6Fh] BYREF

  v34 = a4;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 96) == -1LL;
  v9 = (struct tagRECT *)*((_QWORD *)a2 + 93);
  v30 = a3;
  v11 = 0LL;
  v31 = 0LL;
  v29 = 1;
  if ( v7 )
  {
    v13 = -2147467259;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147467259,
      0xE9u);
  }
  else
  {
    v32[1] = a1;
    v32[0] = &v34;
    LOBYTE(a3) = 1;
    v32[2] = &v30;
    v32[3] = &a5;
    v32[4] = &v29;
    CTransitionVisualController::ForEachOwnedWindow<_lambda_01b389546427082a9499a493e716ac63_>(v9, v32, a3);
    v12 = CTransitionVisualController::_StageCloneRelative(
            (CTransitionVisualController *)a1,
            a2,
            v30,
            0,
            0LL,
            1,
            a5,
            1,
            &v29);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v12, 0xFEu);
LABEL_5:
      if ( v13 >= 0 )
        goto LABEL_6;
      goto LABEL_37;
    }
    if ( *((_DWORD *)v30 + 18) )
    {
      if ( a6 == 1 )
      {
        v7 = (v9[36].right & 0x1000000) == 0;
        rc = v9[3];
        if ( !v7 )
        {
          v15 = v9[37].top - v9[36].bottom;
          if ( v15 < 0 )
            v15 = 0;
          v16 = rc.right - rc.left;
          if ( rc.right - rc.left < 0 )
            v16 = 0;
          if ( v15 > v16 )
          {
            v25 = v9[37].top - v9[36].bottom;
            if ( v25 < 0 )
              v25 = 0;
            rc.right = rc.left + v25;
          }
          v17 = v9[37].right - v9[37].left;
          if ( v17 < 0 )
            v17 = 0;
          v18 = rc.bottom - rc.top;
          if ( rc.bottom - rc.top < 0 )
            v18 = 0;
          if ( v17 > v18 )
          {
            v26 = v9[37].right - v9[37].left;
            if ( v26 < 0 )
              v26 = 0;
            rc.bottom = rc.top + v26;
          }
          OffsetRect(&rc, v9[36].bottom, v9[37].left);
        }
        if ( (v9[36].right & 0x800000) != 0 )
        {
          v19 = v9[39].top - v9[38].bottom;
          if ( v19 < 0 )
            v19 = 0;
          v20 = rc.right - rc.left;
          if ( rc.right - rc.left < 0 )
            v20 = 0;
          if ( v19 > v20 )
          {
            v27 = v9[39].top - v9[38].bottom;
            if ( v27 < 0 )
              v27 = 0;
            rc.right = rc.left + v27;
          }
          v21 = v9[39].right - v9[39].left;
          if ( v21 < 0 )
            v21 = 0;
          v22 = rc.bottom - rc.top;
          if ( rc.bottom - rc.top < 0 )
            v22 = 0;
          if ( v21 > v22 )
          {
            v28 = v9[39].right - v9[39].left;
            if ( v28 < 0 )
              v28 = 0;
            rc.bottom = rc.top + v28;
          }
        }
        v23 = CTransitionVisualController::CreateBackground(&rc, &v31);
        v13 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v23, 0x124u);
          v11 = v31;
        }
        else
        {
          v11 = v31;
          inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)v30 + 32), v31, 0LL, 1, 1);
          v13 = inserted;
          if ( inserted >= 0 )
            goto LABEL_6;
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            inserted,
            0x125u);
        }
      }
      goto LABEL_5;
    }
    v13 = -2003304447;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2003304447,
      0x103u);
  }
LABEL_37:
  VisualCollection::RemoveAll((struct CVisual *)((char *)v30 + 32));
  while ( *(_DWORD *)(a1 + 48) > v6 )
  {
    CTransitionVisualController::_MoveWindowOffscreen(
      *(struct CTopLevelWindow **)(*(_QWORD *)(a1 + 24) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 48) - 1)),
      0);
    DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt(a1 + 24, (unsigned int)(*(_DWORD *)(a1 + 48) - 1));
  }
LABEL_6:
  if ( v11 )
    CBaseObject::Release(v11);
  return (unsigned int)v13;
}
