/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180027100
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18001E280 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x18001EA00 (-SetIsVisible@CVisual@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180025754 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800266B0 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180026E10 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180033F40 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  char v3; // dl
  __int64 v4; // rsi
  int IsVisible; // eax
  __int64 v6; // rsi
  __int64 v7; // r13
  int v8; // edi
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
  CVisual *v38; // r14
  void (__fastcall *v39)(CVisual *); // rbp
  int started; // eax
  CSecondaryWindowRepresentation *v42; // rcx
  int v43; // eax
  int v44; // eax
  unsigned int v45; // [rsp+20h] [rbp-C8h]
  unsigned int v46; // [rsp+20h] [rbp-C8h]
  int v47; // [rsp+30h] [rbp-B8h]
  int v48; // [rsp+34h] [rbp-B4h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  __int64 v50; // [rsp+40h] [rbp-A8h]
  __int64 v51; // [rsp+48h] [rbp-A0h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v53; // [rsp+60h] [rbp-88h]
  __int128 v54; // [rsp+70h] [rbp-78h]
  __int64 v55; // [rsp+80h] [rbp-68h]
  char v56; // [rsp+88h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp-48h] BYREF

  if ( (*((_DWORD *)this + 20) & 0x1000) == 0 )
    goto LABEL_59;
  if ( *((_BYTE *)this + 464) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
  {
    if ( *((_QWORD *)this + 43) )
    {
      started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v8 = started;
      if ( started < 0 )
      {
        v46 = 602;
        goto LABEL_95;
      }
    }
    started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
    v8 = started;
    if ( started < 0 )
    {
      v46 = 604;
      goto LABEL_95;
    }
    *((_BYTE *)this + 464) = 0;
  }
  v2 = *((_QWORD *)this + 43);
  if ( v2 && !*(_BYTE *)(v2 + 72) )
  {
    v3 = 0;
    v4 = *(_QWORD *)(*((_QWORD *)this + 39) + 368LL);
    if ( *(char *)(v4 + 264) < 0 )
    {
      v3 = 1;
    }
    else if ( (*(_BYTE *)(*(_QWORD *)(v4 + 744) + 556LL) & 1) != 0 )
    {
      v3 = 0;
    }
    IsVisible = CVisual::SetIsVisible(*(CVisual **)(v4 + 280), v3);
    v6 = *(_QWORD *)(v4 + 744);
    v7 = 0LL;
    v8 = IsVisible;
    v48 = IsVisible;
    v47 = 0;
    v51 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
    if ( *(_DWORD *)(v51 + 568) )
    {
      v9 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
      while ( 1 )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v9 + 544) + 8 * v7);
        v11 = *(_QWORD *)(v10 + 368);
        if ( v11 )
        {
          if ( *(_QWORD *)(v10 + 120) == *(_QWORD *)(v6 + 120) )
          {
            v12 = *(_QWORD *)(v11 + 288);
            v49 = v12;
            if ( v12 )
            {
              v13 = *(_QWORD *)(v12 + 320);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v6 + 40);
                v15 = *(_QWORD *)(v12 + 352);
                if ( v14 == v15 )
                  goto LABEL_41;
                v16 = *(_QWORD *)(v6 + 368);
                v17 = *(_QWORD *)(v12 + 360);
                v50 = v17;
                if ( v16 )
                  break;
              }
            }
          }
        }
LABEL_48:
        v7 = (unsigned int)(v7 + 1);
        v47 = v7;
        if ( (unsigned int)v7 >= *(_DWORD *)(v9 + 568) )
        {
          v8 = v48;
          goto LABEL_50;
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
            goto LABEL_17;
        }
      }
      else
      {
LABEL_17:
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
              LODWORD(v7) = v47;
              rcDst.bottom = v23 - v29;
              rcDst.left = v30;
              rcDst.right = v22 - v28;
            }
            v17 = v50;
          }
          v12 = v49;
        }
        v31 = *(_BYTE *)(v6 + 552);
        if ( (v31 & 1) == 0
          || ((unsigned __int8)~*(_BYTE *)(v6 + 556) & (unsigned __int8)~(v31 >> 2) & 1) == 0
          || (*(_DWORD *)(v6 + 100) & 0x20000000) != 0
          || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v12 + 568)) )
        {
          goto LABEL_48;
        }
        v32 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL);
        Buffer[1] = 0LL;
        v53 = 0LL;
        v55 = -1LL;
        v56 = 0;
        v54 = 0LL;
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
          if ( v36 == *(_QWORD *)(v6 + 40) )
            goto LABEL_48;
        }
      }
LABEL_41:
      v37 = *(_DWORD *)(v12 + 80);
      if ( (v37 & 0x10000) == 0 )
      {
        *(_DWORD *)(v12 + 80) = v37 | 0x10000;
        v38 = *(CVisual **)(v12 + 24);
        if ( v38 )
        {
          do
          {
            if ( (*((_BYTE *)v38 + 80) & 1) != 0 )
              break;
            v39 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v38 + 32LL);
            if ( v39 == CVisual::SetDirtyChildren )
              CVisual::SetDirtyChildren(v38);
            else
              v39(v38);
            v38 = (CVisual *)*((_QWORD *)v38 + 3);
          }
          while ( v38 );
          v9 = v51;
        }
      }
      goto LABEL_48;
    }
LABEL_50:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x265u);
      return (unsigned int)v8;
    }
    v8 = 0;
    if ( !*((_QWORD *)this + 40) )
    {
      v44 = CSecondaryWindowRepresentation::Create(
              160LL,
              (char *)this + 264,
              *((_QWORD *)this + 39),
              0LL,
              100,
              (char *)this + 320);
      v8 = v44;
      if ( v44 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0x296u);
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x2AAu);
    }
    else
    {
      if ( *((_QWORD *)this + 42)
        || (v43 = CResource::Create(0x38u, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 42),
            v8 = v43,
            v43 >= 0) )
      {
        if ( *((_QWORD *)this + 41) )
          goto LABEL_55;
        v43 = CResource::Create(0x3Bu, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), (CBaseObject **)this + 41);
        v8 = v43;
        if ( v43 >= 0 )
          goto LABEL_55;
        v45 = 691;
      }
      else
      {
        v45 = 686;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v43, v45);
    }
LABEL_55:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x267u);
      return (unsigned int)v8;
    }
    started = CTopLevelWindow3D::UpdateAnimatedResources(this);
    v8 = started;
    if ( started < 0 )
    {
      v46 = 617;
      goto LABEL_95;
    }
    started = CTopLevelWindow3D::EnsureRenderData((CSecondaryWindowRepresentation **)this);
    v8 = started;
    if ( started < 0 )
    {
      v46 = 619;
      goto LABEL_95;
    }
    goto LABEL_58;
  }
  started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
  v8 = started;
  if ( started < 0 )
  {
    v46 = 623;
LABEL_95:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, v46);
    return (unsigned int)v8;
  }
LABEL_58:
  *((_DWORD *)this + 20) &= ~0x1000u;
LABEL_59:
  started = CVisual::ValidateVisual(this);
  v8 = started;
  if ( started < 0 )
  {
    v46 = 629;
    goto LABEL_95;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v42 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 40);
    if ( v42 )
    {
      started = CSecondaryWindowRepresentation::Validate(v42);
      v8 = started;
      if ( started < 0 )
      {
        v46 = 638;
        goto LABEL_95;
      }
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  return (unsigned int)v8;
}
