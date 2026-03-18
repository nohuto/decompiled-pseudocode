/*
 * XREFs of ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0
 * Callers:
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18008331C (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 * Callees:
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800180C4 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180018A18 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x18001CE50 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x18001D3B8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x180056F90 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180080880 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180137D7C (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18013D2F0 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBrushAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct CMILBrushBitmap *a2,
        const struct D2DMatrix **a3,
        struct CHwTexturedColorSource **a4)
{
  __int64 v4; // r14
  char *v6; // rdx
  const struct D2DMatrix **v7; // r9
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm0
  __int128 v13; // xmm3
  __int128 v14; // xmm2
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  const struct D2DMatrix *v17; // rax
  int v18; // r10d
  __int128 v19; // xmm0
  int v20; // ebx
  int v21; // edi
  int v22; // edx
  bool v23; // cl
  char v24; // r8
  CBitmap *v25; // r12
  __int64 (__fastcall **v26)(_QWORD, _QWORD, _QWORD); // rax
  int v27; // eax
  int v28; // r13d
  __int64 (__fastcall *v29)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **); // r13
  int Resource; // eax
  struct IMILCacheableResource *v31; // rax
  struct IMILCacheableResource *v32; // r13
  CBitmap *v33; // r15
  CBitmap *v34; // rsi
  __int64 (__fastcall *v35)(CBitmap *__hidden, unsigned int *, unsigned int *); // r14
  int Size; // eax
  float v37; // xmm8_4
  float v38; // xmm14_4
  float v39; // xmm13_4
  float v40; // xmm7_4
  float v41; // xmm15_4
  float v42; // xmm1_4
  float v43; // xmm6_4
  float v44; // xmm9_4
  float *v45; // rax
  int v46; // ecx
  float v47; // xmm5_4
  float v48; // xmm10_4
  float v49; // xmm8_4
  float v50; // xmm7_4
  float v51; // xmm4_4
  float v52; // xmm2_4
  int v53; // edx
  float v54; // xmm7_4
  float *v55; // rcx
  float v56; // xmm8_4
  float v57; // xmm10_4
  float v58; // xmm0_4
  float v59; // xmm2_4
  int v60; // r14d
  int v61; // esi
  float v62; // xmm0_4
  int v63; // ecx
  int v64; // r15d
  float v65; // xmm7_4
  int v66; // esi
  float v67; // xmm6_4
  char *v68; // rdx
  unsigned int v69; // eax
  char v70; // r15
  unsigned int v71; // r8d
  __int64 v72; // rsi
  unsigned int v73; // ecx
  __int64 v74; // r14
  unsigned int v75; // r8d
  unsigned int v76; // r9d
  unsigned int v77; // r10d
  unsigned int v78; // r11d
  HRGN v79; // rcx
  __int64 v80; // r15
  int v81; // eax
  const struct D2DMatrix **v82; // r8
  const struct D2DMatrix *v83; // rdx
  CMILRefCountBase *v84; // rcx
  int v85; // eax
  unsigned int v86; // edi
  int v88; // eax
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  int v94; // eax
  float v95; // xmm1_4
  float v96; // xmm1_4
  bool v97; // zf
  void (__fastcall ***v98)(_QWORD, struct IMILCacheableResource *); // rsi
  int v99; // [rsp+60h] [rbp-A0h]
  unsigned int v100; // [rsp+64h] [rbp-9Ch]
  unsigned int v101; // [rsp+68h] [rbp-98h]
  float v102; // [rsp+68h] [rbp-98h]
  unsigned int v103; // [rsp+68h] [rbp-98h]
  struct IMILCacheableResource *v104; // [rsp+70h] [rbp-90h]
  char *v105; // [rsp+70h] [rbp-90h]
  __int64 v106; // [rsp+78h] [rbp-88h]
  int v107; // [rsp+80h] [rbp-80h]
  struct IMILCacheableResource *v108; // [rsp+90h] [rbp-70h] BYREF
  __int64 v109; // [rsp+98h] [rbp-68h] BYREF
  CMILResourceCache *v110; // [rsp+A0h] [rbp-60h] BYREF
  CBitmap *v111; // [rsp+A8h] [rbp-58h]
  const struct D2DMatrix **v112; // [rsp+B0h] [rbp-50h]
  __int64 v113; // [rsp+B8h] [rbp-48h]
  _DWORD v114[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v115; // [rsp+E0h] [rbp-20h] BYREF
  int v116; // [rsp+E8h] [rbp-18h]
  char v117; // [rsp+ECh] [rbp-14h]
  int v118; // [rsp+F0h] [rbp-10h]
  bool v119; // [rsp+F4h] [rbp-Ch]
  int v120; // [rsp+F8h] [rbp-8h]
  int v121; // [rsp+FCh] [rbp-4h]
  int v122; // [rsp+100h] [rbp+0h]
  int v123; // [rsp+104h] [rbp+4h]
  int v124; // [rsp+108h] [rbp+8h]
  char v125; // [rsp+10Ch] [rbp+Ch]
  __int128 v126; // [rsp+110h] [rbp+10h]
  __int128 v127; // [rsp+120h] [rbp+20h]
  int v128; // [rsp+130h] [rbp+30h]
  CD3DDeviceLevel1 *v129; // [rsp+140h] [rbp+40h]
  RECT rect; // [rsp+148h] [rbp+48h] BYREF
  int v131; // [rsp+158h] [rbp+58h]
  unsigned int v132; // [rsp+15Ch] [rbp+5Ch] BYREF
  unsigned int v133; // [rsp+160h] [rbp+60h] BYREF
  int v134; // [rsp+164h] [rbp+64h]
  __int128 v135; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v136; // [rsp+180h] [rbp+80h]
  char v137; // [rsp+188h] [rbp+88h]
  __int128 v138; // [rsp+18Ch] [rbp+8Ch]
  __int64 v139[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v140; // [rsp+1B0h] [rbp+B0h]
  __int128 v141; // [rsp+1C0h] [rbp+C0h]
  __int128 v142; // [rsp+1D0h] [rbp+D0h]
  __int64 v143[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v144; // [rsp+1F0h] [rbp+F0h]
  __int128 v145; // [rsp+200h] [rbp+100h]
  __int128 v146; // [rsp+210h] [rbp+110h]
  _OWORD v147[5]; // [rsp+220h] [rbp+120h] BYREF
  __int64 v148; // [rsp+270h] [rbp+170h] BYREF
  int v149; // [rsp+278h] [rbp+178h]
  _DWORD v150[3]; // [rsp+27Ch] [rbp+17Ch] BYREF
  __int64 v151; // [rsp+288h] [rbp+188h]

  v4 = 0LL;
  v113 = (__int64)a4;
  v112 = a3;
  v6 = (char *)a2 + 128;
  v129 = a1;
  v7 = a3;
  v106 = 0LL;
  v9 = *(_OWORD *)v6;
  v10 = *((_OWORD *)v6 + 1);
  v11 = *((_OWORD *)v6 + 3);
  v12 = *((_OWORD *)v6 + 2);
  v114[0] = *(_OWORD *)v6;
  v114[2] = v10;
  v114[4] = v11;
  v147[1] = v9;
  LODWORD(v9) = *((_DWORD *)v6 + 1);
  v147[2] = v10;
  LODWORD(v10) = *((_DWORD *)v6 + 5);
  v147[4] = v11;
  LODWORD(v11) = *((_DWORD *)v6 + 13);
  v114[1] = v9;
  v114[3] = v10;
  v114[5] = v11;
  v147[3] = v12;
  if ( *((_DWORD *)a2 + 31) )
  {
    D2DMatrixMultiply((struct D2DMatrix *)v143, (const struct D2DMatrix *)v6, a3[1]);
    v13 = v146;
    v14 = v145;
    v15 = v144;
    v16 = *(_OWORD *)v143;
  }
  else
  {
    v16 = *(_OWORD *)v6;
    v15 = *((_OWORD *)v6 + 1);
    v14 = *((_OWORD *)v6 + 2);
    v13 = *((_OWORD *)v6 + 3);
    *(_OWORD *)v143 = *(_OWORD *)v6;
    v144 = v15;
    v145 = v14;
    v146 = v13;
  }
  v17 = *v7;
  v137 = 0;
  v136 = v139;
  if ( *((_BYTE *)v17 + 64) )
  {
    v89 = *((_OWORD *)v6 + 1);
    *(_OWORD *)v139 = *(_OWORD *)v6;
    v90 = *((_OWORD *)v6 + 2);
    v140 = v89;
    v91 = *((_OWORD *)v6 + 3);
    v141 = v90;
    v142 = v91;
  }
  else
  {
    *(_OWORD *)v139 = v16;
    v140 = v15;
    v141 = v14;
    v142 = v13;
  }
  v18 = *((_DWORD *)v17 + 43);
  v19 = *((_OWORD *)v7 + 3);
  v20 = *((_DWORD *)a2 + 64);
  v21 = *((_DWORD *)v7 + 10);
  v22 = *((_DWORD *)v7 + 6);
  v23 = *((_DWORD *)v7 + 5) == 1;
  v24 = *((_BYTE *)v17 + 192);
  v118 = *((_DWORD *)v7 + 4);
  v123 = *((_DWORD *)a2 + 30);
  v107 = *((_DWORD *)a2 + 50);
  v124 = v107;
  v127 = 0LL;
  LOBYTE(v128) = 0;
  v115 = (__int64)a2;
  v117 = v24;
  v99 = v18;
  v116 = v18;
  v119 = v23;
  v120 = v22;
  v121 = v21;
  v122 = v20;
  v135 = v19;
  v126 = _xmm;
  if ( (v20 & 2) == 0 || a2 == (struct CMILBrushBitmap *)-220LL )
  {
    v125 = 0;
  }
  else
  {
    v92 = *(_OWORD *)((char *)a2 + 220);
    v125 = 1;
    v93 = *(_OWORD *)((char *)a2 + 236);
    v94 = *((_DWORD *)a2 + 63);
    v126 = v92;
    v127 = v93;
    v128 = v94;
  }
  if ( v24 && g_pMediaControl && *(_DWORD *)(*((_QWORD *)g_pMediaControl + 2) + 116LL) )
    v117 = 0;
  v25 = (CBitmap *)*((_QWORD *)a2 + 24);
  if ( !v25 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xBAu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xF1u);
    return 2147500037LL;
  }
  v26 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v25;
  v111 = (CBitmap *)*((_QWORD *)a2 + 24);
  ((void (__fastcall *)(CBitmap *))v26[1])(v25);
  v110 = 0LL;
  v108 = 0LL;
  v104 = 0LL;
  v101 = *((_DWORD *)a1 + 104);
  if ( v101 == -1 )
  {
    v28 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x5Cu);
  }
  else
  {
    v27 = (**(__int64 (__fastcall ***)(CBitmap *, GUID *, CMILResourceCache **))v25)(
            v25,
            &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
            &v110);
    v28 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x5Fu);
    }
    else
    {
      v29 = *(__int64 (__fastcall **)(CMILResourceCache *__hidden, unsigned int, struct IMILCacheableResource **))(*(_QWORD *)v110 + 24LL);
      if ( v29 == CMILResourceCache::GetResource )
        Resource = CMILResourceCache::GetResource(v110, v101, &v108);
      else
        Resource = v29(v110, v101, &v108);
      v28 = Resource;
      if ( Resource >= 0 )
      {
        v31 = v108;
        if ( v108 )
          v31 = (struct IMILCacheableResource *)((char *)v108 - 128);
        v104 = v31;
        v108 = 0LL;
        goto LABEL_18;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Resource, 0x62u);
    }
  }
  if ( v108 )
    (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v108 + 8LL))(v108);
LABEL_18:
  if ( v110 )
    (*(void (__fastcall **)(CMILResourceCache *))(*(_QWORD *)v110 + 16LL))(v110);
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xFAu);
    v32 = v104;
LABEL_109:
    v88 = CHwBitmapColorSource::DeriveFromBitmapAndContext(
            v129,
            v25,
            (volatile signed __int32 *)v32,
            (struct CHwBitmapColorSource *)&v135,
            (struct MILMatrix3x2 *)v114,
            (__int64)v143,
            (struct BitmapToXSpaceTransform *)v139,
            *((_DWORD *)*v112 + 49),
            *((_DWORD *)v112 + 11),
            (__int64)v112[8],
            (struct CHwBitmapColorSource::CacheContextParameters *)&v115,
            (struct CHwSolidColorTextureSource **)v113);
    v86 = v88;
    if ( v88 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, 0x127u);
    goto LABEL_100;
  }
  if ( v99 > 1 )
  {
    v99 = 1;
    v116 = 1;
  }
  v32 = v104;
  if ( !v104 )
    goto LABEL_109;
  v4 = *((_QWORD *)v104 + 62);
  v106 = 0LL;
  if ( !v4 )
  {
LABEL_108:
    CHwBitmapCache::TryForLastUsedBitmapColorSource(v32, (__int64)&v115, (int)&v135);
    v4 = 0LL;
    goto LABEL_109;
  }
  v33 = (CBitmap *)*((_QWORD *)a2 + 24);
  v109 = 0LL;
  if ( (*(unsigned int (__fastcall **)(CBitmap *))(*(_QWORD *)v33 + 80LL))(v33) == 3 )
  {
    v105 = (char *)v33 - 16;
    if ( v33 == (CBitmap *)16 )
      v34 = 0LL;
    else
      v34 = v33;
    v35 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v34 + 56LL);
    if ( v35 == CBitmap::GetSize )
      Size = CBitmap::GetSize(v34, &v132, &v133);
    else
      Size = v35(v34, &v132, &v133);
    if ( Size < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x235u);
      goto LABEL_108;
    }
    v37 = *((float *)v139 + 1);
    v38 = *(float *)v139;
    v39 = *((float *)&v140 + 1);
    v40 = *(float *)&v140;
    v41 = *((float *)&v142 + 1);
    v102 = *(float *)&v142;
    v134 = v107;
    rect.right = v132;
    v131 = v99;
    v42 = (float)(*(float *)v139 * *((float *)&v140 + 1)) - (float)(*((float *)v139 + 1) * *(float *)&v140);
    *(_QWORD *)&rect.left = 0LL;
    rect.bottom = v133;
    if ( v42 == 0.0 )
      goto LABEL_108;
    v43 = FLOAT_1_0;
    v44 = 1.0 / v42;
    if ( !_finite((float)(1.0 / v42)) )
      goto LABEL_108;
    v45 = (float *)&v148;
    v46 = 4;
    LODWORD(v47) = COERCE_UNSIGNED_INT(v44 * v37) ^ _xmm;
    LODWORD(v48) = COERCE_UNSIGNED_INT(v44 * v40) ^ _xmm;
    v150[0] = DWORD1(v135);
    v148 = v135;
    v149 = DWORD2(v135);
    v150[1] = v135;
    v150[2] = HIDWORD(v135);
    v49 = (float)((float)(v37 * v102) - (float)(v38 * v41)) * v44;
    v151 = *((_QWORD *)&v135 + 1);
    v50 = (float)((float)(v40 * v41) - (float)(v39 * v102)) * v44;
    do
    {
      v51 = *v45;
      *v45 = (float)((float)(v48 * v45[1]) + (float)((float)(v44 * v39) * *v45)) + v50;
      v45[1] = (float)((float)((float)(v44 * v38) * v45[1]) + (float)(v47 * v51)) + v49;
      v45 += 2;
      --v46;
    }
    while ( v46 );
    v52 = *(float *)&v148;
    v53 = 1;
    v54 = *((float *)&v148 + 1);
    v55 = (float *)v150;
    v56 = *(float *)&v148;
    v57 = *((float *)&v148 + 1);
    *((_QWORD *)&v138 + 1) = v148;
    *(_QWORD *)&v138 = v148;
    do
    {
      v58 = *(v55 - 1);
      if ( v52 > v58 )
      {
        v52 = *(v55 - 1);
        *(float *)&v138 = v52;
      }
      else if ( v58 > v56 )
      {
        v56 = *(v55 - 1);
        *((float *)&v138 + 2) = v56;
      }
      if ( v54 > *v55 )
      {
        v54 = *v55;
        *((float *)&v138 + 1) = *v55;
      }
      else if ( *v55 > v57 )
      {
        v57 = *v55;
        *((float *)&v138 + 3) = *v55;
      }
      ++v53;
      v55 += 2;
    }
    while ( (unsigned __int64)v53 < 4 );
    v137 = 1;
    if ( rect.right != v132 )
    {
      v95 = (float)rect.right / (float)(int)v132;
      v52 = v52 * v95;
      v56 = v56 * v95;
    }
    if ( rect.bottom != v133 )
    {
      v96 = (float)rect.bottom / (float)(int)v133;
      v54 = v54 * v96;
      v57 = v57 * v96;
    }
    if ( v131 )
      v43 = FLOAT_1_5;
    v59 = v52 - v43;
    v60 = 0x7FFFFFFF;
    if ( v59 < -2147483600.0 )
    {
      v61 = 0x80000000;
    }
    else if ( v59 >= 2147483600.0 )
    {
      v61 = 0x7FFFFFFF;
    }
    else
    {
      v61 = (int)ceilf_0(v59);
    }
    v62 = v43 + v56;
    if ( (float)(v43 + v56) < -2147483600.0 )
    {
      v63 = 0x80000000;
    }
    else if ( v62 >= 2147483600.0 )
    {
      v63 = 0x7FFFFFFF;
    }
    else
    {
      v63 = (int)floorf_0(v62);
    }
    v64 = v134;
    if ( v61 < v63 )
    {
      if ( v134 )
      {
        if ( v61 < 0 || v63 > rect.right )
          goto LABEL_59;
        rect.left = v61;
      }
      else
      {
        if ( v61 > 0 )
        {
          if ( v61 >= rect.right )
            rect.left = rect.right - 1;
          else
            rect.left = v61;
        }
        if ( v63 >= rect.right )
          goto LABEL_59;
        if ( v63 <= 0 )
        {
          rect.right = 1;
          goto LABEL_59;
        }
      }
      rect.right = v63;
    }
LABEL_59:
    v65 = v54 - v43;
    if ( v65 < -2147483600.0 )
    {
      v66 = 0x80000000;
    }
    else if ( v65 >= 2147483600.0 )
    {
      v66 = 0x7FFFFFFF;
    }
    else
    {
      v66 = (int)ceilf_0(v65);
    }
    v67 = v43 + v57;
    if ( v67 < -2147483600.0 )
    {
      v60 = 0x80000000;
    }
    else if ( v67 < 2147483600.0 )
    {
      v60 = (int)floorf_0(v67);
    }
    if ( v66 < v60 )
    {
      if ( v64 )
      {
        if ( v66 < 0 || v60 > rect.bottom )
          goto LABEL_69;
        rect.top = v66;
      }
      else
      {
        if ( v66 > 0 )
        {
          if ( v66 >= rect.bottom )
            rect.top = rect.bottom - 1;
          else
            rect.top = v66;
        }
        if ( v60 >= rect.bottom )
          goto LABEL_69;
        if ( v60 <= 0 )
        {
          rect.bottom = 1;
          goto LABEL_69;
        }
      }
      rect.bottom = v60;
    }
LABEL_69:
    v68 = v105;
    v69 = 0;
    v70 = 0;
    v103 = 0;
    v71 = *((_DWORD *)v105 + 80);
    v100 = v71;
    v147[0] = v138;
    if ( !v71 )
      goto LABEL_163;
    v72 = 0LL;
    v73 = v71;
    do
    {
      v74 = *((_QWORD *)v68 + 37);
      v75 = *(_DWORD *)(v72 + v74 + 32);
      v76 = *(_DWORD *)(v72 + v74 + 24);
      if ( v75 > v76 )
      {
        v77 = *(_DWORD *)(v72 + v74 + 36);
        v78 = *(_DWORD *)(v72 + v74 + 28);
        if ( v77 > v78 )
        {
          if ( rect.right > (unsigned int)rect.left )
          {
            if ( rect.bottom > v78
              && rect.bottom > (unsigned int)rect.top
              && v75 > rect.left
              && rect.right > v76
              && v77 > rect.top )
            {
              v79 = *(HRGN *)(v72 + v74 + 40);
              if ( !v79 || (v97 = !RectInRegion(v79, &rect), v69 = v103, !v97) )
              {
                if ( v70 )
                  goto LABEL_163;
                v70 = 1;
                v109 = *(_QWORD *)(v72 + v74 + 16);
              }
            }
            v68 = v105;
          }
          v73 = v100;
        }
      }
      ++v69;
      v72 += 96LL;
      v103 = v69;
    }
    while ( v69 < v73 );
    if ( !v70 )
    {
LABEL_163:
      v109 = 0LL;
      if ( !(unsigned __int8)CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v105, v147, &v109) )
        goto LABEL_108;
    }
    v4 = *((_QWORD *)v32 + 62);
  }
  if ( !v4 )
    goto LABEL_108;
  v80 = v109;
  while ( 1 )
  {
    v81 = *(_DWORD *)(v4 + 152);
    if ( v81 != DisplayId::None && v21 != v81 )
      goto LABEL_166;
    if ( !v80 )
      break;
    if ( v4 == v80 )
      goto LABEL_92;
LABEL_166:
    v4 = *(_QWORD *)(v4 + 336);
    if ( !v4 )
      goto LABEL_108;
  }
  if ( !CHwBitmapColorSource::CheckRequiredRealizationBounds((_DWORD *)v4, (__int64)&v135, v99, v107, 1) )
    goto LABEL_166;
LABEL_92:
  v106 = v4;
  (**(void (__fastcall ***)(__int64))v4)(v4);
  v82 = v112;
  *(_DWORD *)(v4 + 92) = v20;
  v83 = v82[8];
  if ( v99 )
    *(_DWORD *)(v4 + 24) = 2;
  else
    *(_DWORD *)(v4 + 24) = 1;
  if ( v83 )
    *(_QWORD *)(v4 + 36) = *(_QWORD *)v83;
  else
    *(_QWORD *)(v4 + 36) = 0LL;
  v84 = *(CMILRefCountBase **)(v4 + 264);
  if ( v84 )
  {
    CMILRefCountBase::Release(v84);
    *(_QWORD *)(v4 + 264) = 0LL;
  }
  v85 = CHwBitmapColorSource::CalcTextureTransform(
          (CHwBitmapColorSource *)v4,
          (const struct MILMatrix3x2 *)v114,
          (const struct BitmapToXSpaceTransform *)v139);
  v86 = v85;
  if ( v85 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v85, 0x13Eu);
  }
  else
  {
    v106 = 0LL;
    *(_QWORD *)v113 = v4;
    v4 = 0LL;
  }
LABEL_100:
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 )
    {
      v98 = (void (__fastcall ***)(_QWORD, struct IMILCacheableResource *))*((_QWORD *)v32 + 2);
      if ( v98 )
        (**v98)(*((_QWORD *)v32 + 2), v32);
      else
        (*(void (__fastcall **)(struct IMILCacheableResource *, __int64))(*(_QWORD *)v32 + 16LL))(v32, 1LL);
    }
    v25 = v111;
    v4 = v106;
  }
  if ( v4 )
    CMILRefCountBase::Release((CMILRefCountBase *)v4);
  if ( v25 )
    (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v25 + 16LL))(v25);
  return v86;
}
