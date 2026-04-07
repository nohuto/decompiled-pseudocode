/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x1800108B8 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030BE0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800107F4 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18001717C (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180023690 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x1800302CC (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180035F88 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18007E100 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, char a3)
{
  CWindowList *v5; // r13
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  void (__fastcall *v11)(CVisual *, int); // rbx
  CDesktopThumbnailCVIVisual *v12; // rcx
  CButton *v13; // rcx
  volatile signed __int32 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 i; // rbx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rcx
  unsigned __int64 v26; // r14
  unsigned int v27; // r8d
  __int64 v28; // r9
  _DWORD *v29; // r9
  LONG v30; // edx
  LONG v31; // r8d
  LONG v32; // eax
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // r15
  int v36; // r13d
  int v37; // r11d
  int v38; // r10d
  LONG v39; // edx
  unsigned __int8 v40; // cl
  struct _RTL_GENERIC_TABLE *v41; // rcx
  char *v42; // rax
  _UNKNOWN **v43; // rdx
  _QWORD *j; // rax
  __int64 v45; // rcx
  int v46; // eax
  CVisual *v47; // rbx
  void (__fastcall *v48)(CVisual *); // rsi
  __int64 v49; // rcx
  CBaseObject *v50; // rcx
  int started; // eax
  int v52; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v53; // [rsp+38h] [rbp-61h]
  int v54; // [rsp+40h] [rbp-59h] BYREF
  CWindowList *v55; // [rsp+48h] [rbp-51h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v57; // [rsp+60h] [rbp-39h]
  __int128 v58; // [rsp+70h] [rbp-29h]
  __int64 v59; // [rsp+80h] [rbp-19h]
  char v60; // [rsp+88h] [rbp-11h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp+7h] BYREF

  v55 = this;
  v5 = this;
  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 188), &v54, &v52);
  OffsetRect((LPRECT)a2 + 3, v54 - *((_DWORD *)a2 + 12), v52 - *((_DWORD *)a2 + 13));
  v6 = *((_QWORD *)a2 + 48);
  if ( v6 )
  {
    v7 = (*(_BYTE *)(v6 + 265) & 1) == 0;
    v8 = *(_QWORD *)(v6 + 744);
    v9 = *(_DWORD *)(v8 + 48);
    v10 = *(_DWORD *)(v8 + 52);
    v53 = __PAIR64__(v10, v9);
    if ( !v7 )
    {
      v9 = -32000;
      v53 = 0xFFFF8300FFFF8300uLL;
      v10 = -32000;
    }
    if ( v9 != *(_DWORD *)(v6 + 104) || v10 != *(_DWORD *)(v6 + 108) )
    {
      *(_QWORD *)(v6 + 104) = v53;
      v11 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v11 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags((CVisual *)v6, 8);
      else
        v11((CVisual *)v6, 8);
    }
    v12 = *(CDesktopThumbnailCVIVisual **)(*(_QWORD *)(v6 + 744) + 560LL);
    if ( v12 )
      CDesktopThumbnailCVIVisual::SetDirtyFlags(v12, 0x1000u);
    v13 = *(CButton **)(v6 + 760);
    if ( v13 )
    {
      CButton::SetMouseCapture(v13, 0);
      v50 = *(CBaseObject **)(v6 + 760);
      if ( v50 )
      {
        CBaseObject::Release(v50);
        *(_QWORD *)(v6 + 760) = 0LL;
      }
    }
    v14 = *(volatile signed __int32 **)(v6 + 752);
    if ( v14 )
    {
      *(_QWORD *)(v6 + 752) = 0LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 96LL))(v14);
      v15 = *(_QWORD *)(v6 + 752);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v14)(v14, 1LL);
    }
  }
  v16 = *((_QWORD *)a2 + 49);
  if ( v16 )
  {
    if ( a3 && CTopLevelWindow3D::ShouldDelayTransition(*((CTopLevelWindow3D **)a2 + 49), 0) )
    {
      started = CTopLevelWindow3D::StartAnimation(v16, 9LL);
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x160u);
    }
    else if ( !*(_BYTE *)(v16 + 272) && !*(_DWORD *)(v16 + 356) )
    {
      *(_OWORD *)(v16 + 292) = *(_OWORD *)(*(_QWORD *)(v16 + 312) + 48LL);
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 110); i = (unsigned int)(i + 1) )
  {
    v49 = *(_QWORD *)(*((_QWORD *)a2 + 52) + 8 * i);
    if ( *(struct CWindowData **)(v49 + 64) == a2 && *(_DWORD *)(v49 + 72) == 1 )
      CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v49);
  }
  v18 = 0LL;
  v52 = 0;
  if ( *((_DWORD *)v5 + 142) )
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)v5 + 68) + 8 * v18);
      v20 = *(_QWORD *)(v19 + 384);
      if ( v20 )
      {
        if ( *(_QWORD *)(v19 + 120) == *((_QWORD *)a2 + 15) )
        {
          v21 = *(_QWORD *)(v20 + 288);
          if ( v21 )
          {
            v22 = *(_QWORD *)(v21 + 320);
            if ( v22 )
            {
              v23 = *((_QWORD *)a2 + 5);
              v24 = *(_QWORD *)(v21 + 352);
              if ( v23 == v24 )
                goto LABEL_55;
              v25 = *((_QWORD *)a2 + 48);
              v26 = *(_QWORD *)(v21 + 360);
              v53 = v26;
              if ( v25 )
                break;
            }
          }
        }
      }
LABEL_62:
      v18 = (unsigned int)(v18 + 1);
      v52 = v18;
      if ( (unsigned int)v18 >= *((_DWORD *)v5 + 142) )
        return;
    }
    v27 = *(_DWORD *)(v22 + 296);
    v28 = 0LL;
    if ( v27 )
    {
      while ( v23 != *(_QWORD *)(*(_QWORD *)(v22 + 272) + 8 * v28) )
      {
        v28 = (unsigned int)(v28 + 1);
        if ( (unsigned int)v28 >= v27 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      rcDst = *(struct tagRECT *)(*(_QWORD *)(v25 + 744) + 48LL);
      if ( (*(_BYTE *)(v25 + 264) & 4) != 0 )
        v29 = (_DWORD *)(v25 + 660);
      else
        v29 = (_DWORD *)(v25 + 644);
      v30 = *v29 + rcDst.left;
      rcDst.left = v30;
      v31 = rcDst.right - v29[1];
      rcDst.right = v31;
      rcDst.top += v29[2];
      v32 = rcDst.bottom - v29[3];
      rcDst.bottom = v32;
      v33 = *(_QWORD *)(v25 + 344);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v25 + 352);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v25 + 368);
          if ( v35 )
          {
            v36 = *(_DWORD *)(v25 + 628) - *v29 - *(_DWORD *)(v33 + 24);
            if ( v36 < 0 )
              v36 = 0;
            v37 = *(_DWORD *)(v25 + 632) - v29[1] - *(_DWORD *)(v34 + 24);
            if ( v37 < 0 )
              v37 = 0;
            v38 = *(_DWORD *)(v25 + 640) - v29[3] - *(_DWORD *)(v35 + 28);
            if ( v38 < 0 )
              v38 = 0;
            v39 = v36 + v30;
            v5 = v55;
            rcDst.bottom = v32 - v38;
            rcDst.left = v39;
            rcDst.right = v31 - v37;
          }
          LODWORD(v18) = v52;
        }
        v26 = v53;
      }
      v40 = *((_BYTE *)a2 + 568);
      if ( (v40 & 1) == 0
        || ((unsigned __int8)~*((_BYTE *)a2 + 572) & (unsigned __int8)~(v40 >> 2) & 1) == 0
        || (*((_DWORD *)a2 + 25) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v21 + 568)) )
      {
        goto LABEL_62;
      }
      v41 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL);
      Buffer[1] = 0LL;
      v57 = 0LL;
      v59 = -1LL;
      v60 = 0;
      v58 = 0LL;
      Buffer[0] = v26;
      v42 = (char *)RtlLookupElementGenericTable(v41, Buffer);
      if ( v42 )
        v43 = (_UNKNOWN **)(v42 + 64);
      else
        v43 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
      for ( j = v43[1]; j != v43; j = (_QWORD *)j[1] )
      {
        v45 = j[5];
        if ( v45 == v24 )
          break;
        if ( v45 == *((_QWORD *)a2 + 5) )
          goto LABEL_62;
      }
    }
LABEL_55:
    v46 = *(_DWORD *)(v21 + 80);
    if ( (v46 & 0x10000) == 0 )
    {
      v47 = *(CVisual **)(v21 + 24);
      *(_DWORD *)(v21 + 80) = v46 | 0x10000;
      if ( v47 )
      {
        do
        {
          if ( (*((_BYTE *)v47 + 80) & 1) != 0 )
            break;
          v48 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v47 + 32LL);
          if ( v48 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v47);
          else
            v48(v47);
          v47 = (CVisual *)*((_QWORD *)v47 + 3);
        }
        while ( v47 );
        v5 = v55;
      }
    }
    goto LABEL_62;
  }
}
