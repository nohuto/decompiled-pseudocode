/*
 * XREFs of ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180030A98
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002AA70 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025000 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?InsertAt@?$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z @ 0x18006820C (-InsertAt@-$DynArray@ULivePreviewVisual@@$0A@@@QEAAJAEBULivePreviewVisual@@I@Z.c)
 *     ?_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069D78 (-_IsEligibleForLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069F00 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x180069F38 (-_IsTrulyMaximized@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006ADD4 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 */

__int64 __fastcall CLivePreview::OnWindowShowHide(CLivePreview *this, struct CWindowData *a2, bool *a3, char a4)
{
  int v4; // r14d
  unsigned int v5; // ebx
  int v6; // r13d
  char v10; // r15
  CLivePreview *v11; // rcx
  CTopLevelWindow *v12; // r14
  bool IsTrulyMaximized; // r15
  int inserted; // eax
  struct CVisual *v15; // rax
  struct CVisual *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  struct CVisual *v20; // rdx
  CBaseObject *v21; // rcx
  struct CVisual *v22; // rdx
  CBaseObject *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char *v26; // r15
  __int64 v27; // r9
  char v28; // al
  unsigned int v29; // ecx
  char v30; // al
  struct CVisual *v31; // r14
  struct CVisual *v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rdx
  CTopLevelWindow *v35; // rbx
  CBaseObject *v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rcx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int64 v43; // r14
  __int64 v44; // rdx
  struct CVisual *v45; // rdx
  CBaseObject *v46; // rcx
  struct CVisual *v47; // rdx
  CBaseObject *v48; // rcx
  CTopLevelWindow *v49; // rcx
  unsigned int v50; // eax
  int v51; // r9d
  __int64 v52; // r9
  __int64 v53; // rax
  __int128 v54; // xmm1
  __int64 v55; // rcx
  __int64 v56; // xmm0_8
  int v57; // r15d
  __int64 v58; // r13
  unsigned int v59; // eax
  __int64 v60; // r9
  unsigned int v61; // edx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // [rsp+20h] [rbp-E0h]
  char v65; // [rsp+30h] [rbp-D0h]
  char v66; // [rsp+31h] [rbp-CFh]
  struct CVisual *v67; // [rsp+38h] [rbp-C8h] BYREF
  struct CVisual *v68; // [rsp+40h] [rbp-C0h]
  bool *v69; // [rsp+48h] [rbp-B8h]
  struct CWindowData *v70; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v71; // [rsp+58h] [rbp-A8h]
  bool v72; // [rsp+68h] [rbp-98h]
  struct CVisual *v73; // [rsp+70h] [rbp-90h]
  WCHAR ClassName[264]; // [rsp+80h] [rbp-80h] BYREF

  v4 = *((_DWORD *)this + 86);
  v5 = 0;
  v6 = *((_DWORD *)this + 78);
  v69 = a3;
  if ( v4 <= 0 && v6 <= 0 )
    return v5;
  v10 = 0;
  v66 = 0;
  v65 = 0;
  if ( a4 || !CLivePreview::_IsEligibleForLivePreview(this, a2) )
  {
    v33 = (unsigned int)(v4 - 1);
    if ( (int)v33 >= 0 )
    {
      v34 = *((_QWORD *)this + 40);
      while ( *(struct CWindowData **)(v34 + 48 * v33 + 8) != a2 )
      {
        v33 = (unsigned int)(v33 - 1);
        if ( (int)v33 < 0 )
          goto LABEL_70;
      }
      v35 = *(CTopLevelWindow **)(v34 + 48 * v33);
      CTopLevelWindow::StopLivePreviewAnimation(v35);
      inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v35 + 3) + 32LL), v35);
      v5 = inserted;
      if ( inserted < 0 )
      {
        v64 = 1820;
        goto LABEL_106;
      }
      v36 = *(CBaseObject **)(*((_QWORD *)this + 40) + 48 * v33 + 16);
      if ( v36 )
      {
        CBaseObject::Release(v36);
        *(_QWORD *)(*((_QWORD *)this + 40) + 48 * v33 + 16) = 0LL;
      }
      v37 = *((_DWORD *)this + 86);
      if ( (unsigned int)v33 >= v37 )
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        v64 = 1823;
LABEL_89:
        v51 = -2147024809;
LABEL_107:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v51, v64);
        return v5;
      }
      v38 = *((_QWORD *)this + 40);
      if ( (unsigned int)v33 < v37 - 1 )
      {
        do
        {
          v39 = (unsigned int)v33;
          LODWORD(v33) = v33 + 1;
          v40 = 6 * v39;
          v41 = *(_OWORD *)(v38 + 48LL * (unsigned int)v33 + 16);
          *(_OWORD *)(v38 + 8 * v40) = *(_OWORD *)(v38 + 48LL * (unsigned int)v33);
          v42 = *(_OWORD *)(v38 + 48LL * (unsigned int)v33 + 32);
          *(_OWORD *)(v38 + 8 * v40 + 16) = v41;
          *(_OWORD *)(v38 + 8 * v40 + 32) = v42;
        }
        while ( (unsigned int)v33 < *((_DWORD *)this + 86) - 1 );
      }
      --*((_DWORD *)this + 86);
      v5 = 0;
    }
LABEL_70:
    v43 = (unsigned int)(v6 - 1);
    if ( (int)v43 >= 0 )
    {
      v44 = *((_QWORD *)this + 36);
      while ( *(struct CWindowData **)(v44 + 40 * v43) != a2 )
      {
        v43 = (unsigned int)(v43 - 1);
        if ( (int)v43 < 0 )
          goto LABEL_93;
      }
      v45 = *(struct CVisual **)(v44 + 40 * v43 + 8);
      if ( v45 )
      {
        inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v45 + 3) + 32LL), v45);
        v5 = inserted;
        if ( inserted < 0 )
        {
          v64 = 1835;
          goto LABEL_106;
        }
        v46 = *(CBaseObject **)(*((_QWORD *)this + 36) + 40 * v43 + 8);
        if ( v46 )
        {
          CBaseObject::Release(v46);
          *(_QWORD *)(*((_QWORD *)this + 36) + 40 * v43 + 8) = 0LL;
        }
      }
      v47 = *(struct CVisual **)(*((_QWORD *)this + 36) + 40 * v43 + 16);
      if ( v47 )
      {
        inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v47 + 3) + 32LL), v47);
        v5 = inserted;
        if ( inserted < 0 )
        {
          v64 = 1841;
          goto LABEL_106;
        }
        v48 = *(CBaseObject **)(*((_QWORD *)this + 36) + 40 * v43 + 16);
        if ( v48 )
        {
          CBaseObject::Release(v48);
          *(_QWORD *)(*((_QWORD *)this + 36) + 40 * v43 + 16) = 0LL;
        }
      }
      v49 = (CTopLevelWindow *)*((_QWORD *)a2 + 46);
      if ( v49 )
        CTopLevelWindow::StopLivePreviewAnimation(v49);
      v50 = *((_DWORD *)this + 78);
      if ( (unsigned int)v43 >= v50 )
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
        v64 = 1850;
        goto LABEL_89;
      }
      v52 = *((_QWORD *)this + 36);
      if ( (unsigned int)v43 < v50 - 1 )
      {
        do
        {
          v53 = (unsigned int)v43;
          LODWORD(v43) = v43 + 1;
          v54 = *(_OWORD *)(v52 + 40LL * (unsigned int)v43 + 16);
          v55 = 5 * v53;
          *(_OWORD *)(v52 + 8 * v55) = *(_OWORD *)(v52 + 40LL * (unsigned int)v43);
          v56 = *(_QWORD *)(v52 + 40LL * (unsigned int)v43 + 32);
          *(_OWORD *)(v52 + 8 * v55 + 16) = v54;
          *(_QWORD *)(v52 + 8 * v55 + 32) = v56;
        }
        while ( (unsigned int)v43 < *((_DWORD *)this + 78) - 1 );
      }
      --*((_DWORD *)this + 78);
      v5 = 0;
      v66 = 1;
    }
LABEL_93:
    v57 = *((_DWORD *)this + 102) - 1;
    if ( v57 >= 0 )
    {
      v58 = 16LL * v57;
      do
      {
        v68 = *(struct CVisual **)(v58 + *((_QWORD *)this + 48));
        if ( *((struct CWindowData **)v68 + 93) == a2 )
        {
          v59 = *((_DWORD *)this + 102);
          if ( v57 < v59 )
          {
            v60 = *((_QWORD *)this + 48);
            v61 = v57;
            if ( v57 < v59 - 1 )
            {
              do
              {
                v62 = 2LL * v61;
                v63 = 2LL * ++v61;
                *(_OWORD *)(v60 + 8 * v62) = *(_OWORD *)(v60 + 8 * v63);
              }
              while ( v61 < *((_DWORD *)this + 102) - 1 );
            }
            --*((_DWORD *)this + 102);
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
          }
          VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 61) + 32LL), v68);
        }
        v58 -= 16LL;
        --v57;
      }
      while ( v57 >= 0 );
    }
    goto LABEL_103;
  }
  if ( *((_BYTE *)this + 264)
    && !CLivePreview::_IsInLivePreview(this, a2)
    && (!GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) || _wcsicmp(ClassName, L"SysShadow")) )
  {
    v68 = (struct CVisual *)*((_QWORD *)a2 + 46);
    v12 = v68;
    IsTrulyMaximized = CLivePreview::_IsTrulyMaximized(v11, a2);
    inserted = CVisual::RenderRecursive(v68);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v64 = 1884;
LABEL_106:
      v51 = inserted;
      goto LABEL_107;
    }
    v15 = (struct CVisual *)MonitorFromWindow(*((HWND *)a2 + 5), 1u);
    v67 = v15;
    v16 = v15;
    if ( IsTrulyMaximized )
    {
      v17 = 0LL;
      if ( v6 > 0 )
      {
        v18 = *((_QWORD *)this + 36);
        while ( !*(_BYTE *)(v18 + 40 * v17 + 24) || *(struct CVisual **)(v18 + 40 * v17 + 32) != v15 )
        {
          v17 = (unsigned int)(v17 + 1);
          if ( (int)v17 >= v6 )
            goto LABEL_30;
        }
        v19 = 5 * v17;
        v20 = *(struct CVisual **)(v18 + 40 * v17 + 8);
        if ( v20 )
        {
          inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 62) + 32LL), v20);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1897;
            goto LABEL_106;
          }
          v21 = *(CBaseObject **)(*((_QWORD *)this + 36) + 8 * v19 + 8);
          if ( v21 )
          {
            CBaseObject::Release(v21);
            *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v19 + 8) = 0LL;
          }
        }
        v22 = *(struct CVisual **)(*((_QWORD *)this + 36) + 8 * v19 + 16);
        if ( v22 )
        {
          inserted = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 64) + 32LL), v22);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1903;
            goto LABEL_106;
          }
          v23 = *(CBaseObject **)(*((_QWORD *)this + 36) + 8 * v19 + 16);
          if ( v23 )
          {
            CBaseObject::Release(v23);
            *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v19 + 16) = 0LL;
          }
        }
        v16 = v67;
        v24 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v19);
        *(_BYTE *)(v24 + 554) |= 0x80u;
        v25 = *(_QWORD *)(*((_QWORD *)this + 36) + 8 * v19);
        v12 = v68;
        *(_BYTE *)(v25 + 554) |= 0x40u;
      }
    }
LABEL_30:
    v72 = IsTrulyMaximized;
    v70 = a2;
    v26 = (char *)this + 288;
    v73 = v16;
    v71 = 0LL;
    inserted = DynArray<LivePreviewVisual,0>::InsertAt((char *)this + 288, &v70);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v64 = 1916;
      goto LABEL_106;
    }
    v65 = 1;
    if ( *((_DWORD *)this + 138) < 0x1Eu )
    {
      v28 = *((_BYTE *)a2 + 554) ^ (*((_BYTE *)a2 + 554) ^ ((*((_QWORD *)a2 + 42) != 0LL) << 6)) & 0x40;
      *((_BYTE *)a2 + 554) = v28;
      v29 = *((_DWORD *)this + 139);
      if ( v29 >= 0xA )
        *((_BYTE *)a2 + 554) = v28 | 0x80;
      else
        *((_DWORD *)this + 139) = v29 + 1;
      v30 = *((_BYTE *)a2 + 554);
      if ( (v30 & 0x40) == 0 || v30 >= 0 )
      {
        if ( v30 >= 0 )
        {
          v67 = 0LL;
          inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v12, 0, 1, v27, &v67);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1938;
            goto LABEL_106;
          }
          v31 = v67;
          inserted = CVisual::RenderRecursive(v67);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1939;
            goto LABEL_106;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 62) + 32LL),
                       v31,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1940;
            goto LABEL_106;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 8LL) = v31;
        }
        if ( (*((_BYTE *)a2 + 554) & 0x40) == 0 )
        {
          v67 = 0LL;
          inserted = CTopLevelWindow::CloneVisualTreeForLivePreview(v68, 1, 0, v27, &v67);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1948;
            goto LABEL_106;
          }
          v32 = v67;
          inserted = CVisual::RenderRecursive(v67);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1949;
            goto LABEL_106;
          }
          inserted = VisualCollection::InsertRelative(
                       (VisualCollection *)(*((_QWORD *)this + 64) + 32LL),
                       v32,
                       0LL,
                       0,
                       1);
          v5 = inserted;
          if ( inserted < 0 )
          {
            v64 = 1950;
            goto LABEL_106;
          }
          *(_QWORD *)(*(_QWORD *)v26 + 16LL) = v32;
        }
        ++*((_DWORD *)this + 138);
      }
      goto LABEL_104;
    }
    *((_BYTE *)a2 + 554) |= 0xC0u;
LABEL_103:
    if ( !v66 )
    {
LABEL_108:
      v10 = v65;
      goto LABEL_109;
    }
LABEL_104:
    inserted = CLivePreview::_UpdateResources((LPARAM)this);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v64 = 1970;
      goto LABEL_106;
    }
    goto LABEL_108;
  }
LABEL_109:
  if ( v69 )
    *v69 = v10;
  return v5;
}
