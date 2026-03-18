/*
 * XREFs of ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180089D00
 * Callers:
 *     ?GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z @ 0x18002BE18 (-GetHwBrush@CHwBrushPool@@QEAAJPEAVCMILBrush@@AEBVCHwBrushContext@@QEAPEAVCHwBrush@@@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 * Callees:
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18001C694 (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x180031F60 (-CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800324C8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077160 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180088AB0 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180089BF4 (-RetrieveFromBitmapSource@CHwBitmapCache@@SAJPEAVIBitmapSource@@PEBVCD3DDeviceLevel1@@PEAPEAV1@@.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18008B728 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 *     ?DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEAVCHwBitmapCache@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBVMILMatrix3x2@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@PEBUBitmapToXSpaceTransform@@MHPEBUD2DVector2@@AEAUCacheContextParameters@1@PEAPEAVCHwTexturedColorSource@@@Z @ 0x18008C39C (-DeriveFromBitmapAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z @ 0x1800FA7F4 (-SetInverse@MILMatrix3x2@@QEAA_NMMMMMM@Z.c)
 *     ?GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAPEAVCHwDeviceBitmapColorSource@@@Z @ 0x180148FB0 (-GetSingleContributorToRealizationAreaNoRef@CBitmapOfDeviceBitmaps@@QEAA_NAEAV-$TMilRect_@MUMilR.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18014D290 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::DeriveFromBrushAndContext(
        struct CD3DDeviceLevel1 *a1,
        struct CMILBrushBitmap *a2,
        const struct CHwBrushContext *a3,
        struct CHwTexturedColorSource **a4)
{
  int v4; // r10d
  struct CMILBrushBitmap *v6; // r8
  char *v7; // rdx
  __int64 v8; // r15
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm0
  __int128 v13; // xmm3
  __int128 v14; // xmm2
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  const struct D2DMatrix *v17; // rax
  int v18; // r13d
  char v19; // cl
  __int128 v20; // xmm0
  int v21; // ebx
  char v22; // r9
  int v23; // edi
  int v24; // edx
  struct IBitmapSource *v25; // r14
  __int64 v26; // rax
  struct CD3DDeviceLevel1 *v27; // rsi
  int v28; // eax
  struct CHwBitmapCache *v29; // r13
  bool v30; // zf
  __int64 v31; // r15
  CBitmap *v32; // rsi
  int Size; // eax
  int v34; // esi
  char v35; // cl
  unsigned int v36; // edx
  __int64 v37; // r15
  __int64 v38; // rax
  unsigned int v39; // r10d
  int v40; // eax
  void (__fastcall **v41)(__int64); // rax
  _QWORD *v42; // rdx
  struct CHwBitmapColorSource *v43; // rdi
  struct CHwBitmapColorSource *v44; // rsi
  CMILRefCountBase *v45; // rcx
  int v46; // eax
  unsigned int v47; // esi
  int v49; // eax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  int v55; // eax
  char v56; // cl
  BOOL v57; // eax
  struct CHwBitmapColorSource *v58; // rbx
  void (__fastcall ***v59)(_QWORD, struct CHwBitmapCache *); // r14
  char v60; // [rsp+60h] [rbp-A0h]
  int v61; // [rsp+64h] [rbp-9Ch]
  bool v63[8]; // [rsp+68h] [rbp-98h]
  bool v64[8]; // [rsp+68h] [rbp-98h]
  __int64 v65; // [rsp+70h] [rbp-90h] BYREF
  struct CHwBitmapColorSource *v66; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+80h] [rbp-80h]
  struct CD3DDeviceLevel1 *v68; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+90h] [rbp-70h]
  __int64 v70; // [rsp+98h] [rbp-68h] BYREF
  struct CHwBitmapCache *v71; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v72)(CBitmap *, unsigned int *, unsigned int *); // [rsp+A8h] [rbp-58h]
  struct IBitmapSource *v73; // [rsp+B0h] [rbp-50h]
  __int64 v74; // [rsp+B8h] [rbp-48h]
  _DWORD v75[8]; // [rsp+C0h] [rbp-40h] BYREF
  struct CMILBrushBitmap *v76; // [rsp+E0h] [rbp-20h] BYREF
  int v77; // [rsp+E8h] [rbp-18h]
  char v78; // [rsp+ECh] [rbp-14h]
  int v79; // [rsp+F0h] [rbp-10h]
  char v80; // [rsp+F4h] [rbp-Ch]
  int v81; // [rsp+F8h] [rbp-8h]
  int v82; // [rsp+FCh] [rbp-4h]
  int v83; // [rsp+100h] [rbp+0h]
  int v84; // [rsp+104h] [rbp+4h]
  int v85; // [rsp+108h] [rbp+8h]
  char v86; // [rsp+10Ch] [rbp+Ch]
  __int128 v87; // [rsp+110h] [rbp+10h]
  __int128 v88; // [rsp+120h] [rbp+20h]
  int v89; // [rsp+130h] [rbp+30h]
  __int64 v90; // [rsp+140h] [rbp+40h]
  _BYTE v91[24]; // [rsp+148h] [rbp+48h] BYREF
  RECT rect; // [rsp+160h] [rbp+60h] BYREF
  int v93; // [rsp+170h] [rbp+70h] BYREF
  unsigned int v94; // [rsp+174h] [rbp+74h] BYREF
  unsigned int v95[4]; // [rsp+178h] [rbp+78h] BYREF
  __int128 v96; // [rsp+188h] [rbp+88h] BYREF
  float *v97; // [rsp+198h] [rbp+98h]
  char v98; // [rsp+1A0h] [rbp+A0h]
  __int128 v99; // [rsp+1A4h] [rbp+A4h] BYREF
  __int64 v100[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v101; // [rsp+1D0h] [rbp+D0h]
  __int128 v102; // [rsp+1E0h] [rbp+E0h]
  __int128 v103; // [rsp+1F0h] [rbp+F0h]
  __int64 v104[2]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v105; // [rsp+210h] [rbp+110h]
  __int128 v106; // [rsp+220h] [rbp+120h]
  __int128 v107; // [rsp+230h] [rbp+130h]
  _OWORD v108[5]; // [rsp+240h] [rbp+140h] BYREF

  v4 = 0;
  v74 = (__int64)a4;
  v6 = a2;
  v68 = a1;
  v7 = (char *)a2 + 128;
  v65 = 0LL;
  v8 = 0LL;
  v66 = 0LL;
  v71 = 0LL;
  v9 = *(_OWORD *)v7;
  v10 = *((_OWORD *)v7 + 1);
  v11 = *((_OWORD *)v7 + 3);
  v12 = *((_OWORD *)v7 + 2);
  v75[0] = *(_OWORD *)v7;
  v75[2] = v10;
  v75[4] = v11;
  v108[1] = v9;
  LODWORD(v9) = *((_DWORD *)v7 + 1);
  v108[2] = v10;
  LODWORD(v10) = *((_DWORD *)v7 + 5);
  v108[4] = v11;
  LODWORD(v11) = *((_DWORD *)v7 + 13);
  v75[1] = v9;
  v75[3] = v10;
  v75[5] = v11;
  v108[3] = v12;
  if ( *((_DWORD *)v6 + 31) )
  {
    D2DMatrixMultiply((struct D2DMatrix *)v104, (const struct D2DMatrix *)v7, *((const struct D2DMatrix **)a3 + 1));
    v13 = v107;
    v14 = v106;
    v15 = v105;
    v16 = *(_OWORD *)v104;
    v6 = a2;
  }
  else
  {
    v16 = *(_OWORD *)v7;
    v15 = *((_OWORD *)v7 + 1);
    v14 = *((_OWORD *)v7 + 2);
    v13 = *((_OWORD *)v7 + 3);
    *(_OWORD *)v104 = *(_OWORD *)v7;
    v105 = v15;
    v106 = v14;
    v107 = v13;
  }
  v17 = *(const struct D2DMatrix **)a3;
  v98 = v4;
  v97 = (float *)v100;
  if ( *((_BYTE *)v17 + 64) == (_BYTE)v4 )
  {
    *(_OWORD *)v100 = v16;
    v101 = v15;
    v102 = v14;
    v103 = v13;
  }
  else
  {
    v50 = *((_OWORD *)v7 + 1);
    *(_OWORD *)v100 = *(_OWORD *)v7;
    v51 = *((_OWORD *)v7 + 2);
    v101 = v50;
    v52 = *((_OWORD *)v7 + 3);
    v102 = v51;
    v103 = v52;
  }
  v18 = *((_DWORD *)v17 + 43);
  v19 = v4;
  v20 = *((_OWORD *)a3 + 3);
  v21 = *((_DWORD *)v6 + 64);
  if ( *((_DWORD *)a3 + 5) == 1 )
    v19 = 1;
  v22 = *((_BYTE *)v17 + 192);
  v23 = *((_DWORD *)a3 + 10);
  v24 = *((_DWORD *)a3 + 6);
  v79 = *((_DWORD *)a3 + 4);
  v84 = *((_DWORD *)v6 + 30);
  v69 = *((_DWORD *)v6 + 50);
  v85 = v69;
  v88 = 0LL;
  LOBYTE(v89) = v4;
  v76 = v6;
  v78 = v22;
  v61 = v18;
  v77 = v18;
  v80 = v19;
  v81 = v24;
  v82 = v23;
  v83 = v21;
  v96 = v20;
  v87 = _xmm;
  if ( (v21 & 2) == 0 || v6 == (struct CMILBrushBitmap *)-220LL )
  {
    v86 = v4;
  }
  else
  {
    v53 = *(_OWORD *)((char *)v6 + 220);
    v86 = 1;
    v54 = *(_OWORD *)((char *)v6 + 236);
    v55 = *((_DWORD *)v6 + 63);
    v87 = v53;
    v88 = v54;
    v89 = v55;
  }
  if ( v22 && g_pMediaControl )
  {
    v56 = v22;
    if ( *(_DWORD *)(*((_QWORD *)g_pMediaControl + 2) + 116LL) != v4 )
      v56 = v4;
    v78 = v56;
  }
  v25 = (struct IBitmapSource *)*((_QWORD *)v6 + 24);
  if ( !v25 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xBAu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xF1u);
    return 2147500037LL;
  }
  v26 = *(_QWORD *)v25;
  v73 = (struct IBitmapSource *)*((_QWORD *)v6 + 24);
  (*(void (__fastcall **)(struct IBitmapSource *))(v26 + 8))(v25);
  v27 = v68;
  v28 = CHwBitmapCache::RetrieveFromBitmapSource(v25, v68, &v71);
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xFAu);
    v29 = v71;
    goto LABEL_71;
  }
  if ( v18 > 1 )
  {
    v61 = 1;
    v77 = 1;
  }
  v29 = v71;
  if ( !v71 )
  {
LABEL_71:
    v49 = CHwBitmapColorSource::DeriveFromBitmapAndContext(
            v27,
            v25,
            (__int64)v75,
            (__int64)v104,
            (__int64)v100,
            *(_DWORD *)(*(_QWORD *)a3 + 196LL),
            *((_DWORD *)a3 + 11),
            *((_QWORD *)a3 + 8),
            (struct CHwBitmapColorSource::CacheContextParameters *)&v76,
            v74);
    v47 = v49;
    if ( v49 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0x127u);
    v43 = v66;
    goto LABEL_60;
  }
  v8 = *((_QWORD *)v71 + 62);
  v65 = 0LL;
  if ( !v8 )
    goto LABEL_70;
  v70 = 0LL;
  *(_QWORD *)v63 = *((_QWORD *)a2 + 24);
  if ( (*(unsigned int (__fastcall **)(bool *))(**(_QWORD **)v63 + 80LL))(*(bool **)v63) != 3 )
  {
    v34 = v61;
    goto LABEL_42;
  }
  v30 = *(_QWORD *)v63 == 16LL;
  v31 = *(_QWORD *)v63 - 16LL;
  *(_QWORD *)v64 = *(_QWORD *)v63 - 16LL;
  if ( v30 )
    v32 = 0LL;
  else
    v32 = (CBitmap *)(v31 + 16);
  v72 = *(__int64 (__fastcall **)(CBitmap *, unsigned int *, unsigned int *))(*(_QWORD *)v32 + 56LL);
  if ( v72 == CBitmap::GetSize )
    Size = CBitmap::GetSize(v32, &v94, v95);
  else
    Size = v72(v32, &v94, v95);
  if ( Size < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x235u);
    goto LABEL_101;
  }
  v34 = v61;
  v95[1] = v69;
  v93 = v61;
  *(_QWORD *)&rect.left = 0LL;
  rect.right = v94;
  rect.bottom = v95[0];
  if ( !(unsigned __int8)CHwBitmapColorSource::ComputeMinimumRealizationBounds((int *)&v96, &v93, &rect.left) )
    goto LABEL_101;
  if ( !v98 )
  {
    if ( !MILMatrix3x2::SetInverse((MILMatrix3x2 *)v91, *v97, v97[1], v97[4], v97[5], v97[12], v97[13]) )
      goto LABEL_26;
    MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v91, (const struct MilRectF *)&v96, (struct MilRectF *)&v99);
    v98 = 1;
  }
  v108[0] = v99;
LABEL_26:
  v35 = 0;
  v36 = 0;
  v60 = 0;
  LODWORD(v72) = *(_DWORD *)(v31 + 320);
  v67 = 0;
  if ( !(_DWORD)v72 )
    goto LABEL_96;
  v37 = 0LL;
  do
  {
    v38 = *(_QWORD *)(*(_QWORD *)v64 + 296LL);
    v90 = v38;
    v39 = *(_DWORD *)(v37 + v38 + 32);
    if ( v39 > *(_DWORD *)(v37 + v38 + 24)
      && *(_DWORD *)(v37 + v38 + 36) > *(_DWORD *)(v37 + v38 + 28)
      && rect.right > (unsigned int)rect.left
      && rect.bottom > (unsigned int)rect.top
      && v39 > rect.left
      && rect.right > *(_DWORD *)(v37 + v38 + 24)
      && *(_DWORD *)(v37 + v38 + 36) > rect.top
      && rect.bottom > *(_DWORD *)(v37 + v38 + 28) )
    {
      if ( *(_QWORD *)(v37 + v38 + 40) )
      {
        v57 = RectInRegion(*(HRGN *)(v37 + v38 + 40), &rect);
        v35 = v60;
        v36 = v67;
        if ( !v57 )
          goto LABEL_39;
        v38 = v90;
      }
      if ( v35 )
        goto LABEL_95;
      v35 = 1;
      v70 = *(_QWORD *)(v37 + v38 + 16);
      v60 = 1;
    }
LABEL_39:
    ++v36;
    v37 += 96LL;
    v67 = v36;
  }
  while ( v36 < (unsigned int)v72 );
  if ( v35 )
    goto LABEL_41;
LABEL_95:
  v31 = *(_QWORD *)v64;
LABEL_96:
  v70 = 0LL;
  if ( (unsigned __int8)CBitmapOfDeviceBitmaps::GetSingleContributorToRealizationAreaNoRef(v31, v108, &v70) )
  {
LABEL_41:
    v8 = *((_QWORD *)v29 + 62);
LABEL_42:
    while ( v8 )
    {
      v40 = *(_DWORD *)(v8 + 152);
      if ( v40 == DisplayId::None || v23 == v40 )
      {
        if ( v70 )
        {
          if ( v8 == v70 )
            goto LABEL_46;
        }
        else if ( CHwBitmapColorSource::CheckRequiredRealizationBounds((_DWORD *)v8, (__int64)&v96, v34, v69, 1) )
        {
LABEL_46:
          v41 = *(void (__fastcall ***)(__int64))v8;
          v65 = v8;
          (*v41)(v8);
          goto LABEL_47;
        }
      }
      v8 = *(_QWORD *)(v8 + 336);
    }
  }
LABEL_101:
  v27 = v68;
LABEL_70:
  CHwBitmapCache::TryForLastUsedBitmapColorSource(v29, (__int64)&v65, &v66);
  v8 = v65;
  if ( !v65 )
    goto LABEL_71;
  v34 = v61;
LABEL_47:
  *(_DWORD *)(v8 + 92) = v21;
  v42 = (_QWORD *)*((_QWORD *)a3 + 8);
  if ( v34 )
  {
    if ( v34 == 4 )
    {
      *(_DWORD *)(v8 + 24) = 3;
    }
    else if ( v34 == 5 )
    {
      *(_DWORD *)(v8 + 24) = *(_DWORD *)(*(_QWORD *)(v8 + 16) + 656LL);
    }
    else
    {
      *(_DWORD *)(v8 + 24) = 2;
    }
  }
  else
  {
    *(_DWORD *)(v8 + 24) = 1;
  }
  if ( v42 )
    *(_QWORD *)(v8 + 36) = *v42;
  else
    *(_QWORD *)(v8 + 36) = 0LL;
  v43 = v66;
  v44 = v66;
  if ( v66 )
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))v66)(v66);
  v45 = *(CMILRefCountBase **)(v8 + 264);
  if ( v45 )
  {
    CMILRefCountBase::Release(v45);
    *(_QWORD *)(v8 + 264) = 0LL;
  }
  if ( v43 )
  {
    do
    {
      v58 = (struct CHwBitmapColorSource *)*((_QWORD *)v44 + 33);
      *((_QWORD *)v44 + 33) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource((CHwBitmapColorSource *)v8, v44);
      CMILRefCountBase::Release(v44);
      v44 = v58;
    }
    while ( v58 );
  }
  v46 = CHwBitmapColorSource::CalcTextureTransform(
          (CHwBitmapColorSource *)v8,
          (const struct MILMatrix3x2 *)v75,
          (const struct BitmapToXSpaceTransform *)v100);
  v47 = v46;
  if ( v46 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x13Eu);
  }
  else
  {
    v65 = 0LL;
    *(_QWORD *)v74 = v8;
    v8 = 0LL;
  }
LABEL_60:
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v29 + 2, 0xFFFFFFFF) == 1 )
    {
      v59 = (void (__fastcall ***)(_QWORD, struct CHwBitmapCache *))*((_QWORD *)v71 + 2);
      if ( v59 )
        (**v59)(*((_QWORD *)v71 + 2), v71);
      else
        (*(void (__fastcall **)(struct CHwBitmapCache *, __int64))(*(_QWORD *)v71 + 16LL))(v71, 1LL);
    }
    v25 = v73;
    v8 = v65;
    v43 = v66;
  }
  if ( v43 )
    CMILRefCountBase::Release(v43);
  if ( v8 )
    CMILRefCountBase::Release((CMILRefCountBase *)v8);
  if ( v25 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v25 + 16LL))(v25);
  return v47;
}
