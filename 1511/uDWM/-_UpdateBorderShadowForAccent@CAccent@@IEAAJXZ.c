/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x180014EB8
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180014840 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18002BDD8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18002C2E4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  int v2; // r11d
  _QWORD *v3; // r8
  int v4; // eax
  int v5; // ecx
  double v6; // xmm2_8
  int v7; // ecx
  int v8; // edx
  int v9; // r10d
  int v10; // r9d
  int v11; // edx
  int v12; // r10d
  int v13; // r12d
  int v14; // r9d
  int v15; // r13d
  __int64 v16; // rbx
  LONG cx; // esi
  __int64 v18; // rbx
  LONG cy; // edi
  __int64 v20; // rbx
  LONG v21; // ebx
  __int64 v22; // r8
  LONG v23; // r8d
  int v24; // eax
  LONG *v25; // rdi
  __int64 v26; // r14
  CAtlasedImage **v27; // rbx
  struct _MARGINS *v28; // rsi
  void (__fastcall *v29)(CVisual *__hidden, unsigned int); // rdi
  CAtlasedImage *v31; // rcx
  CAtlasedImage *v32; // rcx
  struct tagSIZE v33[2]; // [rsp+28h] [rbp-E0h] BYREF
  struct tagSIZE v34; // [rsp+38h] [rbp-D0h] BYREF
  struct _MARGINS v35; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v36[16]; // [rsp+58h] [rbp-B0h] BYREF
  int v37; // [rsp+98h] [rbp-70h]
  int v38; // [rsp+9Ch] [rbp-6Ch]
  int v39; // [rsp+A0h] [rbp-68h]
  int v40; // [rsp+A4h] [rbp-64h]
  int v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+ACh] [rbp-5Ch]
  int v43; // [rsp+B0h] [rbp-58h]
  int v44; // [rsp+B4h] [rbp-54h]
  int v45; // [rsp+B8h] [rbp-50h]
  int v46; // [rsp+BCh] [rbp-4Ch]
  int v47; // [rsp+C0h] [rbp-48h]
  int v48; // [rsp+C4h] [rbp-44h]
  int v49; // [rsp+C8h] [rbp-40h]
  int v50; // [rsp+CCh] [rbp-3Ch]
  int v51; // [rsp+D0h] [rbp-38h]
  int v52; // [rsp+D4h] [rbp-34h]
  int v53; // [rsp+D8h] [rbp-30h]
  int v54; // [rsp+DCh] [rbp-2Ch]
  int v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+E4h] [rbp-24h]
  int v57; // [rsp+E8h] [rbp-20h]
  int v58; // [rsp+ECh] [rbp-1Ch]
  int v59; // [rsp+F0h] [rbp-18h]
  int v60; // [rsp+F4h] [rbp-14h]
  int v61; // [rsp+F8h] [rbp-10h]
  int v62; // [rsp+FCh] [rbp-Ch]
  int v63; // [rsp+100h] [rbp-8h]
  int v64; // [rsp+104h] [rbp-4h]
  int v65; // [rsp+108h] [rbp+0h]
  int v66; // [rsp+10Ch] [rbp+4h]
  int v67; // [rsp+110h] [rbp+8h]
  int v68; // [rsp+114h] [rbp+Ch]
  int v69; // [rsp+118h] [rbp+10h]
  int v70; // [rsp+11Ch] [rbp+14h]
  int v71; // [rsp+120h] [rbp+18h]
  int v72; // [rsp+124h] [rbp+1Ch]
  int v73; // [rsp+128h] [rbp+20h]
  int v74; // [rsp+12Ch] [rbp+24h]
  int v75; // [rsp+130h] [rbp+28h]
  int v76; // [rsp+134h] [rbp+2Ch]
  int v77; // [rsp+138h] [rbp+30h]
  int v78; // [rsp+13Ch] [rbp+34h]
  int v79; // [rsp+140h] [rbp+38h]
  int v80; // [rsp+144h] [rbp+3Ch]
  int v81; // [rsp+148h] [rbp+40h]
  int v82; // [rsp+14Ch] [rbp+44h]
  int v83; // [rsp+150h] [rbp+48h]
  int v84; // [rsp+154h] [rbp+4Ch]
  int v85; // [rsp+158h] [rbp+50h]
  int v86; // [rsp+15Ch] [rbp+54h]
  int v87; // [rsp+160h] [rbp+58h]
  int v88; // [rsp+164h] [rbp+5Ch]
  int v89; // [rsp+168h] [rbp+60h]
  int v90; // [rsp+16Ch] [rbp+64h]
  LONG v91; // [rsp+170h] [rbp+68h]
  int v92; // [rsp+174h] [rbp+6Ch]
  int v93; // [rsp+178h] [rbp+70h]
  int v94; // [rsp+17Ch] [rbp+74h]
  int v95; // [rsp+180h] [rbp+78h]
  int v96; // [rsp+184h] [rbp+7Ch]
  LONG v97; // [rsp+188h] [rbp+80h]
  int v98; // [rsp+18Ch] [rbp+84h]
  int v99; // [rsp+190h] [rbp+88h]
  int v100; // [rsp+194h] [rbp+8Ch]
  int v101; // [rsp+198h] [rbp+90h]
  int v102; // [rsp+19Ch] [rbp+94h]
  int v103; // [rsp+1A0h] [rbp+98h]
  int v104; // [rsp+1A4h] [rbp+9Ch]
  int v105; // [rsp+1A8h] [rbp+A0h]
  int v106; // [rsp+1ACh] [rbp+A4h]
  int v107; // [rsp+1B0h] [rbp+A8h]
  int v108; // [rsp+1B4h] [rbp+ACh]
  int v109; // [rsp+1B8h] [rbp+B0h]
  int v110; // [rsp+1BCh] [rbp+B4h]
  int v111; // [rsp+1C0h] [rbp+B8h]
  int v112; // [rsp+1C4h] [rbp+BCh]
  int v113; // [rsp+1C8h] [rbp+C0h]
  int v114; // [rsp+1CCh] [rbp+C4h]
  int v115; // [rsp+1D0h] [rbp+C8h]
  int v116; // [rsp+1D4h] [rbp+CCh]
  int v117; // [rsp+1D8h] [rbp+D0h]
  int v118; // [rsp+1DCh] [rbp+D4h]
  int v119; // [rsp+1E0h] [rbp+D8h]
  int v120; // [rsp+1E4h] [rbp+DCh]
  LONG v121; // [rsp+1E8h] [rbp+E0h]
  int v122; // [rsp+1ECh] [rbp+E4h]
  int v123; // [rsp+1F0h] [rbp+E8h]
  int v124; // [rsp+1F4h] [rbp+ECh]
  int v125; // [rsp+1F8h] [rbp+F0h]
  int v126; // [rsp+1FCh] [rbp+F4h]
  int v127; // [rsp+200h] [rbp+F8h]
  int v128; // [rsp+204h] [rbp+FCh]
  LONG v129; // [rsp+208h] [rbp+100h]
  int v130; // [rsp+20Ch] [rbp+104h]
  int v131; // [rsp+210h] [rbp+108h]
  int v132; // [rsp+214h] [rbp+10Ch]
  int v133; // [rsp+218h] [rbp+110h]
  int v134; // [rsp+21Ch] [rbp+114h]
  LONG v135; // [rsp+220h] [rbp+118h]
  int v136; // [rsp+224h] [rbp+11Ch]
  int v137; // [rsp+228h] [rbp+120h]
  int v138; // [rsp+22Ch] [rbp+124h]
  int v139; // [rsp+230h] [rbp+128h]
  int v140; // [rsp+234h] [rbp+12Ch]
  int v141; // [rsp+238h] [rbp+130h]
  LONG v142; // [rsp+23Ch] [rbp+134h]
  int v143; // [rsp+240h] [rbp+138h]
  int v144; // [rsp+244h] [rbp+13Ch]
  int v145; // [rsp+248h] [rbp+140h]
  int v146; // [rsp+24Ch] [rbp+144h]
  int v147; // [rsp+250h] [rbp+148h]
  LONG v148; // [rsp+254h] [rbp+14Ch]

  v2 = 0;
  v3 = *(_QWORD **)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v4 = 0;
  if ( !v3
    || (v5 = 0,
        v6 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 165),
        v2 = (int)((double)*(int *)(v3[186] + 28LL) * v6),
        v4 = (int)((double)(*(_DWORD *)(v3[186] + 24LL) - 1) * v6),
        v4 >= 0) )
  {
    v5 = v4;
  }
  v7 = -v5;
  v8 = v4;
  v9 = v4;
  v10 = v4;
  if ( v4 < 0 )
    v8 = 0;
  v11 = -v8;
  *(_OWORD *)&v33[0].cx = 0LL;
  if ( v4 < 0 )
    v9 = 0;
  v12 = -v9;
  v13 = v11 + v4;
  if ( v4 < 0 )
    v10 = 0;
  v14 = -v10;
  v15 = v12 + v4;
  v34.cx = v14 + v2;
  if ( v3 )
  {
    v16 = v3[222];
    if ( v16 )
      cx = *(_DWORD *)(v16 + 24);
    else
      cx = v33[0].cx;
    v18 = v3[224];
    if ( v18 )
      cy = *(_DWORD *)(v18 + 24);
    else
      cy = v33[0].cy;
    v20 = v3[226];
    if ( v20 )
      v21 = *(_DWORD *)(v20 + 28);
    else
      v21 = v33[1].cx;
    v22 = v3[228];
    if ( v22 )
    {
      v23 = *(_DWORD *)(v22 + 28);
      goto LABEL_19;
    }
  }
  else
  {
    v21 = v33[1].cx;
    cy = v33[0].cy;
    cx = v33[0].cx;
  }
  v23 = v33[1].cy;
LABEL_19:
  v36[2] = v7 + v4;
  v36[5] = 0x7FFFFFFF;
  v36[6] = 0x7FFFFFFF;
  v36[8] = 0x7FFFFFFF;
  v36[11] = 0x7FFFFFFF;
  v36[15] = 0x7FFFFFFF;
  v37 = v14 + v2;
  v43 = v14 + v2;
  v46 = 0x7FFFFFFF;
  v48 = 0x7FFFFFFF;
  v49 = 0x7FFFFFFF;
  v36[1] = v2;
  v36[7] = v2;
  v36[13] = v2;
  v70 = v2;
  v76 = v2;
  v82 = v2;
  v88 = v2;
  v53 = v7 + v4;
  v65 = v7 + v4;
  v35.cxLeftWidth = v7;
  v35.cxRightWidth = 0x7FFFFFFF;
  v35.cyTopHeight = v14;
  v35.cyBottomHeight = 0x7FFFFFFF;
  v36[0] = v4;
  v36[3] = v11 + v4;
  v36[4] = v14;
  v36[9] = v11;
  v36[10] = v14;
  v36[12] = v4;
  v36[14] = v7;
  v38 = v12 + v4;
  v39 = v4;
  v40 = 0x7FFFFFFF;
  v41 = 0x7FFFFFFF;
  v42 = v11;
  v44 = v12 + v4;
  v45 = v4;
  v47 = v7;
  v50 = v12;
  v51 = v4;
  v52 = v4;
  v54 = v11 + v4;
  v55 = 0x7FFFFFFF;
  v56 = v12;
  v57 = 0x7FFFFFFF;
  v58 = v4;
  v59 = 0x7FFFFFFF;
  v60 = v11;
  v61 = 0x7FFFFFFF;
  v62 = v12;
  v63 = v4;
  v64 = v4;
  v66 = v11 + v4;
  v67 = v14;
  v68 = 0x7FFFFFFF;
  v69 = 0x7FFFFFFF;
  v71 = v7;
  v72 = 0x7FFFFFFF;
  v73 = v14;
  v74 = 0x7FFFFFFF;
  v75 = v4;
  v77 = v7;
  v78 = v11;
  v79 = v14;
  v80 = 0x7FFFFFFF;
  v81 = 0x7FFFFFFF;
  v83 = 0x7FFFFFFF;
  v84 = v11;
  v85 = v14;
  v86 = 0x7FFFFFFF;
  v87 = v4;
  v89 = v7;
  v90 = 0x7FFFFFFF;
  v91 = v34.cx;
  v92 = v12 + v4;
  v96 = v11;
  v101 = v7;
  v104 = v12;
  v110 = v12;
  v114 = v11;
  v116 = v12;
  v127 = v14;
  v128 = v12;
  v133 = v14;
  v134 = v12;
  v93 = v4;
  v99 = v4;
  v105 = v4;
  v106 = v4;
  v108 = v11 + v4;
  v112 = v4;
  v117 = v4;
  v118 = v4;
  v24 = *((_DWORD *)this + 67);
  v120 = v13;
  v94 = 0x7FFFFFFF;
  v95 = 0x7FFFFFFF;
  v97 = v34.cx;
  v98 = v15;
  v100 = 0x7FFFFFFF;
  v102 = 0x7FFFFFFF;
  v103 = 0x7FFFFFFF;
  v107 = v53;
  v109 = 0x7FFFFFFF;
  v111 = 0x7FFFFFFF;
  v113 = 0x7FFFFFFF;
  v115 = 0x7FFFFFFF;
  v119 = v53;
  v121 = v34.cx;
  v122 = v15;
  v123 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v125 = v7 - cx;
  v126 = 0x7FFFFFFF;
  v129 = cx;
  v130 = 0x7FFFFFFF;
  v131 = 0x7FFFFFFF;
  v132 = v11 - cy;
  v135 = cy;
  v136 = 0x7FFFFFFF;
  v137 = v7 - cx;
  v138 = v11 - cy;
  v139 = v14 - v21;
  v140 = 0x7FFFFFFF;
  v141 = 0x7FFFFFFF;
  v142 = v21;
  v143 = v7 - cx;
  v144 = v11 - cy;
  v145 = 0x7FFFFFFF;
  v146 = v12 - v23;
  v147 = 0x7FFFFFFF;
  v148 = v23;
  if ( (v24 & 0x40) == 0 )
  {
    v127 = 0;
    v133 = 0;
    v37 = 0;
    v43 = 0;
  }
  if ( (v24 & 0x100) == 0 )
  {
    v128 = 0;
    v134 = 0;
  }
  v25 = v36;
  v26 = 22LL;
  v27 = (CAtlasedImage **)((char *)this + 392);
  v28 = &v35;
  do
  {
    if ( *v27 )
    {
      CAtlasedImage::SetInsetFromParent(*v27, v28);
      if ( *v25 != 0x7FFFFFFF )
      {
        v31 = *v27;
        v34.cx = *v25;
        v34.cy = *((_DWORD *)v31 + 7);
        CAtlasedImage::SetSize(v31, &v34);
      }
      if ( v25[1] != 0x7FFFFFFF )
      {
        v32 = *v27;
        v33[0].cy = v25[1];
        v33[0].cx = *((_DWORD *)v32 + 6);
        CAtlasedImage::SetSize(v32, v33);
      }
    }
    v28 = (struct _MARGINS *)((char *)v28 + 24);
    ++v27;
    v25 += 6;
    --v26;
  }
  while ( v26 );
  v29 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(**((_QWORD **)this + 47) + 24LL);
  if ( v29 == CVisual::SetDirtyFlags )
    CVisual::SetDirtyFlags(*((CVisual **)this + 47), 0x1000u);
  else
    v29(*((CVisual **)this + 47), 4096u);
  return 0LL;
}
