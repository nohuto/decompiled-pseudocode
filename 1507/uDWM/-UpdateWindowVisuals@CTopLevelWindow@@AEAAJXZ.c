/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023350
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001FD20 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x180006620 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x1800079D4 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800085D0 (-Create@CText@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x180016738 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x18001676C (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetColor@CText@@QEAAXK@Z @ 0x1800167F8 (-SetColor@CText@@QEAAXK@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x18001684C (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180020E54 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x180020EF0 (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180023058 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18002410C (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180024AFC (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800280C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180028D08 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180028DB0 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x180029368 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     IsOpenThemeDataPresent @ 0x180048B60 (IsOpenThemeDataPresent.c)
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
  CAtlasedImage *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rcx
  CAtlasedImage *v61; // rdi
  CAtlasedImage *v62; // rcx
  CAtlasedImage *v63; // rcx
  CAtlasedImage *v64; // rcx
  CAtlasedImage *v65; // rcx
  CAtlasedImage *v66; // rcx
  CAtlasedImage *v67; // rcx
  CAtlasedImage *v68; // rcx
  CAtlasedImage *v69; // rcx
  CAtlasedImage *v70; // rcx
  CAtlasedImage *v71; // rcx
  CAtlasedImage *v72; // rcx
  CAtlasedImage *v73; // rcx
  CAtlasedImage *v74; // rcx
  CAtlasedImage *v75; // rcx
  CAtlasedImage *v76; // rcx
  struct CTopLevelWindow::WindowFrame *v77; // r13
  int updated; // eax
  int v79; // eax
  int inserted; // eax
  bool v81; // r15
  _BYTE *v82; // rdi
  char v83; // cl
  struct CVisual *v84; // rdx
  __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // rdi
  struct CVisual **v88; // r14
  int v89; // eax
  int v90; // eax
  __int64 v91; // rcx
  int v92; // edx
  int WindowColorizationColor; // eax
  __int64 v94; // rax
  struct CVisual *v95; // rdi
  int v96; // eax
  struct CVisual *v97; // rdi
  double v98; // xmm1_8
  __int64 v99; // rax
  struct CVisual *v100; // rdi
  char v101; // cl
  struct CVisual *v102; // rdx
  int v103; // eax
  __int64 v104; // rdi
  int v105; // eax
  CAtlasedImage **v107; // [rsp+30h] [rbp-39h] BYREF
  CAtlasedImage *v108; // [rsp+38h] [rbp-31h] BYREF
  _QWORD *v109; // [rsp+40h] [rbp-29h]
  struct CTopLevelWindow::WindowFrame *v110; // [rsp+48h] [rbp-21h]
  int v111; // [rsp+50h] [rbp-19h]
  int v112; // [rsp+54h] [rbp-15h]
  int v113; // [rsp+58h] [rbp-11h]
  int v114; // [rsp+5Ch] [rbp-Dh]
  int v115; // [rsp+60h] [rbp-9h]
  int v116; // [rsp+64h] [rbp-5h]
  int v117; // [rsp+68h] [rbp-1h]
  int v118; // [rsp+6Ch] [rbp+3h]
  int v119; // [rsp+70h] [rbp+7h]
  int v120; // [rsp+74h] [rbp+Bh]
  int v121; // [rsp+78h] [rbp+Fh]
  int v122; // [rsp+7Ch] [rbp+13h]
  int v123; // [rsp+80h] [rbp+17h]
  int v124; // [rsp+84h] [rbp+1Bh]
  int v125; // [rsp+88h] [rbp+1Fh]
  int v126; // [rsp+8Ch] [rbp+23h]
  char v127; // [rsp+D8h] [rbp+6Fh]
  bool v128; // [rsp+E0h] [rbp+77h]
  unsigned int v129; // [rsp+E8h] [rbp+7Fh]

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 152),
         0,
         (*(_BYTE *)(*((_QWORD *)this + 93) + 555LL) & 0x20) != 0);
  v4 = *((_DWORD *)this + 152);
  v5 = v3;
  v110 = v3;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() || (v127 = 1, (v4 & 6) == 0) )
    v127 = 0;
  v6 = (_BYTE *)*((_QWORD *)this + 35);
  v7 = (*((_DWORD *)this + 152) & 0x20000) != 0;
  v8 = v6[84];
  v128 = v7;
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
  v11 = (_QWORD *)((char *)v5 + 792);
  v129 = 0;
  v12 = (CAtlasedImage **)((char *)this + 320);
  v109 = v11;
  v13 = v127;
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x78Eu);
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
      v108 = *v12;
      if ( v18 <= *(_DWORD *)(v19 + 288) )
      {
        v107 = &v108;
        v23 = DynArrayImpl<0>::Grow((int)v19 + 264, 8, 1, 0, (__int64)&v107);
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
          v27 = v107;
          v28 = (CAtlasedImage **)(v24 + 8LL * v18);
          if ( v107 >= v28 && (unsigned __int64)v107 < v24 + 8 * ((unsigned __int64)*(unsigned int *)(v19 + 288) - 1) )
            v27 = ++v107;
          *v28 = *v27;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x1CDu);
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v108 + 2);
          *((_QWORD *)v108 + 10) = v19;
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x795u);
        return v2;
      }
      v15 = v129;
      v11 = v109;
LABEL_36:
      if ( v110 )
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
      v61 = *v12;
      if ( *v12 )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)v61 + 2) && v61 )
        {
          (**(void (__fastcall ***)(CAtlasedImage *, __int64))v61)(v61, 1LL);
          *v12 = 0LL;
          goto LABEL_71;
        }
LABEL_65:
        *v12 = 0LL;
      }
LABEL_71:
      v13 = v127;
    }
    ++v15;
    v11 = v109 + 2;
    v129 = v15;
    ++v12;
    v109 += 2;
  }
  while ( v15 < 0x16 );
  if ( v13 )
  {
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
    v45 = (CAtlasedImage *)*((_QWORD *)this + 40);
    if ( IsSheetOfGlass )
    {
      v117 = 10;
      CAtlasedImage::SetHiddenMargins(v45, 10LL);
      v46 = *((_QWORD *)this + 41);
      v120 = 8;
      CAtlasedImage::SetHiddenMargins(v46, 8LL);
      v47 = *((_QWORD *)this + 42);
      v122 = 9;
      CAtlasedImage::SetHiddenMargins(v47, 9LL);
      v48 = *((_QWORD *)this + 43);
      v124 = 2;
      CAtlasedImage::SetHiddenMargins(v48, 2LL);
      v49 = *((_QWORD *)this + 44);
      v126 = 1;
      CAtlasedImage::SetHiddenMargins(v49, 1LL);
      v50 = *((_QWORD *)this + 45);
      v113 = 6;
      CAtlasedImage::SetHiddenMargins(v50, 6LL);
      v51 = *((_QWORD *)this + 46);
      v123 = 4;
      CAtlasedImage::SetHiddenMargins(v51, 4LL);
      v52 = *((_QWORD *)this + 47);
      v115 = 5;
      CAtlasedImage::SetHiddenMargins(v52, 5LL);
      v53 = *((_QWORD *)this + 49);
      v121 = 10;
      CAtlasedImage::SetHiddenMargins(v53, 10LL);
      v54 = *((_QWORD *)this + 50);
      v111 = 8;
      CAtlasedImage::SetHiddenMargins(v54, 8LL);
      v55 = *((_QWORD *)this + 51);
      v125 = 9;
      CAtlasedImage::SetHiddenMargins(v55, 9LL);
      v56 = *((_QWORD *)this + 52);
      v119 = 2;
      CAtlasedImage::SetHiddenMargins(v56, 2LL);
      v57 = *((_QWORD *)this + 53);
      v112 = 1;
      CAtlasedImage::SetHiddenMargins(v57, 1LL);
      v58 = *((_QWORD *)this + 54);
      v114 = 6;
      CAtlasedImage::SetHiddenMargins(v58, 6LL);
      v59 = *((_QWORD *)this + 55);
      v116 = 4;
      CAtlasedImage::SetHiddenMargins(v59, 4LL);
      v60 = *((_QWORD *)this + 56);
      v118 = 5;
      CAtlasedImage::SetHiddenMargins(v60, 5LL);
    }
    else
    {
      if ( *((_DWORD *)v45 + 16) )
      {
        *((_DWORD *)v45 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v45, 1u, 0x2000u);
      }
      v62 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v62 + 16) )
      {
        *((_DWORD *)v62 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v62, 1u, 0x2000u);
      }
      v63 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v63 + 16) )
      {
        *((_DWORD *)v63 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v63, 1u, 0x2000u);
      }
      v64 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v64 + 16) )
      {
        *((_DWORD *)v64 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v64, 1u, 0x2000u);
      }
      v65 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v65 + 16) )
      {
        *((_DWORD *)v65 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v65, 1u, 0x2000u);
      }
      v66 = (CAtlasedImage *)*((_QWORD *)this + 45);
      if ( *((_DWORD *)v66 + 16) )
      {
        *((_DWORD *)v66 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v66, 1u, 0x2000u);
      }
      v67 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v67 + 16) )
      {
        *((_DWORD *)v67 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v67, 1u, 0x2000u);
      }
      v68 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v68 + 16) )
      {
        *((_DWORD *)v68 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v68, 1u, 0x2000u);
      }
      v69 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v69 + 16) )
      {
        *((_DWORD *)v69 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v69, 1u, 0x2000u);
      }
      v70 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v70 + 16) )
      {
        *((_DWORD *)v70 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v70, 1u, 0x2000u);
      }
      v71 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v71 + 16) )
      {
        *((_DWORD *)v71 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v71, 1u, 0x2000u);
      }
      v72 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v72 + 16) )
      {
        *((_DWORD *)v72 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v72, 1u, 0x2000u);
      }
      v73 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v73 + 16) )
      {
        *((_DWORD *)v73 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v73, 1u, 0x2000u);
      }
      v74 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( *((_DWORD *)v74 + 16) )
      {
        *((_DWORD *)v74 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v74, 1u, 0x2000u);
      }
      v75 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( *((_DWORD *)v75 + 16) )
      {
        *((_DWORD *)v75 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v75, 1u, 0x2000u);
      }
      v76 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( *((_DWORD *)v76 + 16) )
      {
        *((_DWORD *)v76 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v76, 1u, 0x2000u);
      }
    }
  }
  v77 = v110;
  updated = CTopLevelWindow::UpdateButtonVisuals(this, (struct CBitmapSource **)v110);
  v2 = updated;
  if ( updated >= 0 )
  {
    if ( (*((_DWORD *)this + 152) & 0x10080) != 0 )
    {
      if ( !*((_QWORD *)this + 68) )
      {
        v79 = CImage::Create(
                *(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL),
                (struct CImage **)this + 68);
        v2 = v79;
        if ( v79 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v79, 0x7EEu);
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
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x7EFu);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 0x20000);
      }
      v81 = v128;
      *(_DWORD *)(*((_QWORD *)this + 68) + 184LL) = (*((unsigned __int8 *)this + 608) >> 7) | 2;
      v82 = (_BYTE *)*((_QWORD *)this + 68);
      v83 = v82[84];
      if ( v128 != (v83 & 1) )
      {
        v82[84] = v83 ^ (v128 ^ v83) & 1;
        (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v82 + 24LL))(v82, 16LL);
      }
    }
    else
    {
      v84 = (struct CVisual *)*((_QWORD *)this + 68);
      if ( v84 )
      {
        v85 = *((_QWORD *)v84 + 3);
        if ( v85 )
        {
          v86 = VisualCollection::Remove((VisualCollection *)(v85 + 32), v84);
          v2 = v86;
          if ( v86 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v86, 0x7FEu);
            return v2;
          }
          CVisual::SetDirtyFlags(this, 4096);
        }
        v87 = *((_QWORD *)this + 68);
        if ( v87 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v87 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v87)(v87, 1LL);
          *((_QWORD *)this + 68) = 0LL;
        }
      }
      v81 = v128;
    }
    if ( (*((_BYTE *)this + 608) & 8) != 0 )
    {
      v88 = (struct CVisual **)((char *)this + 536);
      if ( !*((_QWORD *)this + 67) )
      {
        v89 = CText::Create(*(struct MIL_CHANNEL__ *const *)(*((_QWORD *)this + 2) + 16LL), (struct CText **)this + 67);
        v2 = v89;
        if ( v89 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v89, 0x80Bu);
          return v2;
        }
        v90 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 37) + 32LL), *v88, 0LL, 1, 1);
        v2 = v90;
        if ( v90 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v90, 0x80Eu);
          return v2;
        }
        CVisual::SetDirtyFlags(this, 0x10000);
      }
      if ( v77 )
      {
        if ( CTopLevelWindow::TreatAsActiveWindow(this) )
        {
          v92 = *((_DWORD *)v77 + 284);
        }
        else
        {
          WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(v91, 0xAu);
          v92 = BlendColors(WindowColorizationColor, *((_DWORD *)v77 + 284), 0.40000001);
        }
        CText::SetColor(*v88, v92);
      }
      v94 = CTopLevelWindow::GetWindowColorizationColor((__int64)this, 8u);
      v95 = *v88;
      v96 = v94 & 0xFFFFFF;
      if ( *((_DWORD *)*v88 + 99) != v96 )
      {
        *((_DWORD *)v95 + 99) = v96;
        (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v95 + 24LL))(v95, 4096LL);
      }
      v97 = *v88;
      v98 = *(double *)(*((_QWORD *)this + 93) + 272LL);
      if ( *((double *)*v88 + 50) != v98 )
      {
        v99 = *(_QWORD *)v97;
        *((double *)v97 + 50) = v98;
        (*(void (__fastcall **)(struct CVisual *, __int64))(v99 + 24))(v97, 4096LL);
      }
      CText::SetFont(*v88, (const struct tagLOGFONTW *)(*((_QWORD *)this + 93) + 676LL));
      v100 = *v88;
      v101 = *((_BYTE *)*v88 + 84);
      if ( v81 != (v101 & 1) )
      {
        *((_BYTE *)v100 + 84) = v101 ^ (v81 ^ v101) & 1;
        (*(void (__fastcall **)(struct CVisual *, __int64))(*(_QWORD *)v100 + 24LL))(v100, 16LL);
      }
      CText::SetRTLReading(*v88, (*((_DWORD *)this + 152) & 0x80000) != 0);
      CText::SetReverseAlignment(*v88, (*((_DWORD *)this + 152) & 0x800000) != 0);
    }
    else
    {
      v102 = (struct CVisual *)*((_QWORD *)this + 67);
      if ( v102 )
      {
        v103 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 37) + 32LL), v102);
        v2 = v103;
        if ( v103 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v103, 0x82Du);
          return v2;
        }
        v104 = *((_QWORD *)this + 67);
        if ( v104 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v104 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64))v104)(v104, 1LL);
          *((_QWORD *)this + 67) = 0LL;
        }
      }
    }
    v105 = CTopLevelWindow::EnsureClientAreaNode(this);
    v2 = v105;
    if ( v105 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v105, 0x862u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x7E8u);
  }
  return v2;
}
