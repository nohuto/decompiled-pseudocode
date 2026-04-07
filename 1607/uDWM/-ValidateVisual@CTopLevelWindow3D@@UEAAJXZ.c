/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029B30
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x180020BDC (-SetIsVisible@CVisual@@QEAAJ_N@Z.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180020D60 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x1800282A4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180029170 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002988C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180034740 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Show@CProjectionBorderVisual@@QEAAX_N@Z @ 0x18007D294 (-Show@CProjectionBorderVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  char v3; // bp
  __int64 v4; // rsi
  int IsVisible; // edi
  CProjectionBorderVisual *v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // r15
  unsigned int v18; // r8d
  __int64 v19; // r9
  _DWORD *v20; // rdx
  LONG v21; // r8d
  LONG v22; // r9d
  LONG v23; // eax
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // r15
  int v27; // r13d
  int v28; // r11d
  int v29; // r10d
  LONG v30; // r8d
  unsigned __int8 v31; // cl
  struct _RTL_GENERIC_TABLE *v32; // rcx
  char *v33; // rax
  _UNKNOWN **v34; // rdx
  _QWORD *i; // rax
  __int64 v36; // rcx
  int v37; // eax
  int started; // eax
  CSecondaryWindowRepresentation *v40; // rcx
  int v41; // eax
  int v42; // r9d
  bool v43; // dl
  struct CVisual *v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  unsigned int v47; // [rsp+20h] [rbp-C8h]
  unsigned int v48; // [rsp+20h] [rbp-C8h]
  int v49; // [rsp+30h] [rbp-B8h]
  __int64 v50; // [rsp+38h] [rbp-B0h]
  int v51; // [rsp+40h] [rbp-A8h]
  __int64 v52; // [rsp+48h] [rbp-A0h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v54; // [rsp+60h] [rbp-88h]
  __int128 v55; // [rsp+70h] [rbp-78h]
  __int64 v56; // [rsp+80h] [rbp-68h]
  char v57; // [rsp+88h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp-48h] BYREF

  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 464) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    {
      if ( *((_QWORD *)this + 43) )
      {
        started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
        IsVisible = started;
        if ( started < 0 )
        {
          v48 = 532;
          goto LABEL_77;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      IsVisible = started;
      if ( started < 0 )
      {
        v48 = 534;
        goto LABEL_77;
      }
      *((_BYTE *)this + 464) = 0;
    }
    v2 = *((_QWORD *)this + 43);
    if ( !v2 || *(_BYTE *)(v2 + 72) )
    {
      started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      IsVisible = started;
      if ( started < 0 )
      {
        v48 = 553;
LABEL_77:
        v42 = started;
LABEL_79:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v42, v48);
        return (unsigned int)IsVisible;
      }
      goto LABEL_56;
    }
    v3 = 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 39) + 384LL);
    if ( *(char *)(v4 + 264) < 0 )
    {
      v3 = 1;
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(v4 + 744) + 580LL) & 1) != 0 )
    {
      v3 = 0;
    }
    IsVisible = CVisual::SetIsVisible(*(CVisual **)(v4 + 280), v3);
    v51 = IsVisible;
    v6 = *(CProjectionBorderVisual **)(*(_QWORD *)(v4 + 744) + 400LL);
    if ( v6 )
    {
      v43 = v3 && (*(_BYTE *)(v4 + 265) & 1) == 0;
      CProjectionBorderVisual::Show(v6, v43);
      v44 = *(struct CVisual **)(*(_QWORD *)(v4 + 744) + 400LL);
      v45 = *((_QWORD *)v44 + 3);
      if ( v45 )
        VisualCollection::InsertRelative((VisualCollection *)(v45 + 32), v44, (struct CVisual *)v4, 1, 1);
    }
    v7 = 0LL;
    v8 = *(_QWORD *)(v4 + 744);
    v49 = 0;
    if ( *(_DWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 568LL) )
    {
      v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v9 + 544) + 8 * v7);
        v11 = *(_QWORD *)(v10 + 384);
        if ( v11 )
        {
          if ( *(_QWORD *)(v10 + 120) == *(_QWORD *)(v8 + 120) )
          {
            v12 = *(_QWORD *)(v11 + 288);
            v52 = v12;
            if ( v12 )
            {
              v13 = *(_QWORD *)(v12 + 320);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v8 + 40);
                v15 = *(_QWORD *)(v12 + 352);
                if ( v14 == v15 )
                  goto LABEL_44;
                v16 = *(_QWORD *)(v8 + 384);
                v17 = *(_QWORD *)(v12 + 360);
                v50 = v17;
                if ( v16 )
                  break;
              }
            }
          }
        }
LABEL_46:
        v7 = (unsigned int)(v7 + 1);
        v49 = v7;
        if ( (unsigned int)v7 >= *(_DWORD *)(v9 + 568) )
        {
          IsVisible = v51;
          goto LABEL_48;
        }
      }
      v18 = *(_DWORD *)(v13 + 296);
      v19 = 0LL;
      if ( v18 )
      {
        while ( v14 != *(_QWORD *)(*(_QWORD *)(v13 + 272) + 8 * v19) )
        {
          v19 = (unsigned int)(v19 + 1);
          if ( (unsigned int)v19 >= v18 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        rcDst = *(struct tagRECT *)(*(_QWORD *)(v16 + 744) + 48LL);
        if ( (*(_BYTE *)(v16 + 264) & 4) != 0 )
          v20 = (_DWORD *)(v16 + 660);
        else
          v20 = (_DWORD *)(v16 + 644);
        v21 = *v20 + rcDst.left;
        rcDst.left = v21;
        v22 = rcDst.right - v20[1];
        rcDst.right = v22;
        rcDst.top += v20[2];
        v23 = rcDst.bottom - v20[3];
        rcDst.bottom = v23;
        v24 = *(_QWORD *)(v16 + 344);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v16 + 352);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v16 + 368);
            if ( v26 )
            {
              v27 = *(_DWORD *)(v16 + 628) - *v20 - *(_DWORD *)(v24 + 24);
              if ( v27 < 0 )
                v27 = 0;
              v28 = *(_DWORD *)(v16 + 632) - v20[1] - *(_DWORD *)(v25 + 24);
              if ( v28 < 0 )
                v28 = 0;
              v29 = *(_DWORD *)(v16 + 640) - v20[3] - *(_DWORD *)(v26 + 28);
              if ( v29 < 0 )
                v29 = 0;
              v30 = v27 + v21;
              LODWORD(v7) = v49;
              rcDst.bottom = v23 - v29;
              rcDst.left = v30;
              rcDst.right = v22 - v28;
            }
            v17 = v50;
          }
          v12 = v52;
        }
        v31 = *(_BYTE *)(v8 + 576);
        if ( (v31 & 1) == 0
          || ((unsigned __int8)~*(_BYTE *)(v8 + 580) & (unsigned __int8)~(v31 >> 2) & 1) == 0
          || (*(_DWORD *)(v8 + 100) & 0x20000000) != 0
          || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v12 + 568)) )
        {
          goto LABEL_46;
        }
        v32 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 8LL);
        Buffer[1] = 0LL;
        v54 = 0LL;
        v56 = -1LL;
        v57 = 0;
        v55 = 0LL;
        Buffer[0] = v17;
        v33 = (char *)RtlLookupElementGenericTable(v32, Buffer);
        if ( v33 )
          v34 = (_UNKNOWN **)(v33 + 64);
        else
          v34 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
        for ( i = v34[1]; i != v34; i = (_QWORD *)i[1] )
        {
          v36 = i[5];
          if ( v36 == v15 )
            break;
          if ( v36 == *(_QWORD *)(v8 + 40) )
            goto LABEL_46;
        }
      }
LABEL_44:
      v37 = *(_DWORD *)(v12 + 80);
      if ( (v37 & 0x10000) == 0 )
      {
        *(_DWORD *)(v12 + 80) = v37 | 0x10000;
        CVisual::PropagateDirtyChildren((CVisual *)v12);
      }
      goto LABEL_46;
    }
LABEL_48:
    if ( IsVisible < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsVisible, 0x21Fu);
      return (unsigned int)IsVisible;
    }
    IsVisible = 0;
    if ( !*((_QWORD *)this + 40) )
    {
      v46 = CSecondaryWindowRepresentation::Create(
              160LL,
              (char *)this + 264,
              *((_QWORD *)this + 39),
              0LL,
              100,
              (char *)this + 320);
      IsVisible = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x24Du);
    }
    if ( IsVisible < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, IsVisible, 0x258u);
    }
    else
    {
      if ( *((_QWORD *)this + 42)
        || (v41 = CResource::Create(0x1Du, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)this + 42),
            IsVisible = v41,
            v41 >= 0) )
      {
        if ( *((_QWORD *)this + 41) )
          goto LABEL_53;
        v41 = CResource::Create(0x14u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (_QWORD *)this + 41);
        IsVisible = v41;
        if ( v41 >= 0 )
          goto LABEL_53;
        v47 = 609;
      }
      else
      {
        v47 = 604;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, v47);
    }
LABEL_53:
    if ( IsVisible < 0 )
    {
      v48 = 545;
      v42 = IsVisible;
      goto LABEL_79;
    }
    started = CTopLevelWindow3D::UpdateAnimatedResources(this);
    IsVisible = started;
    if ( started < 0 )
    {
      v48 = 547;
      goto LABEL_77;
    }
    started = CTopLevelWindow3D::EnsureRenderData((CSecondaryWindowRepresentation **)this);
    IsVisible = started;
    if ( started < 0 )
    {
      v48 = 549;
      goto LABEL_77;
    }
LABEL_56:
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  started = CVisual::ValidateVisual(this);
  IsVisible = started;
  if ( started < 0 )
  {
    v48 = 559;
    goto LABEL_77;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v40 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 40);
    if ( v40 )
    {
      started = CSecondaryWindowRepresentation::Validate(v40);
      IsVisible = started;
      if ( started < 0 )
      {
        v48 = 566;
        goto LABEL_77;
      }
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  return (unsigned int)IsVisible;
}
