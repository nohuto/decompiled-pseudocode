/*
 * XREFs of ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800838A0
 * Callers:
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18002F948 (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A9C0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18005AD00 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18005B70C (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x180081B80 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180082D70 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800832A4 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z @ 0x1800834A0 (-GetResource@CMILResourceCache@@UEAAJKPEAPEAUIMILCacheableResource@@@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180084D70 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800A4194 (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180161FF0 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x1801797E4 (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18017E274 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBrushAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct CMILBrushBitmap *a2,
        const struct CHwBrushContext *a3,
        struct CHwTexturedColorSource **a4)
{
  __m128 v4; // xmm1
  int v5; // eax
  const struct CHwBrushContext *v6; // r11
  __int64 v9; // rsi
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  const struct CMILMatrix *v12; // r9
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // eax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int64 v23; // r8
  int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // ebx
  int v28; // edi
  int v29; // edx
  bool v30; // zf
  __int128 v31; // xmm0
  CBitmap *v32; // r15
  __int64 (__fastcall **v33)(_QWORD, _QWORD, _QWORD); // rax
  unsigned int v34; // r13d
  int v35; // eax
  int v36; // r12d
  __int64 (__fastcall *v37)(CMILResourceCache *, unsigned int, void ****); // rax
  int Resource; // eax
  char *v39; // r13
  __int64 v40; // r12
  CBitmap *v41; // r14
  CBitmap *v42; // rcx
  __int64 (__fastcall *v43)(CBitmap *__hidden, unsigned int *, unsigned int *); // rax
  int Size; // eax
  float v45; // xmm8_4
  float v46; // xmm14_4
  float v47; // xmm13_4
  float v48; // xmm7_4
  float v49; // xmm15_4
  float v50; // xmm1_4
  float v51; // xmm6_4
  float v52; // xmm9_4
  float *v53; // rax
  int v54; // ecx
  float v55; // xmm10_4
  float v56; // xmm5_4
  float v57; // xmm8_4
  float v58; // xmm7_4
  float v59; // xmm4_4
  float v60; // xmm2_4
  int v61; // edx
  float v62; // xmm7_4
  float *v63; // rcx
  float v64; // xmm8_4
  float v65; // xmm10_4
  float v66; // xmm0_4
  LONG right; // r13d
  float v68; // xmm2_4
  int v69; // r14d
  LONG v70; // esi
  float v71; // xmm0_4
  LONG v72; // ecx
  int v73; // r12d
  float v74; // xmm7_4
  int v75; // esi
  float v76; // xmm6_4
  unsigned int bottom; // r11d
  char *v78; // rcx
  char v79; // r12
  unsigned int v80; // r13d
  unsigned int v81; // edx
  __int64 v82; // rsi
  unsigned int v83; // eax
  __int64 v84; // r14
  unsigned int v85; // edx
  unsigned int v86; // r8d
  unsigned int v87; // r9d
  unsigned int v88; // r10d
  HRGN v89; // rcx
  int v90; // eax
  const struct CHwBrushContext *v91; // r8
  _QWORD *v92; // rdx
  struct CHwBitmapColorSource *v93; // rbx
  struct CHwBitmapColorSource *v94; // rdi
  CMILRefCountBase *v95; // rcx
  int v96; // eax
  unsigned int v97; // ebx
  int v99; // eax
  __int64 v100; // r9
  char v101; // cl
  float v102; // xmm2_4
  float v103; // xmm1_4
  _OWORD *v104; // rax
  __int128 v105; // xmm1
  __int128 v106; // xmm0
  __int128 v107; // xmm1
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  int v111; // eax
  float v112; // xmm1_4
  float v113; // xmm1_4
  BOOL v114; // eax
  struct CHwBitmapColorSource *v115; // rbx
  void (__fastcall ***v116)(_QWORD, char *); // rcx
  float v117; // [rsp+60h] [rbp-A0h]
  unsigned int v118; // [rsp+60h] [rbp-A0h]
  int v119; // [rsp+64h] [rbp-9Ch]
  char *v120; // [rsp+68h] [rbp-98h]
  __int64 v121; // [rsp+70h] [rbp-90h]
  int v122; // [rsp+78h] [rbp-88h]
  char *v123; // [rsp+80h] [rbp-80h]
  struct IMILCacheableResource *v124; // [rsp+88h] [rbp-78h] BYREF
  __int64 v125; // [rsp+90h] [rbp-70h] BYREF
  __int64 v126[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v127; // [rsp+B0h] [rbp-50h]
  __int128 v128; // [rsp+C0h] [rbp-40h]
  __int128 v129; // [rsp+D0h] [rbp-30h]
  int v130; // [rsp+E0h] [rbp-20h]
  CMILResourceCache *v131; // [rsp+F0h] [rbp-10h] BYREF
  CBitmap *v132; // [rsp+F8h] [rbp-8h]
  struct CHwBitmapColorSource *v133; // [rsp+100h] [rbp+0h]
  const struct CHwBrushContext *v134; // [rsp+108h] [rbp+8h]
  __int64 v135; // [rsp+110h] [rbp+10h]
  _DWORD v136[6]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v137[2]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v138; // [rsp+140h] [rbp+40h]
  __int128 v139; // [rsp+150h] [rbp+50h]
  __int128 v140; // [rsp+160h] [rbp+60h]
  int v141; // [rsp+170h] [rbp+70h]
  CD3DDeviceLevel1 *v142; // [rsp+180h] [rbp+80h]
  __int64 v143; // [rsp+190h] [rbp+90h] BYREF
  int v144; // [rsp+198h] [rbp+98h]
  char v145; // [rsp+19Ch] [rbp+9Ch]
  int v146; // [rsp+1A0h] [rbp+A0h]
  bool v147; // [rsp+1A4h] [rbp+A4h]
  int v148; // [rsp+1A8h] [rbp+A8h]
  int v149; // [rsp+1ACh] [rbp+ACh]
  int v150; // [rsp+1B0h] [rbp+B0h]
  int v151; // [rsp+1B4h] [rbp+B4h]
  int v152; // [rsp+1B8h] [rbp+B8h]
  char v153; // [rsp+1BCh] [rbp+BCh]
  __int128 v154; // [rsp+1C0h] [rbp+C0h]
  __int128 v155; // [rsp+1D0h] [rbp+D0h]
  int v156; // [rsp+1E0h] [rbp+E0h]
  __int128 v157; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v158; // [rsp+200h] [rbp+100h]
  __int128 v159; // [rsp+210h] [rbp+110h]
  __int128 v160; // [rsp+220h] [rbp+120h]
  int v161; // [rsp+230h] [rbp+130h]
  __m128 v162; // [rsp+240h] [rbp+140h]
  __m128 v163; // [rsp+250h] [rbp+150h]
  __int128 v164; // [rsp+260h] [rbp+160h]
  __m128 v165; // [rsp+270h] [rbp+170h]
  int v166; // [rsp+280h] [rbp+180h]
  char v167[64]; // [rsp+290h] [rbp+190h] BYREF
  RECT rect; // [rsp+2D0h] [rbp+1D0h] BYREF
  int v169; // [rsp+2E0h] [rbp+1E0h]
  unsigned int v170; // [rsp+2E4h] [rbp+1E4h] BYREF
  unsigned int v171; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v172; // [rsp+2ECh] [rbp+1ECh]
  __int128 v173; // [rsp+2F8h] [rbp+1F8h] BYREF
  __int64 *v174; // [rsp+308h] [rbp+208h]
  char v175; // [rsp+310h] [rbp+210h]
  __int128 v176; // [rsp+314h] [rbp+214h]
  __int128 v177; // [rsp+328h] [rbp+228h] BYREF
  __int64 v178; // [rsp+338h] [rbp+238h] BYREF
  int v179; // [rsp+340h] [rbp+240h]
  _DWORD v180[3]; // [rsp+344h] [rbp+244h] BYREF
  __int64 v181; // [rsp+350h] [rbp+250h]

  v4 = *((__m128 *)a2 + 8);
  v5 = *((_DWORD *)a2 + 48);
  v6 = a3;
  v136[0] = v4.m128_i32[0];
  v162 = v4;
  v9 = 0LL;
  v10 = *((__m128 *)a2 + 9);
  v135 = (__int64)a4;
  v11 = *((__m128 *)a2 + 11);
  v12 = (const struct CMILMatrix *)*((_QWORD *)a3 + 1);
  v13 = *((_OWORD *)a2 + 10);
  v134 = a3;
  v136[2] = v10.m128_i32[0];
  v136[4] = v11.m128_i32[0];
  v163 = v10;
  v165 = v11;
  v136[1] = _mm_shuffle_ps(v4, v4, 85).m128_u32[0];
  v14 = *((_OWORD *)a2 + 9);
  v142 = a1;
  v164 = v13;
  v15 = *((_OWORD *)a2 + 8);
  v121 = 0LL;
  v136[3] = _mm_shuffle_ps(v10, v10, 85).m128_u32[0];
  v136[5] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
  v133 = 0LL;
  v141 = 0;
  v166 = v5;
  if ( !*((_DWORD *)a2 + 31) )
  {
    *(_OWORD *)v126 = v15;
    v21 = *((_OWORD *)a2 + 10);
    v127 = v14;
    v22 = *((_OWORD *)a2 + 11);
    goto LABEL_5;
  }
  v16 = *((_DWORD *)a2 + 48);
  if ( v126 == (__int64 *)v12 )
  {
    v157 = v15;
    v106 = *((_OWORD *)a2 + 10);
    v161 = v16;
    v158 = v14;
    v107 = *((_OWORD *)a2 + 11);
    v159 = v106;
    v160 = v107;
    CMILMatrix::Multiply((CMILMatrix *)&v157, v12);
    v5 = v161;
    *(_OWORD *)v126 = v157;
    v21 = v159;
    v127 = v158;
    v22 = v160;
    goto LABEL_5;
  }
  *(_OWORD *)v126 = v15;
  v17 = *((_OWORD *)a2 + 10);
  v130 = v16;
  v127 = v14;
  v18 = *((_OWORD *)a2 + 11);
  v128 = v17;
  v129 = v18;
  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>((__int64)v126) )
  {
    v5 = *(_DWORD *)(v19 + 64);
    v20 = *(_OWORD *)(v19 + 16);
    *(_OWORD *)v126 = *(_OWORD *)v19;
    v21 = *(_OWORD *)(v19 + 32);
    v127 = v20;
    v22 = *(_OWORD *)(v19 + 48);
LABEL_5:
    v130 = v5;
LABEL_6:
    v129 = v22;
    v128 = v21;
    goto LABEL_7;
  }
  CMILMatrix::Ensure3DFlags((CMILMatrix *)v19);
  v101 = *(_BYTE *)(v100 + 64);
  if ( (v101 & 3) != 1 )
  {
    if ( (v101 & 0xC) != 4 )
    {
      if ( (v101 & 0xC0) == 0x40 )
      {
        v102 = *(float *)(v100 + 20);
        v103 = *(float *)v100;
      }
      else
      {
        if ( (*(_BYTE *)(v100 + 65) & 0xC) != 4 )
        {
          v104 = (_OWORD *)Windows::Foundation::Numerics::operator*(v167, v126, v100);
          v130 = 0;
          v105 = v104[1];
          *(_OWORD *)v126 = *v104;
          v21 = v104[2];
          v127 = v105;
          v22 = v104[3];
          goto LABEL_6;
        }
        CMILMatrix::Rotate90((CMILMatrix *)v126);
        v102 = *(float *)(v100 + 4);
        LODWORD(v103) = *(_DWORD *)(v100 + 16) ^ _xmm;
      }
      CMILMatrix::Scale((CMILMatrix *)v126, v103, v102, *(float *)(v100 + 40));
    }
    CMILMatrix::Translate((CMILMatrix *)v126, *(float *)(v100 + 48), *(float *)(v100 + 52), *(float *)(v100 + 56));
  }
LABEL_7:
  v23 = *(_QWORD *)v6;
  v175 = 0;
  if ( *(_BYTE *)(v23 + 68) )
  {
    v24 = *((_DWORD *)a2 + 48);
    v108 = *((_OWORD *)a2 + 9);
    *(_OWORD *)v137 = *((_OWORD *)a2 + 8);
    v25 = *((_OWORD *)a2 + 10);
    v138 = v108;
    v26 = *((_OWORD *)a2 + 11);
  }
  else
  {
    v24 = v130;
    *(_OWORD *)v137 = *(_OWORD *)v126;
    v25 = v128;
    v138 = v127;
    v26 = v129;
  }
  v27 = *((_DWORD *)a2 + 66);
  v28 = *((_DWORD *)v6 + 10);
  v29 = *((_DWORD *)v6 + 6);
  v141 = v24;
  v174 = v137;
  v30 = *((_DWORD *)v6 + 5) == 1;
  v139 = v25;
  v31 = *((_OWORD *)v6 + 3);
  LOBYTE(v156) = 0;
  v140 = v26;
  v145 = *(_BYTE *)(v23 + 200);
  v119 = *(_DWORD *)(v23 + 180);
  v144 = v119;
  v146 = *((_DWORD *)v6 + 4);
  v151 = *((_DWORD *)a2 + 30);
  v122 = *((_DWORD *)a2 + 52);
  v152 = v122;
  v155 = 0LL;
  v143 = (__int64)a2;
  v147 = v30;
  v148 = v29;
  v149 = v28;
  v150 = v27;
  v173 = v31;
  v154 = _xmm;
  if ( (v27 & 2) == 0 || a2 == (struct CMILBrushBitmap *)-228LL )
  {
    v153 = 0;
  }
  else
  {
    v109 = *(_OWORD *)((char *)a2 + 228);
    v153 = 1;
    v110 = *(_OWORD *)((char *)a2 + 244);
    v111 = *((_DWORD *)a2 + 65);
    v154 = v109;
    v155 = v110;
    v156 = v111;
  }
  v32 = (CBitmap *)*((_QWORD *)a2 + 25);
  if ( !v32 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xBAu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xE1u);
    return 2147500037LL;
  }
  v33 = *(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
  v132 = (CBitmap *)*((_QWORD *)a2 + 25);
  ((void (__fastcall *)(CBitmap *))v33[1])(v132);
  v34 = *((_DWORD *)a1 + 108);
  v131 = 0LL;
  v124 = 0LL;
  v123 = 0LL;
  if ( v34 == -1 )
  {
    v36 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x5Cu);
  }
  else
  {
    v35 = (**(__int64 (__fastcall ***)(CBitmap *, GUID *, CMILResourceCache **))v32)(
            v32,
            &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8,
            &v131);
    v36 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x5Fu);
    }
    else
    {
      v37 = *(__int64 (__fastcall **)(CMILResourceCache *, unsigned int, void ****))(*(_QWORD *)v131 + 24LL);
      if ( v37 == CMILResourceCache::GetResource )
        Resource = CMILResourceCache::GetResource(v131, v34, (void ****)&v124);
      else
        Resource = v37(v131, v34, (void ****)&v124);
      v36 = Resource;
      if ( Resource >= 0 )
      {
        if ( v124 )
          v39 = (char *)v124 - 128;
        else
          v39 = 0LL;
        v123 = v39;
        v124 = 0LL;
        goto LABEL_20;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Resource, 0x62u);
    }
  }
  if ( v124 )
    (*(void (__fastcall **)(struct IMILCacheableResource *))(*(_QWORD *)v124 + 8LL))(v124);
  v39 = 0LL;
LABEL_20:
  if ( v131 )
    (*(void (__fastcall **)(CMILResourceCache *))(*(_QWORD *)v131 + 16LL))(v131);
  if ( v36 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0xEAu);
    goto LABEL_115;
  }
  if ( v119 > 1 )
  {
    v119 = 1;
    v144 = 1;
  }
  if ( v39 )
  {
    v9 = *((_QWORD *)v39 + 62);
    v40 = 0LL;
    v121 = 0LL;
    if ( !v9 )
      goto LABEL_114;
    v41 = (CBitmap *)*((_QWORD *)a2 + 25);
    v125 = 0LL;
    if ( (*(unsigned int (__fastcall **)(CBitmap *))(*(_QWORD *)v41 + 80LL))(v41) != 3 )
      goto LABEL_89;
    v120 = (char *)v41 - 16;
    if ( v41 == (CBitmap *)16 )
      v42 = 0LL;
    else
      v42 = v41;
    v43 = *(__int64 (__fastcall **)(CBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v42 + 56LL);
    if ( v43 == CBitmap::GetSize )
      Size = CBitmap::GetSize(v42, &v170, &v171);
    else
      Size = v43(v42, &v170, &v171);
    if ( Size < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x21Eu);
      goto LABEL_114;
    }
    v45 = *((float *)v137 + 1);
    v46 = *(float *)v137;
    v47 = *((float *)&v138 + 1);
    v48 = *(float *)&v138;
    v49 = *((float *)&v140 + 1);
    v117 = *(float *)&v140;
    v172 = v122;
    rect.right = v170;
    v169 = v119;
    v50 = (float)(*(float *)v137 * *((float *)&v138 + 1)) - (float)(*((float *)v137 + 1) * *(float *)&v138);
    *(_QWORD *)&rect.left = 0LL;
    rect.bottom = v171;
    if ( v50 == 0.0 )
      goto LABEL_114;
    v51 = FLOAT_1_0;
    v52 = 1.0 / v50;
    if ( !_finite((float)(1.0 / v50)) )
      goto LABEL_114;
    v53 = (float *)&v178;
    v54 = 4;
    LODWORD(v55) = COERCE_UNSIGNED_INT(v52 * v48) ^ _xmm;
    LODWORD(v56) = COERCE_UNSIGNED_INT(v52 * v45) ^ _xmm;
    v180[0] = DWORD1(v173);
    v178 = v173;
    v179 = DWORD2(v173);
    v180[1] = v173;
    v180[2] = HIDWORD(v173);
    v57 = (float)((float)(v45 * v117) - (float)(v46 * v49)) * v52;
    v181 = *((_QWORD *)&v173 + 1);
    v58 = (float)((float)(v48 * v49) - (float)(v47 * v117)) * v52;
    do
    {
      v59 = *v53;
      *v53 = (float)((float)(v55 * v53[1]) + (float)((float)(v52 * v47) * *v53)) + v58;
      v53[1] = (float)((float)((float)(v52 * v46) * v53[1]) + (float)(v56 * v59)) + v57;
      v53 += 2;
      --v54;
    }
    while ( v54 );
    v60 = *(float *)&v178;
    v61 = 1;
    v62 = *((float *)&v178 + 1);
    v63 = (float *)v180;
    v64 = *(float *)&v178;
    *(_QWORD *)&v176 = v178;
    v65 = *((float *)&v178 + 1);
    *((_QWORD *)&v176 + 1) = v178;
    do
    {
      v66 = *(v63 - 1);
      if ( v60 > v66 )
      {
        v60 = *(v63 - 1);
        *(float *)&v176 = v60;
      }
      else if ( v66 > v64 )
      {
        v64 = *(v63 - 1);
        *((float *)&v176 + 2) = v64;
      }
      if ( v62 > *v63 )
      {
        v62 = *v63;
        *((float *)&v176 + 1) = *v63;
      }
      else if ( *v63 > v65 )
      {
        v65 = *v63;
        *((float *)&v176 + 3) = *v63;
      }
      ++v61;
      v63 += 2;
    }
    while ( (unsigned __int64)v61 < 4 );
    right = rect.right;
    v175 = 1;
    if ( rect.right != v170 )
    {
      v112 = (float)rect.right / (float)(int)v170;
      v60 = v60 * v112;
      v64 = v64 * v112;
    }
    if ( rect.bottom != v171 )
    {
      v113 = (float)rect.bottom / (float)(int)v171;
      v62 = v62 * v113;
      v65 = v65 * v113;
    }
    if ( v169 )
      v51 = FLOAT_1_5;
    v68 = v60 - v51;
    v69 = 0x7FFFFFFF;
    if ( v68 < -2147483600.0 )
    {
      v70 = 0x80000000;
    }
    else if ( v68 >= 2147483600.0 )
    {
      v70 = 0x7FFFFFFF;
    }
    else
    {
      v70 = (int)ceilf_0(v68);
    }
    v71 = v51 + v64;
    if ( (float)(v51 + v64) < -2147483600.0 )
    {
      v72 = 0x80000000;
    }
    else if ( v71 >= 2147483600.0 )
    {
      v72 = 0x7FFFFFFF;
    }
    else
    {
      v72 = (int)floorf_0(v71);
    }
    v73 = v172;
    if ( v70 < v72 )
    {
      if ( v172 )
      {
        if ( v70 < 0 || v72 > right )
          goto LABEL_61;
        rect.left = v70;
      }
      else
      {
        if ( v70 > 0 )
        {
          if ( v70 >= right )
            rect.left = right - 1;
          else
            rect.left = v70;
        }
        if ( v72 >= right )
          goto LABEL_61;
        if ( v72 <= 0 )
        {
          rect.right = 1;
          goto LABEL_61;
        }
      }
      rect.right = v72;
    }
LABEL_61:
    v74 = v62 - v51;
    if ( v74 < -2147483600.0 )
    {
      v75 = 0x80000000;
    }
    else if ( v74 >= 2147483600.0 )
    {
      v75 = 0x7FFFFFFF;
    }
    else
    {
      v75 = (int)ceilf_0(v74);
    }
    v76 = v51 + v65;
    if ( v76 < -2147483600.0 )
    {
      v69 = 0x80000000;
    }
    else if ( v76 < 2147483600.0 )
    {
      v69 = (int)floorf_0(v76);
    }
    bottom = rect.bottom;
    if ( v75 < v69 )
    {
      if ( v73 )
      {
        if ( v75 < 0 || v69 > rect.bottom )
          goto LABEL_71;
        rect.top = v75;
      }
      else
      {
        if ( v75 > 0 )
        {
          if ( v75 >= rect.bottom )
            rect.top = rect.bottom - 1;
          else
            rect.top = v75;
        }
        if ( v69 >= rect.bottom )
          goto LABEL_71;
        if ( v69 <= 0 )
        {
          bottom = 1;
          rect.bottom = 1;
          goto LABEL_71;
        }
      }
      rect.bottom = v69;
      bottom = v69;
    }
LABEL_71:
    v78 = v120;
    v79 = 0;
    v80 = 0;
    v81 = *((_DWORD *)v120 + 80);
    v118 = v81;
    v177 = v176;
    if ( v81 )
    {
      v82 = 0LL;
      v83 = v81;
      do
      {
        v84 = *((_QWORD *)v78 + 37);
        v85 = *(_DWORD *)(v82 + v84 + 32);
        v86 = *(_DWORD *)(v82 + v84 + 24);
        if ( v85 > v86 )
        {
          v87 = *(_DWORD *)(v82 + v84 + 36);
          v88 = *(_DWORD *)(v82 + v84 + 28);
          if ( v87 > v88 )
          {
            if ( rect.right > (unsigned int)rect.left )
            {
              if ( bottom > rect.top && v85 > rect.left && rect.right > v86 && v87 > rect.top && bottom > v88 )
              {
                v89 = *(HRGN *)(v82 + v84 + 40);
                if ( !v89 || (v114 = RectInRegion(v89, &rect), bottom = rect.bottom, v114) )
                {
                  if ( v79 )
                    goto LABEL_174;
                  v79 = 1;
                  v125 = *(_QWORD *)(v82 + v84 + 16);
                }
              }
              v78 = v120;
            }
            v83 = v118;
          }
        }
        ++v80;
        v82 += 96LL;
      }
      while ( v80 < v83 );
      if ( v79 )
        goto LABEL_88;
    }
LABEL_174:
    v125 = 0LL;
    if ( (unsigned __int8)CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v120, &v177, &v125) )
    {
LABEL_88:
      v39 = v123;
      v40 = v125;
      v9 = *((_QWORD *)v123 + 62);
LABEL_89:
      if ( v9 )
      {
        while ( 1 )
        {
          v90 = *(_DWORD *)(v9 + 152);
          if ( v90 == DisplayId::None || v28 == v90 )
          {
            if ( v40 )
            {
              if ( v9 == v40 )
                goto LABEL_93;
            }
            else if ( CHwBitmapColorSource::CheckRequiredRealizationBounds((_DWORD *)v9, (__int64)&v173, v119, v122, 1) )
            {
LABEL_93:
              v121 = v9;
              (**(void (__fastcall ***)(__int64))v9)(v9);
              v91 = v134;
              *(_DWORD *)(v9 + 92) = v27;
              v92 = (_QWORD *)*((_QWORD *)v91 + 8);
              if ( v119 )
                *(_DWORD *)(v9 + 24) = 2;
              else
                *(_DWORD *)(v9 + 24) = 1;
              if ( v92 )
                *(_QWORD *)(v9 + 36) = *v92;
              else
                *(_QWORD *)(v9 + 36) = 0LL;
              v93 = v133;
              v94 = v133;
              if ( v133 )
                (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v133)(v133);
              v95 = *(CMILRefCountBase **)(v9 + 264);
              if ( v95 )
              {
                CMILRefCountBase::Release(v95);
                *(_QWORD *)(v9 + 264) = 0LL;
              }
              if ( v93 )
              {
                do
                {
                  v115 = (struct CHwBitmapColorSource *)*((_QWORD *)v94 + 33);
                  *((_QWORD *)v94 + 33) = 0LL;
                  CHwBitmapColorSource::CheckAndSetReusableSource((CHwBitmapColorSource *)v9, v94);
                  CMILRefCountBase::Release(v94);
                  v94 = v115;
                }
                while ( v115 );
              }
              v96 = CHwBitmapColorSource::CalcTextureTransform(
                      (CHwBitmapColorSource *)v9,
                      (const struct MILMatrix3x2 *)v136,
                      (const struct BitmapToXSpaceTransform *)v137);
              v97 = v96;
              if ( v96 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v96, 0x12Eu);
              }
              else
              {
                v121 = 0LL;
                *(_QWORD *)v135 = v9;
                v9 = 0LL;
              }
              goto LABEL_104;
            }
          }
          v9 = *(_QWORD *)(v9 + 336);
          if ( !v9 )
            goto LABEL_114;
        }
      }
      goto LABEL_114;
    }
    v39 = v123;
LABEL_114:
    CHwBitmapCache::TryForLastUsedBitmapColorSource((CHwBitmapCache *)v39, (__int64)&v143, (int)&v173);
    v9 = 0LL;
  }
LABEL_115:
  v99 = CHwBitmapColorSource::DeriveFromBitmapAndContext(
          v142,
          v32,
          (__int64)v136,
          (__int64)v126,
          (__int64)v137,
          *(_DWORD *)(*(_QWORD *)v134 + 204LL),
          *((_DWORD *)v134 + 11),
          *((_QWORD *)v134 + 8),
          (__int64)&v143,
          v135);
  v97 = v99;
  if ( v99 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v99, 0x117u);
LABEL_104:
  if ( v39 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v39 + 2, 0xFFFFFFFF) == 1 )
    {
      v116 = (void (__fastcall ***)(_QWORD, char *))*((_QWORD *)v39 + 2);
      if ( v116 )
        (**v116)(v116, v39);
      else
        (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v39 + 16LL))(v39, 1LL);
    }
    v32 = v132;
    v9 = v121;
  }
  if ( v133 )
    CMILRefCountBase::Release(v133);
  if ( v9 )
    CMILRefCountBase::Release((CMILRefCountBase *)v9);
  if ( v32 )
    (*(void (__fastcall **)(CBitmap *))(*(_QWORD *)v32 + 16LL))(v32);
  return v97;
}
