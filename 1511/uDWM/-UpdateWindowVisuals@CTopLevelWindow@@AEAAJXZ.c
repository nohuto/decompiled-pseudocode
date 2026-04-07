/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x18001B5C8 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001B5FC (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18001B6DC (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x18001B784 (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180023E64 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800263EC (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800264F4 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180026540 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800287A4 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029888 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x18002A634 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002BD18 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18002BDC0 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002C378 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003A8B0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C630 (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x18003E8E0 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003ECC8 (-Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18004F1C0 (IsOpenThemeDataPresent.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180075784 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // edi
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // r15
  _BYTE *v6; // rdi
  bool v7; // r14
  char v8; // cl
  _BYTE *v9; // rdi
  char v10; // cl
  _QWORD *v11; // rcx
  CAtlasedImage **v12; // r15
  char v13; // al
  CAtlasedImage *v14; // r13
  unsigned int v15; // r12d
  __int64 v16; // r14
  __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // r12
  unsigned int v20; // edx
  unsigned int v21; // eax
  CAtlasedImage **i; // rcx
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  CAtlasedImage **v27; // rdx
  CAtlasedImage **v28; // r8
  int v29; // ebx
  __int64 v30; // rdi
  CAtlasedImage *v31; // rbx
  CBaseObject *v32; // rcx
  __int64 v33; // r14
  CAtlasedImage *v34; // r10
  __int64 v35; // rdi
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 j; // r9
  __int64 v39; // rdx
  CAtlasedImage *v40; // rdi
  CAtlasedImage *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rdi
  bool IsSheetOfGlass; // al
  __int64 v45; // r8
  __int64 v46; // r9
  CAtlasedImage *v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  CAtlasedImage *v93; // rdi
  CAtlasedImage *v94; // rcx
  CAtlasedImage *v95; // rcx
  CAtlasedImage *v96; // rcx
  CAtlasedImage *v97; // rcx
  CAtlasedImage *v98; // rcx
  CAtlasedImage *v99; // rcx
  CAtlasedImage *v100; // rcx
  CAtlasedImage *v101; // rcx
  CAtlasedImage *v102; // rcx
  CAtlasedImage *v103; // rcx
  CAtlasedImage *v104; // rcx
  CAtlasedImage *v105; // rcx
  CAtlasedImage *v106; // rcx
  CAtlasedImage *v107; // rcx
  CAtlasedImage *v108; // rcx
  struct CTopLevelWindow::WindowFrame *v109; // r13
  int updated; // eax
  int v111; // eax
  int inserted; // eax
  char v113; // r12
  struct CVisual *v114; // rdx
  __int64 v115; // rcx
  int v116; // eax
  __int64 v117; // rdi
  struct CVisual **v118; // r14
  int v119; // eax
  int v120; // eax
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // eax
  struct CVisual *v123; // r15
  unsigned int v124; // edi
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rcx
  unsigned int v128; // edx
  struct CVisual *v129; // rdi
  int v130; // edx
  __int64 v131; // rax
  struct CVisual *v132; // rdx
  int v133; // eax
  __int64 v134; // rdi
  int v135; // eax
  CAtlasedImage **v137; // [rsp+30h] [rbp-49h] BYREF
  CAtlasedImage *v138; // [rsp+38h] [rbp-41h] BYREF
  _QWORD *v139; // [rsp+40h] [rbp-39h]
  struct CTopLevelWindow::WindowFrame *v140; // [rsp+48h] [rbp-31h]
  int v141; // [rsp+50h] [rbp-29h]
  int v142; // [rsp+54h] [rbp-25h]
  int v143; // [rsp+58h] [rbp-21h]
  int v144; // [rsp+5Ch] [rbp-1Dh]
  int v145; // [rsp+60h] [rbp-19h]
  int v146; // [rsp+64h] [rbp-15h]
  int v147; // [rsp+68h] [rbp-11h]
  int v148; // [rsp+6Ch] [rbp-Dh]
  _DWORD v149[12]; // [rsp+70h] [rbp-9h] BYREF
  char v150; // [rsp+E8h] [rbp+6Fh]
  char v151; // [rsp+F0h] [rbp+77h]
  unsigned int v152; // [rsp+F8h] [rbp+7Fh]

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 152),
         0,
         (*(_BYTE *)(*((_QWORD *)this + 93) + 571LL) & 0x20) != 0);
  v4 = *((_DWORD *)this + 152);
  v5 = v3;
  v140 = v3;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() || (v150 = 1, (v4 & 6) == 0) )
    v150 = 0;
  v6 = (_BYTE *)*((_QWORD *)this + 35);
  v7 = (*((_DWORD *)this + 152) & 0x20000) != 0;
  v8 = v6[84];
  v151 = v7;
  if ( v7 != (v8 & 1) )
  {
    v6[84] = v8 ^ (v7 ^ v8) & 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 16LL);
  }
  v9 = (_BYTE *)*((_QWORD *)this + 70);
  v10 = v9[84];
  if ( v7 != (v10 & 1) )
  {
    v9[84] = v10 ^ (v7 ^ v10) & 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 16LL);
  }
  v11 = (_QWORD *)((char *)v5 + 1496);
  v152 = 0;
  v12 = (CAtlasedImage **)((char *)this + 320);
  v139 = v11;
  v13 = v150;
  v14 = 0LL;
  v15 = 0;
  do
  {
    if ( v13 )
    {
      if ( *v12 )
        goto LABEL_36;
      v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v17 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
              WPF::g_pProcessHeap,
              136LL);
      if ( !v17 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x95u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x79Bu);
        return v2;
      }
      *(_DWORD *)(v17 + 8) = 1;
      *(_QWORD *)v17 = &CAtlasedImage::`vftable';
      *(_QWORD *)(v17 + 72) = 0LL;
      v18 = 0;
      *(_QWORD *)(v17 + 88) = 0LL;
      *(_DWORD *)(v17 + 32) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 40) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 36) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 44) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 52) = 0x80000000;
      *(_DWORD *)(v17 + 48) = 0x80000000;
      *(_DWORD *)(v17 + 60) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 56) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 68) = -1;
      *(_DWORD *)(v17 + 132) = 22;
      *(_QWORD *)(v17 + 104) = v16;
      *v12 = (CAtlasedImage *)v17;
      *(_DWORD *)(v17 + 132) = v15;
      v19 = *((_QWORD *)this + 37);
      if ( v14 )
      {
        v20 = *(_DWORD *)(v19 + 288);
        v21 = 0;
        for ( i = *(CAtlasedImage ***)(v19 + 264); v21 < v20; ++i )
        {
          if ( v14 == *i )
            break;
          ++v21;
        }
        if ( v21 == v20 )
        {
          v29 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x5Au);
          v2 = -2147024809;
          goto LABEL_82;
        }
        v18 = v21 + 1;
      }
      v138 = *v12;
      if ( v18 <= *(_DWORD *)(v19 + 288) )
      {
        v137 = &v138;
        v23 = DynArrayImpl<0>::Grow((int)v19 + 264, 8, 1, 0, (__int64)&v137);
        v2 = v23;
        if ( v23 >= 0 )
        {
          ++*(_DWORD *)(v19 + 288);
          v24 = *(_QWORD *)(v19 + 264);
          v25 = (unsigned int)(*(_DWORD *)(v19 + 288) - 1);
          if ( (unsigned int)v25 > v18 )
          {
            v26 = v24 + 8 * v25;
            do
            {
              v25 = (unsigned int)(v25 - 1);
              v26 -= 8LL;
              *(_QWORD *)(v26 + 8) = *(_QWORD *)(v24 + 8 * v25);
            }
            while ( (unsigned int)v25 > v18 );
          }
          v27 = v137;
          v28 = (CAtlasedImage **)(v24 + 8LL * v18);
          if ( v137 >= v28 && (unsigned __int64)v137 < v24 + 8 * ((unsigned __int64)*(unsigned int *)(v19 + 288) - 1) )
            v27 = ++v137;
          *v28 = *v27;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x1CDu);
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v138 + 2);
          *((_QWORD *)v138 + 10) = v19;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 24LL))(v19, 0x2000LL);
          goto LABEL_33;
        }
      }
      else
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x73u);
LABEL_33:
      v29 = v2;
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x61u);
LABEL_82:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x7A2u);
        return v2;
      }
      v15 = v152;
      v11 = v139;
LABEL_36:
      if ( v140 )
      {
        v30 = *(v11 - 1);
        if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *v11 )
          v30 = *v11;
      }
      else
      {
        v30 = 0LL;
      }
      v31 = *v12;
      v32 = (CBaseObject *)*((_QWORD *)*v12 + 9);
      if ( v32 != (CBaseObject *)v30 )
      {
        if ( v32 )
          CBaseObject::Release(v32);
        *((_QWORD *)v31 + 9) = v30;
        if ( v30 )
          _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
        *((_DWORD *)v31 + 24) |= 1u;
        v33 = *((_QWORD *)v31 + 10);
        if ( v33 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 24LL))(v33, 0x2000LL);
      }
      if ( (v15 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16)) && v30 )
      {
        v41 = *v12;
        if ( *((_DWORD *)*v12 + 6) != *(_DWORD *)(v30 + 24) || *((_DWORD *)v41 + 7) != *(_DWORD *)(v30 + 28) )
        {
          v42 = *(_QWORD *)(v30 + 24);
          *((_DWORD *)v41 + 24) |= 1u;
          v43 = *((_QWORD *)v41 + 10);
          *((_QWORD *)v41 + 3) = v42;
          if ( v43 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 24LL))(v43, 0x2000LL);
        }
        v14 = *v12;
        goto LABEL_71;
      }
      v34 = *v12;
      v35 = *((_QWORD *)*v12 + 10);
      if ( v35 )
      {
        v36 = *(_DWORD *)(v35 + 288);
        v37 = 0LL;
        for ( j = *(_QWORD *)(v35 + 264); (unsigned int)v37 < v36; v37 = (unsigned int)(v37 + 1) )
        {
          if ( v34 == *(CAtlasedImage **)(j + 8 * v37) )
            break;
        }
        if ( (unsigned int)v37 < v36 )
        {
          if ( (unsigned int)v37 < v36 - 1 )
          {
            do
            {
              v39 = (unsigned int)v37;
              LODWORD(v37) = v37 + 1;
              *(_QWORD *)(j + 8 * v39) = *(_QWORD *)(j + 8LL * (unsigned int)v37);
            }
            while ( (unsigned int)v37 < *(_DWORD *)(v35 + 288) - 1 );
          }
          --*(_DWORD *)(v35 + 288);
        }
        *((_QWORD *)v34 + 10) = 0LL;
        CBaseObject::Release(v34);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 24LL))(v35, 0x2000LL);
      }
      v40 = *v12;
      if ( *v12 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v40 + 2) && v40 )
          (**(void (__fastcall ***)(CAtlasedImage *, __int64))v40)(v40, 1LL);
        goto LABEL_65;
      }
      goto LABEL_71;
    }
    if ( *v12 )
    {
      CAtlasedImage::DisconnectFromParent(*v12);
      v93 = *v12;
      if ( *v12 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v93 + 2) && v93 )
        {
          (**(void (__fastcall ***)(CAtlasedImage *, __int64))v93)(v93, 1LL);
          *v12 = 0LL;
          goto LABEL_71;
        }
LABEL_65:
        *v12 = 0LL;
      }
LABEL_71:
      v13 = v150;
    }
    ++v15;
    v11 = v139 + 2;
    v152 = v15;
    ++v12;
    v139 += 2;
  }
  while ( v15 < 0x16 );
  if ( v13 )
  {
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
    v47 = (CAtlasedImage *)*((_QWORD *)this + 40);
    if ( IsSheetOfGlass )
    {
      v148 = 10;
      CAtlasedImage::SetHiddenMargins(v47, 10LL, v45, v46);
      v48 = *((_QWORD *)this + 41);
      v149[2] = 8;
      CAtlasedImage::SetHiddenMargins(v48, 8LL, v49, v50);
      v51 = *((_QWORD *)this + 42);
      v149[4] = 9;
      CAtlasedImage::SetHiddenMargins(v51, 9LL, v52, v53);
      v54 = *((_QWORD *)this + 43);
      v149[6] = 2;
      CAtlasedImage::SetHiddenMargins(v54, 2LL, v55, v56);
      v57 = *((_QWORD *)this + 44);
      v149[8] = 1;
      CAtlasedImage::SetHiddenMargins(v57, 1LL, v58, v59);
      v60 = *((_QWORD *)this + 45);
      v149[1] = 6;
      CAtlasedImage::SetHiddenMargins(v60, 6LL, v61, v62);
      v63 = *((_QWORD *)this + 46);
      v144 = 4;
      CAtlasedImage::SetHiddenMargins(v63, 4LL, v64, v65);
      v66 = *((_QWORD *)this + 47);
      v149[5] = 5;
      CAtlasedImage::SetHiddenMargins(v66, 5LL, v67, v68);
      v69 = *((_QWORD *)this + 49);
      v146 = 10;
      CAtlasedImage::SetHiddenMargins(v69, 10LL, v70, v71);
      v72 = *((_QWORD *)this + 50);
      v149[3] = 8;
      CAtlasedImage::SetHiddenMargins(v72, 8LL, v73, v74);
      v75 = *((_QWORD *)this + 51);
      v141 = 9;
      CAtlasedImage::SetHiddenMargins(v75, 9LL, v76, v77);
      v78 = *((_QWORD *)this + 52);
      v149[7] = 2;
      CAtlasedImage::SetHiddenMargins(v78, 2LL, v79, v80);
      v81 = *((_QWORD *)this + 53);
      v142 = 1;
      CAtlasedImage::SetHiddenMargins(v81, 1LL, v82, v83);
      v84 = *((_QWORD *)this + 54);
      v143 = 6;
      CAtlasedImage::SetHiddenMargins(v84, 6LL, v85, v86);
      v87 = *((_QWORD *)this + 55);
      v145 = 4;
      CAtlasedImage::SetHiddenMargins(v87, 4LL, v88, v89);
      v90 = *((_QWORD *)this + 56);
      v147 = 5;
      CAtlasedImage::SetHiddenMargins(v90, 5LL, v91, v92);
    }
    else
    {
      if ( *((_DWORD *)v47 + 16) )
      {
        *((_DWORD *)v47 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v47, 1u, 0x2000u);
      }
      v94 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v94 + 16) )
      {
        *((_DWORD *)v94 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v94, 1u, 0x2000u);
      }
      v95 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v95 + 16) )
      {
        *((_DWORD *)v95 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v95, 1u, 0x2000u);
      }
      v96 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v96 + 16) )
      {
        *((_DWORD *)v96 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v96, 1u, 0x2000u);
      }
      v97 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v97 + 16) )
      {
        *((_DWORD *)v97 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v97, 1u, 0x2000u);
      }
      v98 = (CAtlasedImage *)*((_QWORD *)this + 45);
      if ( *((_DWORD *)v98 + 16) )
      {
        *((_DWORD *)v98 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v98, 1u, 0x2000u);
      }
      v99 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v99 + 16) )
      {
        *((_DWORD *)v99 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v99, 1u, 0x2000u);
      }
      v100 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v100 + 16) )
      {
        *((_DWORD *)v100 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v100, 1u, 0x2000u);
      }
      v101 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v101 + 16) )
      {
        *((_DWORD *)v101 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v101, 1u, 0x2000u);
      }
      v102 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v102 + 16) )
      {
        *((_DWORD *)v102 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v102, 1u, 0x2000u);
      }
      v103 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v103 + 16) )
      {
        *((_DWORD *)v103 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v103, 1u, 0x2000u);
      }
      v104 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v104 + 16) )
      {
        *((_DWORD *)v104 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v104, 1u, 0x2000u);
      }
      v105 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v105 + 16) )
      {
        *((_DWORD *)v105 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v105, 1u, 0x2000u);
      }
      v106 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( *((_DWORD *)v106 + 16) )
      {
        *((_DWORD *)v106 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v106, 1u, 0x2000u);
      }
      v107 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( *((_DWORD *)v107 + 16) )
      {
        *((_DWORD *)v107 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v107, 1u, 0x2000u);
      }
      v108 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( *((_DWORD *)v108 + 16) )
      {
        *((_DWORD *)v108 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v108, 1u, 0x2000u);
      }
    }
  }
  v109 = v140;
  updated = CTopLevelWindow::UpdateButtonVisuals(this, (struct CBitmapSource **)v140);
  v2 = updated;
  if ( updated >= 0 )
  {
    if ( (*((_DWORD *)this + 152) & 0x10080) != 0 )
    {
      if ( !*((_QWORD *)this + 68) )
      {
        v111 = CImage::Create(
                 *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
                 (struct CImage **)this + 68);
        v2 = v111;
        if ( v111 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v111, 0x7FBu);
          return v2;
        }
        inserted = VisualCollection::InsertRelative(
                     (VisualCollection *)(*((_QWORD *)this + 35) + 32LL),
                     *((struct CVisual **)this + 68),
                     *((struct CVisual **)this + 37),
                     1,
                     1);
        v2 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x7FCu);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 0x20000);
      }
      v113 = v151;
      *(_DWORD *)(*((_QWORD *)this + 68) + 184LL) = (*((unsigned __int8 *)this + 608) >> 7) | 2;
      CVisual::SetRTLMirror(*((CVisual **)this + 68), v151);
    }
    else
    {
      v114 = (struct CVisual *)*((_QWORD *)this + 68);
      if ( v114 )
      {
        v115 = *((_QWORD *)v114 + 3);
        if ( v115 )
        {
          v116 = VisualCollection::Remove((VisualCollection *)(v115 + 32), v114);
          v2 = v116;
          if ( v116 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v116, 0x80Bu);
            return v2;
          }
          CVisual::SetDirtyFlags(this, 4096);
        }
        v117 = *((_QWORD *)this + 68);
        if ( v117 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v117 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v117)(v117, 1LL);
          *((_QWORD *)this + 68) = 0LL;
        }
      }
      v113 = v151;
    }
    if ( (*((_BYTE *)this + 608) & 8) != 0 )
    {
      v118 = (struct CVisual **)((char *)this + 536);
      if ( !*((_QWORD *)this + 67) )
      {
        v119 = CText::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (struct CText **)this + 67);
        v2 = v119;
        if ( v119 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v119, 0x818u);
          return v2;
        }
        v120 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 37) + 32LL), *v118, 0LL, 1, 1);
        v2 = v120;
        if ( v120 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v120, 0x81Bu);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 0x10000);
      }
      CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, v149);
      WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                  (__int64)this,
                                  *(_BYTE *)CurrentDefaultColorizationFlags | 8u);
      v123 = *v118;
      v124 = WindowColorizationColor;
      v125 = WindowColorizationColor & 0xFFFFFF;
      if ( *((_DWORD *)*v118 + 99) != v125 )
      {
        v126 = *(_QWORD *)v123;
        *((_DWORD *)v123 + 99) = v125;
        (*(void (__fastcall **)(struct CVisual *, __int64))(v126 + 24))(v123, 4096LL);
      }
      if ( v109 )
      {
        if ( BYTE2(v124) + 5 * BYTE1(v124) + 2 * (unsigned __int8)v124 > 1024 == (unsigned __int8)BYTE2(*((_DWORD *)v109 + 460))
                                                                               + 5
                                                                               * (unsigned __int8)BYTE1(*((_DWORD *)v109 + 460))
                                                                               + 2
                                                                               * (unsigned __int8)*((_DWORD *)v109 + 460) > 1024 )
        {
          v127 = 291LL;
          if ( BYTE2(v124) + 5 * BYTE1(v124) + 2 * (unsigned __int8)v124 > 1024 )
            v127 = 316LL;
          CImmersiveColor::GetColor(v127);
        }
        if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
          v128 = BlendColors(v124, v128, 0.40000001);
        v129 = *v118;
        v130 = v128 & 0xFFFFFF;
        if ( v130 != *((_DWORD *)*v118 + 98) )
        {
          v131 = *(_QWORD *)v129;
          *((_DWORD *)v129 + 98) = v130;
          (*(void (__fastcall **)(struct CVisual *, __int64))(v131 + 24))(v129, 4096LL);
        }
      }
      CText::SetScalingFactor(*v118, *(double *)(*((_QWORD *)this + 93) + 288LL));
      CText::SetFont(*v118, (const struct tagLOGFONTW *)(*((_QWORD *)this + 93) + 684LL));
      CVisual::SetRTLMirror(*v118, v113);
      CText::SetRTLReading(*v118, (*((_DWORD *)this + 152) & 0x80000) != 0);
      CText::SetReverseAlignment(*v118, (*((_DWORD *)this + 152) & 0x800000) != 0);
    }
    else
    {
      v132 = (struct CVisual *)*((_QWORD *)this + 67);
      if ( v132 )
      {
        v133 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 37) + 32LL), v132);
        v2 = v133;
        if ( v133 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v133, 0x842u);
          return v2;
        }
        v134 = *((_QWORD *)this + 67);
        if ( v134 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v134 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v134)(v134, 1LL);
          *((_QWORD *)this + 67) = 0LL;
        }
      }
    }
    v135 = CTopLevelWindow::EnsureClientAreaNode(this);
    v2 = v135;
    if ( v135 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v135, 0x87Eu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x7F5u);
  }
  return v2;
}
