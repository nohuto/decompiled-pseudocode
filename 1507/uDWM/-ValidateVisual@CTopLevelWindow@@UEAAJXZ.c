/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x180005D10 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180008450 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x1800167A0 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x1800168F4 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180017A70 (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x18001EB50 (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001F120 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateInputTransform@CTopLevelWindow@@AEAAJXZ @ 0x18001F3FC (-UpdateInputTransform@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x18001F4F4 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x18001F5D4 (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180020970 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020E54 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180020F10 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180021314 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800213C0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180022530 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180025274 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180035BE0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180036C2C (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180048B60 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x180049866 (ceil_0.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x180075AC8 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x1800763E4 (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180099B24 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this)
{
  int v1; // eax
  bool v3; // r13
  char v4; // si
  char v5; // r15
  bool v6; // r12
  bool v7; // di
  bool v8; // r14
  _DWORD *v9; // rax
  int v10; // r13d
  char v11; // r14
  int v12; // edi
  int v13; // r11d
  int v14; // r10d
  int v15; // r9d
  int v16; // r8d
  int v17; // r8d
  int v18; // ecx
  _DWORD *v19; // rdx
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v23; // r8d
  int v24; // eax
  int v25; // r10d
  int v26; // r11d
  int v27; // ecx
  int v28; // r9d
  char v29; // si
  int v30; // edi
  char v31; // si
  bool v32; // r12
  int CurrentStyle; // eax
  bool v34; // r14
  bool v35; // al
  bool v36; // r14
  bool v37; // al
  bool v38; // di
  bool v39; // r14
  int v40; // eax
  bool v41; // r12
  char v42; // al
  int v44; // eax
  __int64 v45; // r13
  int *v46; // rsi
  float v47; // xmm1_4
  int v48; // eax
  int v49; // eax
  int v50; // eax
  bool v51; // si
  int v52; // eax
  __int64 v53; // rax
  int v54; // edi
  _DWORD *v55; // r9
  int v56; // r11d
  int v57; // edi
  int v58; // r8d
  int v59; // edx
  int v60; // ecx
  int v61; // r14d
  int v62; // eax
  int v63; // esi
  int v64; // edi
  __int64 v65; // rbx
  double v66; // xmm0_8
  double v67; // xmm0_8
  double v68; // xmm0_8
  double v69; // xmm0_8
  double v70; // xmm0_8
  double v71; // xmm0_8
  double v72; // xmm0_8
  double v73; // xmm0_8
  int v74; // eax
  int v75; // eax
  __int64 v76; // r8
  __int64 v77; // r8
  int v78; // eax
  int v79; // r14d
  int updated; // eax
  void **v81; // rcx
  int v82; // eax
  unsigned int WindowColorizationColor; // r12d
  CDesktopManager *v84; // r13
  __int64 v85; // r8
  __int64 v86; // rcx
  unsigned int v87; // edx
  __int64 v88; // rcx
  CTopLevelWindow *v89; // rcx
  __int64 v90; // rax
  bool v91; // al
  int v92; // eax
  int v93; // eax
  __int64 v94; // r10
  unsigned int v95; // r14d
  int Index; // eax
  __int64 v97; // rcx
  double v98; // xmm0_8
  double v99; // xmm0_8
  double v100; // xmm0_8
  double v101; // xmm0_8
  HRGN v102; // r12
  unsigned int v103; // [rsp+20h] [rbp-59h]
  bool v104; // [rsp+30h] [rbp-49h]
  bool v105; // [rsp+30h] [rbp-49h]
  bool v106; // [rsp+31h] [rbp-48h]
  bool v107; // [rsp+32h] [rbp-47h]
  unsigned int v108; // [rsp+34h] [rbp-45h]
  bool v109; // [rsp+38h] [rbp-41h]
  char v110; // [rsp+39h] [rbp-40h]
  bool v111; // [rsp+3Ah] [rbp-3Fh]
  bool v112; // [rsp+3Bh] [rbp-3Eh]
  int v113; // [rsp+50h] [rbp-29h] BYREF
  RECT *p_rc1; // [rsp+58h] [rbp-21h]
  int v115; // [rsp+60h] [rbp-19h]
  RECT rc1; // [rsp+68h] [rbp-11h] BYREF

  v1 = *((_DWORD *)this + 20);
  v3 = (v1 & 2) != 0;
  v109 = v3;
  v106 = (v1 & 8) != 0;
  v4 = 0;
  v112 = (v1 & 0x4000) != 0;
  v5 = 0;
  v110 = 0;
  v104 = (v1 & 0x100000) != 0;
  v6 = (v1 & 0x200000) != 0;
  v7 = 0;
  v107 = v6;
  v8 = (v1 & 0x1000000) != 0;
  v111 = v8;
  if ( (*((_BYTE *)this + 264) & 8) == 0 )
  {
    if ( (v1 & 0x40000) != 0 )
    {
      CTopLevelWindow::UpdateWindowScale(this);
      *((_DWORD *)this + 20) &= ~0x40000u;
      v110 = 1;
    }
    if ( (*((_DWORD *)this + 20) & 0x40E000) != 0 || v6 || v3 || v106 || v8 )
    {
      v9 = (_DWORD *)*((_QWORD *)this + 93);
      v10 = 0;
      v11 = 0;
      v12 = v9[16];
      v13 = v9[18];
      v14 = v9[17];
      v15 = v9[19];
      if ( v12 != *((_DWORD *)this + 153) )
      {
        *((_DWORD *)this + 153) = v12;
        v11 = 1;
      }
      if ( v14 != *((_DWORD *)this + 154) )
      {
        *((_DWORD *)this + 154) = v14;
        v11 = 1;
      }
      if ( v13 != *((_DWORD *)this + 155) )
      {
        *((_DWORD *)this + 155) = v13;
        v11 = 1;
      }
      if ( v15 != *((_DWORD *)this + 156) )
      {
        *((_DWORD *)this + 156) = v15;
        v11 = 1;
      }
      v16 = v9[14] - v9[12];
      if ( v16 < 0 )
        v16 = 0;
      v17 = v16 - v14 - v12;
      v18 = v9[15] - v9[13];
      if ( v18 < 0 )
        v18 = 0;
      v19 = (_DWORD *)*((_QWORD *)this + 93);
      v20 = v18 - v15 - v13;
      v21 = v19[20];
      if ( v21 == 0x7FFFFFFF && v19[21] == 0x7FFFFFFF && v19[22] == 0x7FFFFFFF && v19[23] == 0x7FFFFFFF )
      {
        v22 = v17 / 2 + v12;
        v25 = (v17 + 1) / 2 + v14;
        v26 = v20 / 2 + v13;
        v28 = (v20 + 1) / 2 + v15;
      }
      else
      {
        if ( v17 < v21 )
          v21 = v17;
        v22 = v21 + v12;
        v23 = v17 - v21;
        if ( v23 >= v19[21] )
          v23 = v19[21];
        v24 = v19[22];
        v25 = v23 + v14;
        if ( v20 < v24 )
          v24 = v20;
        v26 = v24 + v13;
        v27 = v20 - v24;
        if ( v27 >= v19[23] )
          v27 = v19[23];
        v28 = v27 + v15;
      }
      v29 = 0;
      if ( v22 != *((_DWORD *)this + 157) )
      {
        *((_DWORD *)this + 157) = v22;
        v29 = 1;
      }
      if ( v25 != *((_DWORD *)this + 158) )
      {
        *((_DWORD *)this + 158) = v25;
        v29 = 1;
      }
      if ( v26 != *((_DWORD *)this + 159) )
      {
        *((_DWORD *)this + 159) = v26;
        v29 = 1;
      }
      if ( v28 != *((_DWORD *)this + 160) )
      {
        *((_DWORD *)this + 160) = v28;
        v29 = 1;
      }
      v30 = *((_DWORD *)this + 152);
      v31 = v11 | v29;
      v32 = (unsigned __int8)IsOpenThemeDataPresent() && (v30 & 6) != 0;
      v5 = 0;
      CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((const struct CWindowData **)this + 93));
      if ( CurrentStyle != *((_DWORD *)this + 152) )
      {
        *((_DWORD *)this + 152) = CurrentStyle;
        v5 = 1;
      }
      v34 = (((unsigned __int8)v30 ^ *((_BYTE *)this + 608)) & 0x20) != 0;
      v7 = (((unsigned __int8)v30 ^ *((_BYTE *)this + 608)) & 0x40) != 0;
      v35 = v5 && v32 != CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 152));
      v6 = v107;
      if ( v34 || v7 || v107 || v35 )
        v7 = 1;
      v36 = !*((_QWORD *)this + 62) && *(_DWORD *)(*((_QWORD *)this + 93) + 128LL);
      v4 = CTopLevelWindow::UpdateMarginsDependentOnStyle(this) | v31;
      if ( v111 || v4 || v5 || v7 || v36 )
      {
        updated = CTopLevelWindow::UpdateWindowVisuals(this);
        v10 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x10E7u);
      }
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1197u);
        return (unsigned int)v10;
      }
      *((_DWORD *)this + 20) &= 0xFE9F1FFF;
    }
    if ( (*((_DWORD *)this + 20) & 0x4000000) != 0 )
    {
      v44 = CTopLevelWindow::UpdateClientAreaBounds(this);
      v10 = v44;
      if ( v44 < 0 )
      {
        v103 = 4510;
        goto LABEL_231;
      }
      *((_DWORD *)this + 20) &= ~0x4000000u;
    }
    if ( (*((_DWORD *)this + 20) & 0x2000000) == 0 )
    {
LABEL_57:
      v37 = v104 || v6;
      v38 = v37 || v7;
      if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
      {
        v81 = (void **)*((_QWORD *)this + 67);
        v10 = 0;
        if ( v81 )
        {
          v93 = CText::SetText(v81, *(wchar_t **)(*((_QWORD *)this + 93) + 16LL));
          v10 = v93;
          if ( v93 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v93, 0x1391u);
        }
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x11B0u);
          return (unsigned int)v10;
        }
        *((_DWORD *)this + 20) &= ~0x10000u;
      }
      if ( (*((_DWORD *)this + 20) & 0x20000) != 0 )
      {
        v44 = CTopLevelWindow::UpdateIcon(this);
        v10 = v44;
        if ( v44 < 0 )
        {
          v103 = 4534;
          goto LABEL_231;
        }
        *((_DWORD *)this + 20) &= ~0x20000u;
      }
      v39 = v4 || v109;
      v105 = v39;
      if ( (unsigned __int8)IsOpenThemeDataPresent()
        && ((*((_DWORD *)this + 20) & 0x1000) != 0 || v5 || v4 || v110 || v111) )
      {
        v44 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
        v10 = v44;
        if ( v44 < 0 )
        {
          v103 = 4553;
          goto LABEL_231;
        }
        *((_DWORD *)this + 20) &= ~0x1000u;
      }
      if ( *((_QWORD *)this + 67) && v38 )
      {
        WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(this, 8LL);
        CText::SetBackgroundColor(*((CText **)this + 67), WindowColorizationColor);
        v84 = CDesktopManager::s_pDesktopManagerInstance;
        v85 = 0LL;
        v86 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
        v87 = *(_DWORD *)(v86 + 344);
        if ( v87 )
        {
          v94 = *(_QWORD *)(v86 + 320);
          while ( *(_QWORD *)(v94 + 48 * v85 + 8) != *((_QWORD *)this + 93) )
          {
            v85 = (unsigned int)(v85 + 1);
            if ( (unsigned int)v85 >= v87 )
              goto LABEL_173;
          }
          CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
            *(CTopLevelWindow **)(v94 + 48 * v85),
            WindowColorizationColor);
          v84 = CDesktopManager::s_pDesktopManagerInstance;
        }
LABEL_173:
        if ( *((_DWORD *)v84 + 408) )
        {
          v95 = 0;
          do
          {
            Index = CDesktopThumbnailBase::_GetIndex(
                      *(CDesktopThumbnailBase **)(*((_QWORD *)v84 + 201) + 8LL * v95),
                      this);
            if ( Index >= 0 )
              CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
                *(CTopLevelWindow **)(*(_QWORD *)(v97 + 264) + 16LL * (unsigned int)Index + 8),
                WindowColorizationColor);
            ++v95;
          }
          while ( v95 < *((_DWORD *)v84 + 408) );
          v39 = v105;
        }
        v88 = *(_QWORD *)(*((_QWORD *)this + 93) + 384LL);
        if ( v88 )
        {
          v89 = *(CTopLevelWindow **)(v88 + 24);
          if ( v89 )
            CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v89, WindowColorizationColor);
        }
      }
      v40 = CVisual::ValidateVisual(this);
      v108 = v40;
      if ( v40 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v40, 0x11EFu);
        return v108;
      }
      if ( v38 || v39 || v112 )
      {
        v52 = CTopLevelWindow::UpdateNCAreaBackground(this);
        v108 = v52;
        if ( v52 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v52, 0x11F8u);
          return v108;
        }
        *((_DWORD *)this + 20) &= ~0x100000u;
      }
      if ( (*((_DWORD *)this + 20) & 0x80000) != 0 || v39 )
      {
        v75 = CTopLevelWindow::UpdateClientBlur(this);
        v108 = v75;
        if ( v75 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v75, 0x11FFu);
          return v108;
        }
        *((_DWORD *)this + 20) &= ~0x80000u;
      }
      if ( v38 || v39 )
      {
        v74 = CTopLevelWindow::UpdateOcclusionHints(this);
        v108 = v74;
        if ( v74 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v74, 0x1206u);
          return v108;
        }
      }
      if ( v110 )
      {
        v82 = CTopLevelWindow::UpdateInputTransform(this);
        v108 = v82;
        if ( v82 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v82, 0x120Bu);
          return v108;
        }
      }
      if ( v4 )
        CWindowData::NotifySWROfMarginOrSizeChange(
          *((CWindowData **)this + 93),
          (*((_BYTE *)this + 264) & 0x20) == 0,
          (*((_BYTE *)this + 264) & 0x20) != 0);
      if ( !*((_QWORD *)this + 36) )
      {
        v41 = v106;
        goto LABEL_86;
      }
      v90 = *((_QWORD *)this + 93);
      v91 = (*(_BYTE *)(v90 + 156) & 2) == 0 && v38 && *(_DWORD *)(v90 + 152) == 2;
      v41 = v106;
      if ( v39 || v106 )
      {
        if ( !v91 )
        {
LABEL_198:
          v44 = CAccent::UpdateAccentPolicy(
                  *((CAccent **)this + 36),
                  (const struct tagRECT *)(*((_QWORD *)this + 93) + 48LL),
                  (const struct ACCENT_POLICY *)(*((_QWORD *)this + 93) + 152LL),
                  *(struct CResource **)(*((_QWORD *)this + 93) + 336LL));
          v10 = v44;
          if ( v44 >= 0 )
          {
LABEL_184:
            v92 = CAccent::ValidateVisual(*((CAccent **)this + 36));
            v108 = v92;
            if ( v92 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v92, 0x1229u);
              return v108;
            }
LABEL_86:
            v42 = *((_BYTE *)this + 264);
            if ( (v42 & 0x20) == 0 && (v4 || v41 || v109) )
            {
              v45 = *((_QWORD *)this + 93);
              if ( *(_QWORD *)(v45 + 40) )
              {
                rc1 = *(RECT *)(v45 + 188);
                if ( (v42 & 4) != 0 )
                  v46 = (int *)((char *)this + 660);
                else
                  v46 = (int *)((char *)this + 644);
                v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v45 + 172) - 0.0)) & _xmm);
                if ( v47 > 0.0000011920929 )
                {
                  if ( *v46 < 0 )
                  {
                    v98 = floor_0((float)((float)*v46 / *(float *)(v45 + 172)) + 0.5);
                    rc1.left += (int)v98;
                  }
                  v48 = v46[1];
                  if ( v48 < 0 )
                  {
                    v99 = floor_0((float)((float)v48 / *(float *)(v45 + 172)) + 0.5);
                    rc1.right -= (int)v99;
                  }
                }
                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v45 + 176) - 0.0)) & _xmm) > 0.0000011920929 )
                {
                  v49 = v46[2];
                  if ( v49 < 0 )
                  {
                    v100 = floor_0((float)((float)v49 / *(float *)(v45 + 176)) + 0.5);
                    rc1.top += (int)v100;
                  }
                  v50 = v46[3];
                  if ( v50 < 0 )
                  {
                    v101 = floor_0((float)((float)v50 / *(float *)(v45 + 176)) + 0.5);
                    rc1.bottom -= (int)v101;
                  }
                }
                v51 = EqualRect(&rc1, (const RECT *)(v45 + 188));
                if ( (*((_BYTE *)this + 264) & 2) == 0 )
                {
                  if ( v51 )
                  {
                    v102 = 0LL;
                    goto LABEL_235;
                  }
LABEL_234:
                  v102 = CreateRectRgnIndirect(&rc1);
LABEL_235:
                  if ( !(unsigned int)SetWindowRgnEx(*(_QWORD *)(*((_QWORD *)this + 93) + 40LL), v102, 1LL) && v102 )
                    DeleteObject(v102);
                  *((_BYTE *)this + 264) &= ~2u;
                  *((_BYTE *)this + 264) |= 2 * v51;
                  goto LABEL_90;
                }
                if ( !v51 )
                  goto LABEL_234;
              }
            }
LABEL_90:
            if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
            {
              CTopLevelWindow::UpdateLivePreviewAnimation(this);
              *((_DWORD *)this + 20) &= ~0x800000u;
            }
            if ( (*((_DWORD *)this + 20) & 0x8000000) != 0 )
            {
              CTopLevelWindow::UpdateDCompVisuals(this);
              *((_DWORD *)this + 20) &= ~0x8000000u;
            }
            if ( v38 || v39 || v5 )
            {
              v53 = *((_QWORD *)this + 93);
              if ( v53 )
              {
                if ( *(_QWORD *)(v53 + 40) )
                {
                  v54 = *((_DWORD *)this + 152);
                  if ( (v54 & 0x40020) == 0 )
                  {
                    if ( (unsigned __int8)IsOpenThemeDataPresent() && (v54 & 6) != 0 )
                    {
                      if ( (*((_BYTE *)this + 264) & 4) != 0 )
                        v55 = (_DWORD *)((char *)this + 660);
                      else
                        v55 = (_DWORD *)((char *)this + 644);
                      v56 = v55[1];
                      v57 = v55[3];
                      v58 = *((_DWORD *)this + 157) - *v55 - *(_DWORD *)(*((_QWORD *)this + 43) + 24LL);
                      if ( v58 < 0 )
                        v58 = 0;
                      v59 = *((_DWORD *)this + 158) - v56 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
                      if ( v59 < 0 )
                        v59 = 0;
                      v60 = *((_DWORD *)this + 160) - v57 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
                      if ( v60 < 0 )
                        v60 = 0;
                      v61 = v55[2];
                      v62 = v58 + *v55;
                      v63 = v56 + v59;
                      v64 = v60 + v57;
                    }
                    else
                    {
                      v64 = 0;
                      v61 = 0;
                      v63 = 0;
                      v62 = 0;
                    }
                    v65 = *((_QWORD *)this + 93);
                    *(_QWORD *)&rc1.left = 0LL;
                    *(_QWORD *)&rc1.right = 0LL;
                    v66 = (double)v62 / *(double *)(v65 + 272);
                    if ( v66 < 0.0 )
                      v67 = ceil_0(v66 - 0.5);
                    else
                      v67 = floor_0(v66 + 0.5);
                    rc1.left = (int)v67;
                    v68 = (double)v63 / *(double *)(v65 + 272);
                    if ( v68 < 0.0 )
                      v69 = ceil_0(v68 - 0.5);
                    else
                      v69 = floor_0(v68 + 0.5);
                    rc1.right = (int)v69;
                    v70 = (double)v64 / *(double *)(v65 + 280);
                    if ( v70 < 0.0 )
                      v71 = ceil_0(v70 - 0.5);
                    else
                      v71 = floor_0(v70 + 0.5);
                    rc1.bottom = (int)v71;
                    v72 = (double)v61 / *(double *)(v65 + 280);
                    if ( v72 < 0.0 )
                      v73 = ceil_0(v72 - 0.5);
                    else
                      v73 = floor_0(v72 + 0.5);
                    v113 = 8;
                    v115 = 16;
                    rc1.top = (int)v73;
                    p_rc1 = &rc1;
                    SetWindowCompositionAttribute(*(_QWORD *)(v65 + 40), &v113);
                  }
                }
              }
            }
            return v108;
          }
          v103 = 4647;
LABEL_231:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, v103);
          return (unsigned int)v10;
        }
      }
      else if ( !v91 )
      {
        goto LABEL_184;
      }
      *(_DWORD *)(*((_QWORD *)this + 93) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
      goto LABEL_198;
    }
    v76 = *((_QWORD *)this + 62);
    rc1.left = 74;
    *(_QWORD *)&rc1.top = 0LL;
    if ( v76 )
    {
      rc1.right = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 93) + 352LL) + 24LL);
      v77 = *(_QWORD *)(v76 + 16);
      rc1.top = *(_DWORD *)(v77 + 24);
      v78 = MilResource_SendCommand(&rc1, 0xCu, *(struct MIL_CHANNEL__ **)(v77 + 16));
      v10 = v78;
      if ( v78 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v78, 0x86u);
      v79 = v10;
      if ( v10 >= 0 )
      {
        *((_DWORD *)this + 20) &= ~0x2000000u;
        goto LABEL_57;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x1551u);
    }
    else
    {
      v79 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x154Au);
      v10 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v79, 0x11A5u);
    return (unsigned int)v10;
  }
  v44 = CVisual::ValidateVisual(this);
  v10 = v44;
  if ( v44 < 0 )
  {
    v103 = 4474;
    goto LABEL_231;
  }
  if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
  {
    CTopLevelWindow::UpdateLivePreviewAnimation(this);
    *((_DWORD *)this + 20) &= ~0x800000u;
  }
  return (unsigned int)v10;
}
