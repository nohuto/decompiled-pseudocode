/*
 * XREFs of ?Initialize@CAnimatedGlassSheet@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18007B620
 * Callers:
 *     ?Create@CAnimatedGlassSheet@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@_N@Z @ 0x18007B4F0 (-Create@CAnimatedGlassSheet@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x18001B628 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     ?InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z @ 0x18001B704 (-InsertAtlasImageAtIndex@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@I@Z.c)
 *     ?Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001B790 (-Initialize@CAtlasedRectsVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180028DB0 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x180028DC8 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800292D4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800679E4 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Create@CAtlasedImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180074D34 (-Create@CAtlasedImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180075BB0 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 */

__int64 __fastcall CAnimatedGlassSheet::Initialize(CAnimatedGlassSheet *this, struct MIL_CHANNEL__ *const a2, char a3)
{
  int v5; // eax
  int v6; // edi
  unsigned int v7; // r10d
  struct CTopLevelWindow::WindowFrame *v8; // rbx
  struct CBitmapSource *WindowFramePart; // rax
  __int64 v10; // r9
  int v11; // r10d
  __int64 v12; // r11
  double v13; // xmm0_8
  int v14; // esi
  int v15; // r14d
  int v16; // r15d
  int v17; // r12d
  __m128i v18; // xmm0
  __int64 v19; // r11
  LONG *v20; // rsi
  struct CAtlasedImage **v21; // rbx
  __int64 v22; // r14
  int v23; // eax
  struct CTopLevelWindow::WindowFrame *v24; // r12
  int v25; // eax
  struct CBitmapSource *v26; // rdx
  struct CAtlasedImage *v27; // rcx
  struct CAtlasedImage *v28; // rcx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // eax
  struct tagSIZE v35; // [rsp+30h] [rbp-D0h] BYREF
  struct tagSIZE v36; // [rsp+38h] [rbp-C8h] BYREF
  signed __int64 v37; // [rsp+40h] [rbp-C0h]
  signed __int64 v38; // [rsp+48h] [rbp-B8h]
  struct MIL_CHANNEL__ *v39; // [rsp+50h] [rbp-B0h]
  _DWORD v40[5]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v41[15]; // [rsp+74h] [rbp-8Ch] BYREF
  int v42; // [rsp+B0h] [rbp-50h]
  int v43; // [rsp+B4h] [rbp-4Ch]
  int v44; // [rsp+B8h] [rbp-48h]
  int v45; // [rsp+BCh] [rbp-44h]
  int v46; // [rsp+C0h] [rbp-40h]
  int v47; // [rsp+C4h] [rbp-3Ch]
  int v48; // [rsp+C8h] [rbp-38h]
  int v49; // [rsp+CCh] [rbp-34h]
  int v50; // [rsp+D0h] [rbp-30h]
  int v51; // [rsp+D4h] [rbp-2Ch]
  int v52; // [rsp+D8h] [rbp-28h]
  int v53; // [rsp+DCh] [rbp-24h]
  int v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  int v58; // [rsp+F0h] [rbp-10h]
  int v59; // [rsp+F4h] [rbp-Ch]
  int v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+FCh] [rbp-4h]
  int v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+104h] [rbp+4h]
  int v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+10Ch] [rbp+Ch]
  int v66; // [rsp+110h] [rbp+10h]
  int v67; // [rsp+114h] [rbp+14h]
  int v68; // [rsp+118h] [rbp+18h]
  int v69; // [rsp+11Ch] [rbp+1Ch]
  int v70; // [rsp+120h] [rbp+20h]
  int v71; // [rsp+124h] [rbp+24h]
  int v72; // [rsp+128h] [rbp+28h]
  int v73; // [rsp+12Ch] [rbp+2Ch]
  int v74; // [rsp+130h] [rbp+30h]
  int v75; // [rsp+134h] [rbp+34h]
  int v76; // [rsp+138h] [rbp+38h]
  int v77; // [rsp+13Ch] [rbp+3Ch]
  int v78; // [rsp+140h] [rbp+40h]
  int v79; // [rsp+144h] [rbp+44h]
  int v80; // [rsp+148h] [rbp+48h]
  int v81; // [rsp+14Ch] [rbp+4Ch]
  int v82; // [rsp+150h] [rbp+50h]
  int v83; // [rsp+154h] [rbp+54h]
  int v84; // [rsp+158h] [rbp+58h]
  int v85; // [rsp+15Ch] [rbp+5Ch]
  int v86; // [rsp+160h] [rbp+60h]
  int v87; // [rsp+164h] [rbp+64h]
  int v88; // [rsp+168h] [rbp+68h]
  int v89; // [rsp+16Ch] [rbp+6Ch]
  int v90; // [rsp+170h] [rbp+70h]
  int v91; // [rsp+174h] [rbp+74h]
  int v92; // [rsp+178h] [rbp+78h]
  int v93; // [rsp+17Ch] [rbp+7Ch]
  int v94; // [rsp+180h] [rbp+80h]
  int v95; // [rsp+184h] [rbp+84h]
  int v96; // [rsp+188h] [rbp+88h]
  int v97; // [rsp+18Ch] [rbp+8Ch]
  int v98; // [rsp+190h] [rbp+90h]
  int v99; // [rsp+194h] [rbp+94h]
  int v100; // [rsp+1A0h] [rbp+A0h] BYREF
  _DWORD v101[17]; // [rsp+1A4h] [rbp+A4h] BYREF
  int v102; // [rsp+1E8h] [rbp+E8h]
  int v103; // [rsp+1F0h] [rbp+F0h]
  int v104; // [rsp+1FCh] [rbp+FCh]
  int v105; // [rsp+204h] [rbp+104h]

  v39 = a2;
  v5 = CAtlasedRectsVisual::Initialize(this, a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0;
    v8 = *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8LL * (a3 == 0));
    v35 = (struct tagSIZE)v8;
    do
    {
      WindowFramePart = CTopLevelWindow::GetWindowFramePart(v8, v7 + 9);
      if ( WindowFramePart )
      {
        *(_QWORD *)v10 = *((_QWORD *)WindowFramePart + 3);
        v13 = (double)*(int *)(v10 + 4);
        *(_DWORD *)v10 = (int)((double)*(int *)v10 * *(double *)(v12 + 1320));
        *(_DWORD *)(v10 + 4) = (int)(v13 * *(double *)(v12 + 1328));
      }
      else
      {
        *(_DWORD *)v10 = 0;
        *(_DWORD *)(v10 + 4) = 0;
      }
      v7 = v11 + 1;
    }
    while ( v7 < 0xD );
    v14 = v100;
    v15 = v101[3];
    v16 = v101[2];
    v17 = v101[12];
    *((_DWORD *)this + 124) = v100;
    *((_DWORD *)this + 125) = v15;
    *((_DWORD *)this + 126) = v16;
    *((_DWORD *)this + 127) = v17;
    *((_DWORD *)this + 120) = v14;
    *((_DWORD *)this + 121) = v15;
    *((_DWORD *)this + 122) = v16;
    *((_DWORD *)this + 123) = v17;
    v41[1] = 0;
    v41[2] = 0;
    v58 = 0;
    v18 = _mm_cvtsi32_si128(*((_DWORD *)CTopLevelWindow::GetWindowFramePart(v8, 9u) + 6));
    v40[1] = 0x7FFFFFFF;
    v40[3] = 0x7FFFFFFF;
    v41[4] = 0x7FFFFFFF;
    v41[5] = 0x7FFFFFFF;
    v41[7] = 0x7FFFFFFF;
    v41[10] = 0x7FFFFFFF;
    v41[14] = 0x7FFFFFFF;
    v45 = 0x7FFFFFFF;
    v46 = 0x7FFFFFFF;
    v51 = 0x7FFFFFFF;
    v53 = 0x7FFFFFFF;
    v54 = 0x7FFFFFFF;
    v40[0] = -v14;
    v41[13] = -v14;
    v52 = -v14;
    v40[2] = -v16;
    v41[3] = -v16;
    v41[8] = -v15;
    v41[9] = -v16;
    *(double *)v18.m128i_i64 = _mm_cvtepi32_pd(v18).m128d_f64[0] * *(double *)(v19 + 1320);
    v47 = -v15;
    v55 = -v17;
    v60 = 0x7FFFFFFF;
    v61 = -v17;
    v62 = 0x7FFFFFFF;
    v64 = 0x7FFFFFFF;
    v65 = -v15;
    v40[4] = (int)*(double *)v18.m128i_i64;
    v41[0] = (int)*(double *)v18.m128i_i64;
    v41[6] = (int)*(double *)v18.m128i_i64;
    v41[11] = (int)*(double *)v18.m128i_i64;
    v42 = (int)*(double *)v18.m128i_i64 - v16;
    v48 = v42;
    v43 = (int)*(double *)v18.m128i_i64 - v17;
    v49 = v43;
    v59 = 0;
    v41[12] = (int)*(double *)v18.m128i_i64;
    v44 = (int)*(double *)v18.m128i_i64;
    v50 = (int)*(double *)v18.m128i_i64;
    v56 = (int)*(double *)v18.m128i_i64;
    v57 = (int)*(double *)v18.m128i_i64;
    v63 = (int)*(double *)v18.m128i_i64;
    v66 = 0x7FFFFFFF;
    v78 = -v101[0];
    v74 = 0x7FFFFFFF;
    v75 = 0x7FFFFFFF;
    v79 = -v101[10];
    v72 = v42;
    v71 = (int)*(double *)v18.m128i_i64 - v15;
    v73 = v43;
    v70 = (int)*(double *)v18.m128i_i64 - v14;
    v67 = -v17;
    v76 = -(v102 + v14);
    v20 = v41;
    v88 = v76;
    v21 = (struct CAtlasedImage **)((char *)this + 304);
    v93 = v104;
    v83 = -(v103 + v15);
    v22 = 0LL;
    v89 = v83;
    v68 = (int)*(double *)v18.m128i_i64;
    v90 = -(v104 + v16);
    v69 = (int)*(double *)v18.m128i_i64;
    v94 = -(v102 + v101[9]);
    v77 = 0x7FFFFFFF;
    v80 = v102;
    v95 = -(v103 + v101[13]);
    v81 = 0x7FFFFFFF;
    v82 = 0x7FFFFFFF;
    v84 = -v16;
    v23 = v105 + v17;
    v85 = -v17;
    v24 = (struct CTopLevelWindow::WindowFrame *)v35;
    v97 = -v23;
    v86 = v103;
    v37 = (char *)&v100 - (char *)this;
    v87 = 0x7FFFFFFF;
    v38 = (char *)v101 - (char *)this;
    v91 = 0x7FFFFFFF;
    v92 = 0x7FFFFFFF;
    v96 = 0x7FFFFFFF;
    v98 = 0x7FFFFFFF;
    v99 = v105;
    while ( 1 )
    {
      v25 = CAtlasedImage::Create(v39, (struct CAtlasedImage **)this + v22 + 38);
      v6 = v25;
      if ( v25 < 0 )
        break;
      CAtlasedRectsVisual::InsertAtlasImageAtIndex(this, *v21);
      if ( *(int *)((char *)v21 + v37 - 304) <= 0 || *(int *)((char *)v21 + v38 - 304) <= 0 )
        v26 = 0LL;
      else
        v26 = CTopLevelWindow::GetWindowFramePart(v24, (int)v22 + 9);
      CAtlasedImage::SetBitmapSource(*v21, v26);
      CAtlasedImage::SetInsetFromParent(*v21, (const struct _MARGINS *)&v40[6 * v22]);
      if ( *(v20 - 1) != 0x7FFFFFFF )
      {
        v27 = *v21;
        v36.cx = *(v20 - 1);
        v36.cy = *((_DWORD *)v27 + 7);
        CAtlasedImage::SetSize(v27, &v36);
      }
      if ( *v20 != 0x7FFFFFFF )
      {
        v28 = *v21;
        v35.cy = *v20;
        v35.cx = *((_DWORD *)v28 + 6);
        CAtlasedImage::SetSize(v28, &v35);
      }
      v29 = 0;
      if ( *(v20 - 4) == 0x7FFFFFFF )
        v29 = 2;
      v30 = v29 | (*(v20 - 5) == 0x7FFFFFFF);
      v31 = 0;
      if ( *(v20 - 3) == 0x7FFFFFFF )
        v31 = 4;
      v32 = v31 | v30;
      v33 = 0;
      if ( *(v20 - 2) == 0x7FFFFFFF )
        v33 = 8;
      CAtlasedImage::SetHiddenMargins(*v21, v33 | v32);
      v22 = (unsigned int)(v22 + 1);
      ++v21;
      v20 += 6;
      if ( (unsigned int)v22 >= 0xD )
        goto LABEL_27;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v25, 0xB6u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x4Bu);
  }
LABEL_27:
  if ( v6 < 0 )
    CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  return (unsigned int)v6;
}
