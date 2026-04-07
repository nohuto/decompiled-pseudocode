/*
 * XREFs of ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x1800223A0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180014780 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x1800158BC (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?SetBackgroundColor@CText@@QEAAXK@Z @ 0x18001B630 (-SetBackgroundColor@CText@@QEAAXK@Z.c)
 *     ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x18001E9EC (-NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z @ 0x180024120 (-ResyncTitleBackgroundColorForClonedWindow@CTopLevelWindow@@QEAAJK@Z.c)
 *     ?UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ @ 0x18002416C (-UpdateDCompVisuals@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024570 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateInputTransform@CTopLevelWindow@@AEAAJXZ @ 0x18002484C (-UpdateInputTransform@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180024944 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?UpdateIcon@CTopLevelWindow@@AEAAJXZ @ 0x180024A4C (-UpdateIcon@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x180024B30 (-UpdateTitle@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x180025F00 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800263EC (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800264F4 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026560 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180026C90 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180027DF8 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x180029970 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z @ 0x18003A5F0 (-GetCurrentStyle@CTopLevelWindow@@SAIPEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18003EA74 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 *     ceil_0 @ 0x18004FF06 (ceil_0.c)
 *     floor_0 @ 0x18004FF2A (floor_0.c)
 *     ?GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ @ 0x18007DB04 (-GetTransparentGradientColorForAccent@CTopLevelWindow@@AEBAKXZ.c)
 *     ?UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ @ 0x18007E2FC (-UpdateLivePreviewAnimation@CTopLevelWindow@@AEAAJXZ.c)
 *     ?NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z @ 0x18009A63C (-NotifyTlwTitleBackgroundChange@CDesktopThumbnailBase@@QEAAXPEBVCTopLevelWindow@@K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::ValidateVisual(CTopLevelWindow *this, __int64 a2)
{
  int v2; // eax
  bool v4; // cl
  char v5; // r14
  char v6; // r15
  bool v7; // r13
  bool v8; // r12
  bool v9; // di
  bool v10; // si
  _DWORD *v11; // rax
  unsigned int v12; // r13d
  char v13; // r15
  int v14; // edi
  int v15; // r11d
  int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  int v19; // r8d
  int v20; // ecx
  _DWORD *v21; // rdx
  int v22; // ecx
  int v23; // eax
  int v24; // edi
  int v25; // r8d
  int v26; // eax
  int v27; // r10d
  int v28; // r11d
  int v29; // ecx
  int v30; // r9d
  char v31; // r14
  int v32; // edi
  char v33; // r14
  bool v34; // r12
  unsigned int CurrentStyle; // eax
  float *v36; // rax
  __int64 v37; // rcx
  bool v38; // si
  bool v39; // al
  bool v40; // si
  bool v41; // al
  bool v42; // di
  bool v43; // si
  __int64 v44; // rdx
  int v45; // eax
  char v46; // r15
  char v47; // al
  __int64 v49; // r15
  int *v50; // r14
  float v51; // xmm1_4
  int v52; // eax
  int v53; // eax
  int v54; // eax
  bool v55; // r14
  __int64 v56; // rax
  int v57; // edi
  _DWORD *v58; // r9
  int v59; // r11d
  int v60; // edi
  int v61; // r8d
  int v62; // edx
  int v63; // ecx
  int v64; // r14d
  int v65; // eax
  int v66; // esi
  int v67; // edi
  __int64 v68; // rbx
  double v69; // xmm0_8
  double v70; // xmm0_8
  double v71; // xmm0_8
  double v72; // xmm0_8
  double v73; // xmm0_8
  double v74; // xmm0_8
  double v75; // xmm0_8
  double v76; // xmm0_8
  __int64 v77; // r8
  __int64 v78; // r8
  int v79; // eax
  int v80; // esi
  int updated; // eax
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // r13d
  CDesktopManager *v84; // r15
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 i; // r12
  __int64 v88; // rcx
  CTopLevelWindow *v89; // rcx
  __int64 v90; // rax
  bool v91; // al
  __int64 v92; // r10
  double v93; // xmm0_8
  double v94; // xmm0_8
  double v95; // xmm0_8
  double v96; // xmm0_8
  HRGN v97; // r15
  unsigned int v98; // [rsp+20h] [rbp-59h]
  char v99; // [rsp+30h] [rbp-49h]
  bool v100; // [rsp+31h] [rbp-48h]
  bool v101; // [rsp+32h] [rbp-47h]
  char v102; // [rsp+33h] [rbp-46h]
  char v103; // [rsp+34h] [rbp-45h]
  bool v104; // [rsp+35h] [rbp-44h]
  bool v105; // [rsp+36h] [rbp-43h]
  bool v106; // [rsp+37h] [rbp-42h]
  _BYTE v107[8]; // [rsp+48h] [rbp-31h] BYREF
  int v108; // [rsp+50h] [rbp-29h] BYREF
  RECT *p_rc1; // [rsp+58h] [rbp-21h]
  int v110; // [rsp+60h] [rbp-19h]
  RECT rc1; // [rsp+68h] [rbp-11h] BYREF

  v2 = *((_DWORD *)this + 20);
  v4 = (v2 & 2) != 0;
  v101 = v4;
  LOBYTE(a2) = (v2 & 8) != 0;
  v5 = 0;
  v99 = a2;
  v106 = (v2 & 0x4000) != 0;
  v6 = 0;
  v102 = 0;
  v103 = 0;
  v7 = (v2 & 0x100000) != 0;
  v105 = v7;
  v8 = (v2 & 0x200000) != 0;
  v9 = 0;
  v100 = v8;
  v10 = (v2 & 0x1000000) != 0;
  v104 = v10;
  if ( (*((_BYTE *)this + 264) & 8) == 0 )
  {
    if ( (v2 & 0x40000) != 0 )
    {
      CTopLevelWindow::UpdateWindowScale(this);
      *((_DWORD *)this + 20) &= ~0x40000u;
      v4 = v101;
      LOBYTE(a2) = v99;
      v103 = 1;
    }
    if ( (*((_DWORD *)this + 20) & 0x40E000) != 0 || v8 || v4 || (_BYTE)a2 || v10 || v7 )
    {
      v11 = (_DWORD *)*((_QWORD *)this + 93);
      v12 = 0;
      v13 = 0;
      v14 = v11[16];
      v15 = v11[18];
      v16 = v11[17];
      v17 = v11[19];
      if ( v14 != *((_DWORD *)this + 153) )
      {
        *((_DWORD *)this + 153) = v14;
        v13 = 1;
      }
      if ( v16 != *((_DWORD *)this + 154) )
      {
        *((_DWORD *)this + 154) = v16;
        v13 = 1;
      }
      if ( v15 != *((_DWORD *)this + 155) )
      {
        *((_DWORD *)this + 155) = v15;
        v13 = 1;
      }
      if ( v17 != *((_DWORD *)this + 156) )
      {
        *((_DWORD *)this + 156) = v17;
        v13 = 1;
      }
      v18 = v11[14] - v11[12];
      if ( v18 < 0 )
        v18 = 0;
      v19 = v18 - v16 - v14;
      v20 = v11[15] - v11[13];
      if ( v20 < 0 )
        v20 = 0;
      v21 = (_DWORD *)*((_QWORD *)this + 93);
      v22 = v20 - v17 - v15;
      v23 = v21[20];
      if ( v23 == 0x7FFFFFFF && v21[21] == 0x7FFFFFFF && v21[22] == 0x7FFFFFFF && v21[23] == 0x7FFFFFFF )
      {
        v24 = v19 / 2 + v14;
        v27 = (v19 + 1) / 2 + v16;
        v28 = v22 / 2 + v15;
        v30 = (v22 + 1) / 2 + v17;
      }
      else
      {
        if ( v19 < v23 )
          v23 = v19;
        v24 = v23 + v14;
        v25 = v19 - v23;
        if ( v25 >= v21[21] )
          v25 = v21[21];
        v26 = v21[22];
        v27 = v25 + v16;
        if ( v22 < v26 )
          v26 = v22;
        v28 = v26 + v15;
        v29 = v22 - v26;
        if ( v29 >= v21[23] )
          v29 = v21[23];
        v30 = v29 + v17;
      }
      v31 = 0;
      if ( v24 != *((_DWORD *)this + 157) )
      {
        *((_DWORD *)this + 157) = v24;
        v31 = 1;
      }
      if ( v27 != *((_DWORD *)this + 158) )
      {
        *((_DWORD *)this + 158) = v27;
        v31 = 1;
      }
      if ( v28 != *((_DWORD *)this + 159) )
      {
        *((_DWORD *)this + 159) = v28;
        v31 = 1;
      }
      if ( v30 != *((_DWORD *)this + 160) )
      {
        *((_DWORD *)this + 160) = v30;
        v31 = 1;
      }
      v32 = *((_DWORD *)this + 152);
      v33 = v13 | v31;
      v34 = (unsigned __int8)IsOpenThemeDataPresent() && (v32 & 6) != 0;
      v6 = 0;
      v102 = 0;
      CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((const struct CWindowData **)this + 93), 0);
      if ( CurrentStyle != *((_DWORD *)this + 152) )
      {
        v6 = 1;
        *((_DWORD *)this + 152) = CurrentStyle;
        v102 = 1;
      }
      if ( (int)CTopLevelWindow::UpdateColorizationColor(this) >= 0 )
      {
        v36 = (float *)*((_QWORD *)this + 75);
        if ( v36 )
        {
          v37 = *((_QWORD *)this + 93);
          if ( v37 )
          {
            if ( (*(_BYTE *)(v37 + 568) & 8) != 0
              && (*((_DWORD *)this + 157)
               || *((_DWORD *)this + 159)
               || *((_DWORD *)this + 158)
               || *((_DWORD *)this + 160))
              && (1.0 != *((float *)this + 184)
               || (float)(v36[8] * v36[4]) != *((float *)this + 181)
               || (float)(v36[8] * v36[5]) != *((float *)this + 182)
               || (float)(v36[8] * v36[6]) != *((float *)this + 183)) )
            {
              v6 = 1;
              v102 = 1;
            }
          }
        }
      }
      v38 = (((unsigned __int8)v32 ^ *((_BYTE *)this + 608)) & 0x20) != 0;
      v9 = (((unsigned __int8)v32 ^ *((_BYTE *)this + 608)) & 0x40) != 0;
      v39 = v6 && v34 != CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 152));
      v8 = v100;
      if ( v38 || v9 || v100 || v39 )
        v9 = 1;
      v40 = !*((_QWORD *)this + 62) && *(_DWORD *)(*((_QWORD *)this + 93) + 128LL);
      v5 = CTopLevelWindow::UpdateMarginsDependentOnStyle(this) | v33;
      if ( v104 || v5 || v6 || v9 || v40 )
      {
        updated = CTopLevelWindow::UpdateWindowVisuals(this);
        v12 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x114Cu);
      }
      if ( (v12 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x11FDu);
        return v12;
      }
      *((_DWORD *)this + 20) &= 0xFE9F1FFF;
    }
    if ( (*((_DWORD *)this + 20) & 0x4000000) != 0 )
    {
      v45 = CTopLevelWindow::UpdateClientAreaBounds(this);
      v12 = v45;
      if ( v45 < 0 )
      {
        v98 = 4612;
        goto LABEL_236;
      }
      *((_DWORD *)this + 20) &= ~0x4000000u;
    }
    if ( (*((_DWORD *)this + 20) & 0x2000000) == 0 )
    {
LABEL_66:
      v41 = v105 || v8;
      v42 = v41 || v9;
      if ( (*((_DWORD *)this + 20) & 0x10000) != 0 )
      {
        v45 = CTopLevelWindow::UpdateTitle((void ***)this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4630;
          goto LABEL_236;
        }
        *((_DWORD *)this + 20) &= ~0x10000u;
      }
      if ( (*((_DWORD *)this + 20) & 0x20000) != 0 )
      {
        v45 = CTopLevelWindow::UpdateIcon(this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4636;
          goto LABEL_236;
        }
        *((_DWORD *)this + 20) &= ~0x20000u;
      }
      v43 = v5 || v101;
      if ( (unsigned __int8)IsOpenThemeDataPresent()
        && ((*((_DWORD *)this + 20) & 0x1000) != 0 || v6 || v5 || v103 || v104) )
      {
        v45 = CTopLevelWindow::UpdateNCAreaPositionsAndSizes(this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4655;
          goto LABEL_236;
        }
        *((_DWORD *)this + 20) &= ~0x1000u;
      }
      if ( *((_QWORD *)this + 67) && v42 )
      {
        CurrentDefaultColorizationFlags = (_DWORD *)CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, v107);
        WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                    this,
                                    *CurrentDefaultColorizationFlags | 8u);
        CText::SetBackgroundColor(*((CText **)this + 67), WindowColorizationColor);
        v84 = CDesktopManager::s_pDesktopManagerInstance;
        v85 = 0LL;
        v86 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
        v44 = *(unsigned int *)(v86 + 344);
        if ( (_DWORD)v44 )
        {
          v92 = *(_QWORD *)(v86 + 320);
          while ( *(_QWORD *)(v92 + 48 * v85 + 8) != *((_QWORD *)this + 93) )
          {
            v85 = (unsigned int)(v85 + 1);
            if ( (unsigned int)v85 >= (unsigned int)v44 )
              goto LABEL_186;
          }
          CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(
            *(CTopLevelWindow **)(v92 + 48 * v85),
            WindowColorizationColor);
          v84 = CDesktopManager::s_pDesktopManagerInstance;
        }
LABEL_186:
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v84 + 408); i = (unsigned int)(i + 1) )
          CDesktopThumbnailBase::NotifyTlwTitleBackgroundChange(
            *(CDesktopThumbnailBase **)(*((_QWORD *)v84 + 201) + 8 * i),
            this,
            WindowColorizationColor);
        v88 = *(_QWORD *)(*((_QWORD *)this + 93) + 400LL);
        if ( v88 )
        {
          v89 = *(CTopLevelWindow **)(v88 + 24);
          if ( v89 )
            CTopLevelWindow::ResyncTitleBackgroundColorForClonedWindow(v89, WindowColorizationColor);
        }
      }
      v45 = CVisual::ValidateVisual(this, v44);
      v12 = v45;
      if ( v45 < 0 )
      {
        v98 = 4693;
        goto LABEL_236;
      }
      if ( v42 || v43 || v106 )
      {
        v45 = CTopLevelWindow::UpdateNCAreaBackground(this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4702;
          goto LABEL_236;
        }
        *((_DWORD *)this + 20) &= ~0x100000u;
      }
      if ( (*((_DWORD *)this + 20) & 0x80000) != 0 || v43 )
      {
        v45 = CTopLevelWindow::UpdateClientBlur(this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4709;
          goto LABEL_236;
        }
        *((_DWORD *)this + 20) &= ~0x80000u;
      }
      if ( v42 || v43 )
      {
        v45 = CTopLevelWindow::UpdateOcclusionHints(this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4716;
LABEL_236:
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v45, v98);
          return v12;
        }
      }
      if ( v103 )
      {
        v45 = CTopLevelWindow::UpdateInputTransform(this);
        v12 = v45;
        if ( v45 < 0 )
        {
          v98 = 4721;
          goto LABEL_236;
        }
      }
      if ( v5 )
        CWindowData::NotifySWROfMarginOrSizeChange(
          *((CWindowData **)this + 93),
          (*((_BYTE *)this + 264) & 0x20) == 0,
          (*((_BYTE *)this + 264) & 0x20) != 0);
      if ( !*((_QWORD *)this + 36) )
      {
        v46 = v99;
        goto LABEL_95;
      }
      v90 = *((_QWORD *)this + 93);
      v91 = (*(_BYTE *)(v90 + 156) & 2) == 0 && v42 && *(_DWORD *)(v90 + 152) == 2;
      v46 = v99;
      if ( v43 || v99 )
      {
        if ( !v91 )
          goto LABEL_205;
      }
      else if ( !v91 )
      {
        goto LABEL_195;
      }
      *(_DWORD *)(*((_QWORD *)this + 93) + 160LL) = CTopLevelWindow::GetTransparentGradientColorForAccent(this);
LABEL_205:
      v45 = CAccent::UpdateAccentPolicy(
              *((CAccent **)this + 36),
              (const struct tagRECT *)(*((_QWORD *)this + 93) + 48LL),
              (__m128i *)(*((_QWORD *)this + 93) + 152LL),
              *(struct CResource **)(*((_QWORD *)this + 93) + 352LL));
      v12 = v45;
      if ( v45 < 0 )
      {
        v98 = 4749;
        goto LABEL_236;
      }
LABEL_195:
      v45 = CAccent::ValidateVisual(*((CAccent **)this + 36));
      v12 = v45;
      if ( v45 < 0 )
      {
        v98 = 4751;
        goto LABEL_236;
      }
LABEL_95:
      v47 = *((_BYTE *)this + 264);
      if ( (v47 & 0x20) == 0 && (v5 || v46 || v101) )
      {
        v49 = *((_QWORD *)this + 93);
        if ( *(_QWORD *)(v49 + 40) )
        {
          rc1 = *(RECT *)(v49 + 188);
          if ( (v47 & 4) != 0 )
            v50 = (int *)((char *)this + 660);
          else
            v50 = (int *)((char *)this + 644);
          v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v49 + 172) - 0.0)) & _xmm);
          if ( v51 > 0.0000011920929 )
          {
            if ( *v50 < 0 )
            {
              v93 = floor_0((float)((float)*v50 / *(float *)(v49 + 172)) + 0.5);
              rc1.left += (int)v93;
            }
            v52 = v50[1];
            if ( v52 < 0 )
            {
              v94 = floor_0((float)((float)v52 / *(float *)(v49 + 172)) + 0.5);
              rc1.right -= (int)v94;
            }
          }
          if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v49 + 176) - 0.0)) & _xmm) > 0.0000011920929 )
          {
            v53 = v50[2];
            if ( v53 < 0 )
            {
              v95 = floor_0((float)((float)v53 / *(float *)(v49 + 176)) + 0.5);
              rc1.top += (int)v95;
            }
            v54 = v50[3];
            if ( v54 < 0 )
            {
              v96 = floor_0((float)((float)v54 / *(float *)(v49 + 176)) + 0.5);
              rc1.bottom -= (int)v96;
            }
          }
          v55 = EqualRect(&rc1, (const RECT *)(v49 + 188));
          if ( (*((_BYTE *)this + 264) & 2) == 0 )
          {
            if ( v55 )
            {
              v97 = 0LL;
              goto LABEL_240;
            }
LABEL_239:
            v97 = CreateRectRgnIndirect(&rc1);
LABEL_240:
            if ( !(unsigned int)SetWindowRgnEx(*(_QWORD *)(*((_QWORD *)this + 93) + 40LL), v97, 1LL) && v97 )
              DeleteObject(v97);
            *((_BYTE *)this + 264) &= ~2u;
            *((_BYTE *)this + 264) |= 2 * v55;
            goto LABEL_99;
          }
          if ( !v55 )
            goto LABEL_239;
        }
      }
LABEL_99:
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
      if ( v42 || v43 || v102 )
      {
        v56 = *((_QWORD *)this + 93);
        if ( v56 )
        {
          if ( *(_QWORD *)(v56 + 40) )
          {
            v57 = *((_DWORD *)this + 152);
            if ( (v57 & 0x40020) == 0 )
            {
              if ( (unsigned __int8)IsOpenThemeDataPresent() && (v57 & 6) != 0 )
              {
                if ( (*((_BYTE *)this + 264) & 4) != 0 )
                  v58 = (_DWORD *)((char *)this + 660);
                else
                  v58 = (_DWORD *)((char *)this + 644);
                v59 = v58[1];
                v60 = v58[3];
                v61 = *((_DWORD *)this + 157) - *v58 - *(_DWORD *)(*((_QWORD *)this + 43) + 24LL);
                if ( v61 < 0 )
                  v61 = 0;
                v62 = *((_DWORD *)this + 158) - v59 - *(_DWORD *)(*((_QWORD *)this + 44) + 24LL);
                if ( v62 < 0 )
                  v62 = 0;
                v63 = *((_DWORD *)this + 160) - v60 - *(_DWORD *)(*((_QWORD *)this + 46) + 28LL);
                if ( v63 < 0 )
                  v63 = 0;
                v64 = v58[2];
                v65 = *v58 + v61;
                v66 = v59 + v62;
                v67 = v63 + v60;
              }
              else
              {
                v67 = 0;
                v64 = 0;
                v66 = 0;
                v65 = 0;
              }
              v68 = *((_QWORD *)this + 93);
              *(_QWORD *)&rc1.left = 0LL;
              *(_QWORD *)&rc1.right = 0LL;
              v69 = (double)v65 / *(double *)(v68 + 288);
              if ( v69 < 0.0 )
                v70 = ceil_0(v69 - 0.5);
              else
                v70 = floor_0(v69 + 0.5);
              rc1.left = (int)v70;
              v71 = (double)v66 / *(double *)(v68 + 288);
              if ( v71 < 0.0 )
                v72 = ceil_0(v71 - 0.5);
              else
                v72 = floor_0(v71 + 0.5);
              rc1.right = (int)v72;
              v73 = (double)v67 / *(double *)(v68 + 296);
              if ( v73 < 0.0 )
                v74 = ceil_0(v73 - 0.5);
              else
                v74 = floor_0(v73 + 0.5);
              rc1.bottom = (int)v74;
              v75 = (double)v64 / *(double *)(v68 + 296);
              if ( v75 < 0.0 )
                v76 = ceil_0(v75 - 0.5);
              else
                v76 = floor_0(v75 + 0.5);
              v108 = 8;
              v110 = 16;
              rc1.top = (int)v76;
              p_rc1 = &rc1;
              SetWindowCompositionAttribute(*(_QWORD *)(v68 + 40), &v108);
            }
          }
        }
      }
      return v12;
    }
    v77 = *((_QWORD *)this + 62);
    rc1.left = 81;
    *(_QWORD *)&rc1.top = 0LL;
    if ( v77 )
    {
      rc1.right = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 93) + 368LL) + 24LL);
      v78 = *(_QWORD *)(v77 + 16);
      rc1.top = *(_DWORD *)(v78 + 24);
      v79 = MilResource_SendCommand(&rc1, 0xCu, *(struct MIL_CHANNEL__ **)(v78 + 16));
      v12 = v79;
      if ( v79 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v79, 0x86u);
      v80 = v12;
      if ( (v12 & 0x80000000) == 0 )
      {
        *((_DWORD *)this + 20) &= ~0x2000000u;
        goto LABEL_66;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x15B7u);
    }
    else
    {
      v80 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x15B0u);
      v12 = -2147024882;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v80, 0x120Bu);
    return v12;
  }
  v45 = CVisual::ValidateVisual(this, a2);
  v12 = v45;
  if ( v45 < 0 )
  {
    v98 = 4575;
    goto LABEL_236;
  }
  if ( (*((_DWORD *)this + 20) & 0x800000) != 0 )
  {
    CTopLevelWindow::UpdateLivePreviewAnimation(this);
    *((_DWORD *)this + 20) &= ~0x800000u;
  }
  return v12;
}
