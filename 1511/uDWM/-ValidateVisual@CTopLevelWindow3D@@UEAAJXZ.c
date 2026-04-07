/*
 * XREFs of ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800354E0
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Validate@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180016F68 (-Validate@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180021E88 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?SetIsVisible@CVisual@@QEAAJ_N@Z @ 0x180023D7C (-SetIsVisible@CVisual@@QEAAJ_N@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180033AB4 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180033D70 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180034A00 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180035160 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?EnsureResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800353F8 (-EnsureResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow3D::ValidateVisual(CTopLevelWindow3D *this, __int64 a2)
{
  __int64 v3; // rax
  char v4; // dl
  __int64 v5; // rsi
  unsigned int IsVisible; // eax
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // r12
  unsigned int v19; // r8d
  __int64 v20; // r9
  _DWORD *v21; // r9
  LONG v22; // edx
  LONG v23; // r8d
  LONG v24; // eax
  __int64 v25; // r12
  __int64 v26; // r13
  int v27; // r11d
  int v28; // r10d
  int v29; // ecx
  int v30; // r11d
  int v31; // r10d
  unsigned __int8 v32; // cl
  struct _RTL_GENERIC_TABLE *v33; // rcx
  char *v34; // rax
  _UNKNOWN **v35; // rdx
  _QWORD *i; // rax
  __int64 v37; // rcx
  int v38; // eax
  int started; // eax
  CSecondaryWindowRepresentation *v41; // rcx
  unsigned int v42; // [rsp+20h] [rbp-C8h]
  __int64 v43; // [rsp+38h] [rbp-B0h]
  __int64 v44; // [rsp+40h] [rbp-A8h]
  __int64 v45; // [rsp+48h] [rbp-A0h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-98h] BYREF
  __int128 v47; // [rsp+60h] [rbp-88h]
  __int128 v48; // [rsp+70h] [rbp-78h]
  __int64 v49; // [rsp+80h] [rbp-68h]
  char v50; // [rsp+88h] [rbp-60h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp-48h] BYREF

  if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 464) && CDesktopManager::UnregisterForGlobalTimeChangeNotification(this) )
    {
      if ( *((_QWORD *)this + 43) )
      {
        started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
        v8 = started;
        if ( started < 0 )
        {
          v42 = 521;
          goto LABEL_75;
        }
      }
      started = CTopLevelWindow3D::StartAnimation((__int64)this, 5u);
      v8 = started;
      if ( started < 0 )
      {
        v42 = 523;
        goto LABEL_75;
      }
      *((_BYTE *)this + 464) = 0;
    }
    v3 = *((_QWORD *)this + 43);
    if ( !v3 || *(_BYTE *)(v3 + 72) )
    {
      started = CTopLevelWindow3D::StopAnimation((unsigned __int64)this);
      v8 = started;
      if ( started < 0 )
      {
        v42 = 542;
LABEL_75:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, v42);
        return v8;
      }
    }
    else
    {
      v4 = 0;
      v5 = *(_QWORD *)(*((_QWORD *)this + 39) + 384LL);
      if ( *(char *)(v5 + 264) < 0 )
      {
        v4 = 1;
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v5 + 744) + 572LL) & 1) != 0 )
      {
        v4 = 0;
      }
      IsVisible = CVisual::SetIsVisible(*(CVisual **)(v5 + 280), v4);
      v7 = *(_QWORD *)(v5 + 744);
      v8 = IsVisible;
      v9 = 0LL;
      v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
      v44 = v10;
      if ( *(_DWORD *)(v10 + 568) )
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 8 * v9);
          v12 = *(_QWORD *)(v11 + 384);
          if ( v12 )
          {
            if ( *(_QWORD *)(v11 + 120) == *(_QWORD *)(v7 + 120) )
            {
              v13 = *(_QWORD *)(v12 + 288);
              if ( v13 )
              {
                v14 = *(_QWORD *)(v13 + 320);
                if ( v14 )
                {
                  v15 = *(_QWORD *)(v7 + 40);
                  v16 = *(_QWORD *)(v13 + 352);
                  if ( v15 == v16 )
                    goto LABEL_40;
                  v17 = *(_QWORD *)(v7 + 384);
                  v18 = *(_QWORD *)(v13 + 360);
                  v43 = v18;
                  if ( v17 )
                    break;
                }
              }
            }
          }
LABEL_42:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(_DWORD *)(v10 + 568) )
            goto LABEL_43;
        }
        v19 = *(_DWORD *)(v14 + 296);
        v20 = 0LL;
        if ( v19 )
        {
          while ( v15 != *(_QWORD *)(*(_QWORD *)(v14 + 272) + 8 * v20) )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= v19 )
              goto LABEL_16;
          }
        }
        else
        {
LABEL_16:
          rcDst = *(struct tagRECT *)(*(_QWORD *)(v17 + 744) + 48LL);
          if ( (*(_BYTE *)(v17 + 264) & 4) != 0 )
            v21 = (_DWORD *)(v17 + 660);
          else
            v21 = (_DWORD *)(v17 + 644);
          v22 = *v21 + rcDst.left;
          rcDst.left = v22;
          v23 = rcDst.right - v21[1];
          rcDst.right = v23;
          rcDst.top += v21[2];
          v24 = rcDst.bottom - v21[3];
          rcDst.bottom = v24;
          v45 = *(_QWORD *)(v17 + 344);
          if ( v45 )
          {
            v25 = *(_QWORD *)(v17 + 352);
            if ( v25 )
            {
              v26 = *(_QWORD *)(v17 + 368);
              if ( v26 )
              {
                v27 = *(_DWORD *)(v17 + 632) - v21[1];
                v28 = *(_DWORD *)(v17 + 640) - v21[3];
                v29 = *(_DWORD *)(v17 + 628) - *v21 - *(_DWORD *)(v45 + 24);
                if ( v29 < 0 )
                  v29 = 0;
                v30 = v27 - *(_DWORD *)(v25 + 24);
                if ( v30 < 0 )
                  v30 = 0;
                v31 = v28 - *(_DWORD *)(v26 + 28);
                if ( v31 < 0 )
                  v31 = 0;
                rcDst.left = v29 + v22;
                rcDst.bottom = v24 - v31;
                rcDst.right = v23 - v30;
              }
              v10 = v44;
            }
            v18 = v43;
          }
          v32 = *(_BYTE *)(v7 + 568);
          if ( (v32 & 1) == 0
            || ((unsigned __int8)~*(_BYTE *)(v7 + 572) & (unsigned __int8)~(v32 >> 2) & 1) == 0
            || (*(_DWORD *)(v7 + 100) & 0x20000000) != 0
            || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v13 + 568)) )
          {
            goto LABEL_42;
          }
          v33 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL);
          Buffer[1] = 0LL;
          v47 = 0LL;
          v49 = -1LL;
          v50 = 0;
          v48 = 0LL;
          Buffer[0] = v18;
          v34 = (char *)RtlLookupElementGenericTable(v33, Buffer);
          if ( v34 )
            v35 = (_UNKNOWN **)(v34 + 64);
          else
            v35 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
          for ( i = v35[1]; i != v35; i = (_QWORD *)i[1] )
          {
            v37 = i[5];
            if ( v37 == v16 )
              break;
            if ( v37 == *(_QWORD *)(v7 + 40) )
              goto LABEL_42;
          }
        }
LABEL_40:
        v38 = *(_DWORD *)(v13 + 80);
        if ( (v38 & 0x10000) == 0 )
        {
          *(_DWORD *)(v13 + 80) = v38 | 0x10000;
          CVisual::PropagateDirtyChildren((CVisual *)v13);
        }
        goto LABEL_42;
      }
LABEL_43:
      if ( (v8 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x214u);
        return v8;
      }
      started = CTopLevelWindow3D::EnsureResources(this);
      v8 = started;
      if ( started < 0 )
      {
        v42 = 534;
        goto LABEL_75;
      }
      started = CTopLevelWindow3D::UpdateAnimatedResources(this);
      v8 = started;
      if ( started < 0 )
      {
        v42 = 536;
        goto LABEL_75;
      }
      started = CTopLevelWindow3D::EnsureRenderData((CSecondaryWindowRepresentation **)this);
      v8 = started;
      if ( started < 0 )
      {
        v42 = 538;
        goto LABEL_75;
      }
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  started = CVisual::ValidateVisual(this, a2);
  v8 = started;
  if ( started < 0 )
  {
    v42 = 548;
    goto LABEL_75;
  }
  if ( *((char *)this + 80) < 0 )
  {
    v41 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 40);
    if ( v41 )
    {
      started = CSecondaryWindowRepresentation::Validate(v41);
      v8 = started;
      if ( started < 0 )
      {
        v42 = 555;
        goto LABEL_75;
      }
    }
    *((_DWORD *)this + 20) &= ~0x80u;
  }
  return v8;
}
