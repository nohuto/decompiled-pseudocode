/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004720
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1800085B0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x18007B820 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 * Callees:
 *     ?DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@@PEAIPEA_N@Z @ 0x180006B44 (-DeriveOverlayRotationParameters@COverlayContext@@QEAA_NAEBVCMILMatrix@@PEAW4DXGI_MODE_ROTATION@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@222W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180006BFC (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEAV-$TMilR.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x180019E68 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEA_N@Z @ 0x18001FC34 (-DoesImageOcclude@COcclusionContext@@AEAAJPEAUIUnknown@@U-$TMILFlagsEnum@W4FlagsEnum@MilSourceMo.c)
 *     ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18001FDAC (-DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x1800222FC (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180058EE0 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180077F5C (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_xd @ 0x1800EDCB0 (Template_xd.c)
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6270 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV-$TMilRect_@MUMil.c)
 *     Template_xdddddddd @ 0x1800FAD1C (Template_xdddddddd.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int128 *a4,
        CShape *a5,
        unsigned int a6)
{
  __int128 *v6; // r15
  __int64 *v7; // rsi
  __int64 v8; // r14
  CShape *v9; // r12
  bool v10; // r13
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rcx
  char v14; // r13
  int DoesImageOcclude; // eax
  unsigned int v16; // edi
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm9_4
  float v25; // xmm8_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  int v28; // eax
  int v30; // eax
  __int64 (__fastcall *v31)(__int64 *, __int64 *); // rbx
  DXGI_MODE_ROTATION v32; // xmm0_4
  unsigned int v33; // xmm0_4
  float v34; // xmm0_4
  __int64 v35; // rbx
  __int64 v36; // rax
  char v37; // r15
  char v38; // r14
  char v39; // si
  unsigned __int8 v40; // al
  int v41; // edx
  int v42; // ecx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  _QWORD *v50; // rax
  int v51; // eax
  int v52; // eax
  _QWORD *v53; // rax
  bool v54; // [rsp+68h] [rbp-A0h] BYREF
  bool v55; // [rsp+69h] [rbp-9Fh]
  int v56; // [rsp+6Ch] [rbp-9Ch]
  int v57; // [rsp+70h] [rbp-98h]
  unsigned int v58; // [rsp+74h] [rbp-94h] BYREF
  DXGI_MODE_ROTATION v59[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v60; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v61; // [rsp+88h] [rbp-80h]
  float v62; // [rsp+90h] [rbp-78h]
  float v63; // [rsp+94h] [rbp-74h]
  _QWORD v64[3]; // [rsp+98h] [rbp-70h] BYREF
  __int64 v65[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v66; // [rsp+C0h] [rbp-48h] BYREF
  float v67; // [rsp+C8h] [rbp-40h]
  float v68; // [rsp+CCh] [rbp-3Ch]
  float v69; // [rsp+D0h] [rbp-38h] BYREF
  float v70; // [rsp+D4h] [rbp-34h]
  float v71; // [rsp+D8h] [rbp-30h]
  float v72; // [rsp+DCh] [rbp-2Ch]
  __int64 v73; // [rsp+E0h] [rbp-28h] BYREF
  float v74; // [rsp+E8h] [rbp-20h]
  float v75; // [rsp+ECh] [rbp-1Ch]
  __int128 *v76; // [rsp+F0h] [rbp-18h] BYREF
  float v77; // [rsp+F8h] [rbp-10h]
  float v78; // [rsp+FCh] [rbp-Ch]
  __int128 v79; // [rsp+108h] [rbp+0h] BYREF
  __int128 v80; // [rsp+118h] [rbp+10h]
  __int128 v81; // [rsp+128h] [rbp+20h]
  __int128 v82; // [rsp+138h] [rbp+30h]
  _OWORD v83[4]; // [rsp+148h] [rbp+40h] BYREF

  v56 = 0;
  v6 = a4;
  v64[0] = 0LL;
  v7 = a3;
  v60 = 0LL;
  v8 = a1;
  v9 = a5;
  v76 = a4;
  v61 = a3;
  v64[2] = a2;
  v73 = a1;
  v66 = (__int64)a5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0
    && (*(unsigned __int8 (__fastcall **)(__int64 *))(*a3 + 24))(a3) )
  {
    v30 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, float *))(*v7 + 184))(v7, 0LL, 0LL, &v69);
    v56 = v30;
    v16 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x764u);
      goto LABEL_43;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v31 = *(__int64 (__fastcall **)(__int64 *, __int64 *))(*v7 + 104);
      *(float *)&v32 = v72 + 6291456.25;
      v59[0] = v32;
      *(float *)&v33 = v71 + 6291456.25;
      v58 = v33;
      v34 = v70 + 6291456.25;
      v62 = v34;
      v63 = v69 + 6291456.25;
      v35 = *(_QWORD *)v31(v7, v65);
      v59[0] = v59[0] << 10 >> 11;
      v58 = (int)(v58 << 10) >> 11;
      v36 = *v7;
      v64[1] = v35;
      v37 = (*(__int64 (__fastcall **)(__int64 *))(v36 + 80))(v7);
      v38 = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 72))(v7);
      v39 = (*(__int64 (__fastcall **)(__int64 *))(*v7 + 96))(v7);
      v40 = (*(__int64 (__fastcall **)(__int64 *))(*v61 + 88))(v61);
      Template_xdddddddd(
        v42,
        v41,
        v35,
        v40,
        v39,
        v38,
        v37,
        (int)(LODWORD(v63) << 10) >> 11,
        (int)(LODWORD(v34) << 10) >> 11,
        v58,
        v59[0]);
      v7 = v61;
      v8 = v73;
      v6 = v76;
      v9 = (CShape *)v66;
    }
  }
  v10 = (*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 72))(v7)
     || (*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 88))(v7);
  v11 = *(_QWORD *)(v8 + 768);
  v55 = v10;
  v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v11 + 16) + 448LL))(*(_QWORD *)(v11 + 16));
  LOBYTE(v57) = v12;
  if ( !v10 && !v12 || (*(int (__fastcall **)(__int64 *, _QWORD *))(*v7 + 136))(v7, v64) < 0 )
    goto LABEL_55;
  v54 = 0;
  v14 = 0;
  DoesImageOcclude = COcclusionContext::DoesImageOcclude(v13, v7, a6, &v54);
  v56 = DoesImageOcclude;
  v16 = DoesImageOcclude;
  if ( DoesImageOcclude < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, DoesImageOcclude, 0x783u);
    goto LABEL_43;
  }
  if ( !v54 )
  {
    if ( (a6 & 2) != 0 || (*(unsigned __int8 (__fastcall **)(__int64 *))(*v7 + 168))(v7) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_43;
      v43 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v7 + 104))(v7, v65);
      v44 = *(unsigned int *)v43;
      v45 = v44 | ((__int64)(int)HIDWORD(*v43) << 32);
      v46 = 0LL;
      goto LABEL_103;
    }
    v14 = 1;
  }
  CBaseMatrixStack::Top((CBaseMatrixStack *)(v8 + 16), (struct CBaseMatrix *)v83);
  if ( *(_BYTE *)(v8 + 520) )
  {
    v47 = *(_OWORD *)(v8 + 540);
    v79 = *(_OWORD *)(v8 + 524);
    v48 = *(_OWORD *)(v8 + 556);
    v80 = v47;
    v49 = *(_OWORD *)(v8 + 572);
    v81 = v48;
    v82 = v49;
    D2DMatrixMultiply((struct D2DMatrix *)v83, (const struct D2DMatrix *)v83, (const struct D2DMatrix *)&v79);
  }
  if ( v6 )
  {
    v17 = v6[1];
    v79 = *v6;
    v18 = v6[2];
    v80 = v17;
    v19 = v6[3];
    v81 = v18;
    v82 = v19;
    D2DMatrixMultiply((struct D2DMatrix *)&v79, (const struct D2DMatrix *)&v79, (const struct D2DMatrix *)v83);
  }
  else
  {
    v79 = v83[0];
    v80 = v83[1];
    v81 = v83[2];
    v82 = v83[3];
  }
  v58 = 0;
  v54 = 1;
  v59[0] = DXGI_MODE_ROTATION_IDENTITY;
  if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving((CBaseMatrix *)v83)
    && COverlayContext::DeriveOverlayRotationParameters(
         *(COverlayContext **)(v8 + 768),
         (const struct CMILMatrix *)&v79,
         v59,
         &v58,
         &v54) )
  {
    if ( v9 && !CShape::IsAxisAlignedRectangle(v9) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_43;
      v50 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v7 + 104))(v7, v65);
      v46 = 2LL;
      goto LABEL_102;
    }
    *(_OWORD *)v65 = *(_OWORD *)(*(_QWORD *)(v8 + 768) + 40LL);
    CBaseClipStack::Top(v8 + 56, &v66);
    if ( *(_BYTE *)(v8 + 520) )
    {
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)(v8 + 524), (const struct MilRectF *)&v66, (struct MilRectF *)&v69);
      v23 = v69;
      v22 = v70;
      v21 = v71;
      v20 = v72;
    }
    else
    {
      v20 = v68;
      v21 = v67;
      v22 = *((float *)&v66 + 1);
      v23 = *(float *)&v66;
    }
    v24 = *(float *)v65;
    if ( v23 > *(float *)v65 )
    {
      v24 = v23;
      *(float *)v65 = v23;
    }
    v25 = *((float *)v65 + 1);
    if ( v22 > *((float *)v65 + 1) )
    {
      v25 = v22;
      *((float *)v65 + 1) = v22;
    }
    v26 = *(float *)&v65[1];
    if ( *(float *)&v65[1] > v21 )
    {
      v26 = v21;
      *(float *)&v65[1] = v21;
    }
    v27 = *((float *)&v65[1] + 1);
    if ( *((float *)&v65[1] + 1) > v20 )
    {
      v27 = v20;
      *((float *)&v65[1] + 1) = v20;
    }
    if ( v26 <= v24 || v27 <= v25 )
    {
      v27 = 0.0;
      v26 = 0.0;
      v25 = 0.0;
      v24 = 0.0;
      v65[1] = 0LL;
      v65[0] = 0LL;
    }
    if ( v9 )
    {
      v51 = (*(__int64 (__fastcall **)(CShape *, __int128 **, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, &v76, 0LL);
      v56 = v51;
      v16 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x7E9u);
        goto LABEL_43;
      }
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)v83, (const struct MilRectF *)&v76, (struct MilRectF *)&v76);
      if ( *(float *)&v76 > v24 )
      {
        v24 = *(float *)&v76;
        LODWORD(v65[0]) = (_DWORD)v76;
      }
      if ( *((float *)&v76 + 1) > v25 )
      {
        v25 = *((float *)&v76 + 1);
        HIDWORD(v65[0]) = HIDWORD(v76);
      }
      if ( v26 > v77 )
      {
        v26 = v77;
        *(float *)&v65[1] = v77;
      }
      if ( v27 > v78 )
      {
        v27 = v78;
        *((float *)&v65[1] + 1) = v78;
      }
      if ( v26 <= v24 || v27 <= v25 )
      {
        v27 = 0.0;
        v26 = 0.0;
        v25 = 0.0;
        v24 = 0.0;
        v65[1] = 0LL;
        v65[0] = 0LL;
      }
    }
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v65) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) == 0 )
        goto LABEL_43;
      v50 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v7 + 104))(v7, v65);
      v46 = 3LL;
      goto LABEL_102;
    }
    if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *))v64[0])(
           v64[0],
           &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6,
           &v60) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _OWORD *, float *, __int64 *, __int64 *))(*(_QWORD *)v60 + 24LL))(
        v60,
        0LL,
        v83,
        &v69,
        &v73,
        &v66);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v79, (const struct MilRectF *)&v66, (struct MilRectF *)&v66);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v79, (const struct MilRectF *)&v73, (struct MilRectF *)&v73);
      if ( *(float *)&v73 > v24 )
      {
        v24 = *(float *)&v73;
        LODWORD(v65[0]) = v73;
      }
      if ( *((float *)&v73 + 1) > v25 )
      {
        v25 = *((float *)&v73 + 1);
        HIDWORD(v65[0]) = HIDWORD(v73);
      }
      if ( v26 > v74 )
      {
        v26 = v74;
        *(float *)&v65[1] = v74;
      }
      if ( v27 <= v75 )
        goto LABEL_37;
      v27 = v75;
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, _OWORD *, float *))(*v7 + 112))(v7, v83, &v69);
      CBaseMatrix::Transform2DBounds((CBaseMatrix *)&v79, (const struct MilRectF *)&v69, (struct MilRectF *)&v66);
      if ( *(float *)&v66 > v24 )
      {
        v24 = *(float *)&v66;
        LODWORD(v65[0]) = v66;
      }
      if ( *((float *)&v66 + 1) > v25 )
      {
        v25 = *((float *)&v66 + 1);
        HIDWORD(v65[0]) = HIDWORD(v66);
      }
      if ( v26 > v67 )
      {
        v26 = v67;
        *(float *)&v65[1] = v67;
      }
      if ( v27 <= v68 )
        goto LABEL_37;
      v27 = v68;
    }
    *((float *)&v65[1] + 1) = v27;
LABEL_37:
    if ( v26 <= v24 || v27 <= v25 )
    {
      v65[1] = 0LL;
      v65[0] = 0LL;
    }
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v65) )
    {
      COcclusionContext::DeviceRectToPageInPixelsRect(v8, v65, &v73);
      if ( v55 )
      {
        v28 = COverlayContext::CheckAndRecordOverlayCandidate(
                *(struct COverlayContext **)(v8 + 768),
                (__int64)&v66,
                (__int64)v65,
                (__int64)&v73,
                v59[0],
                v58,
                v14,
                v54);
        v16 = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x835u);
          goto LABEL_43;
        }
      }
      else
      {
        v16 = v56;
      }
      if ( (_BYTE)v57 )
      {
        if ( !v14 )
        {
          v52 = COverlayContext::CheckAndNotifyFullScreenSwapChain(*(COverlayContext **)(v8 + 768));
          v16 = v52;
          if ( v52 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x83Au);
        }
      }
      goto LABEL_43;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v53 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v7 + 104))(v7, v65);
      Template_xd(
        *(unsigned int *)v53,
        &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE,
        *(unsigned int *)v53 | (unsigned __int64)((__int64)(int)HIDWORD(*v53) << 32),
        3LL);
    }
LABEL_55:
    v16 = v56;
    goto LABEL_43;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v50 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v7 + 104))(v7, v65);
    v46 = 1LL;
LABEL_102:
    v44 = *(unsigned int *)v50;
    v45 = v44 | ((__int64)(int)HIDWORD(*v50) << 32);
LABEL_103:
    Template_xd(v44, &EVTDESC_DISPLAYSURFACE_REJECTCANDIDATE, v45, v46);
  }
LABEL_43:
  if ( v60 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
  if ( v64[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v64[0] + 16LL))(v64[0]);
  return v16;
}
