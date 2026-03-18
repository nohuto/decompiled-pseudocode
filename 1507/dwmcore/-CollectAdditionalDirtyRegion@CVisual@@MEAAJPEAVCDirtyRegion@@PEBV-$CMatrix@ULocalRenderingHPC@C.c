/*
 * XREFs of ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180036A70
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800396B0 (-PostSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UPageInPixels@2@@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18007CB50 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@PEBV-$CMatrix@ULocalRenderingH.c)
 * Callees:
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180022680 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x1800229A0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Initialize@CDirtyRegion@@QEAAX_KAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18003C97C (-Initialize@CDirtyRegion@@QEAAX_KAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003CD40 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SwapExisting@CMergedRect@@IEAAXII@Z @ 0x18005117C (-SwapExisting@CMergedRect@@IEAAXII@Z.c)
 *     ?Optimize@CMergedRect@@IEAAX_N@Z @ 0x1800511FC (-Optimize@CMergedRect@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18006E400 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180087700 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRegion(
        CBitmapOfDeviceBitmaps *a1,
        CDirtyRegion *this,
        CBaseMatrix *a3,
        __int64 a4,
        float *a5)
{
  int v5; // r15d
  float *v6; // r14
  _DWORD *v9; // rbx
  unsigned int v10; // esi
  float v11; // xmm8_4
  float *v12; // rsi
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm3_4
  int v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm6_4
  CBaseMatrix *v20; // rcx
  __int64 (__fastcall *v21)(_QWORD, __int64); // r9
  __int64 (__fastcall *v22)(_QWORD, __int64); // r10
  float v23; // xmm4_4
  float v24; // xmm5_4
  char v25; // r8
  float *v26; // rax
  unsigned int v27; // edx
  unsigned int i; // ecx
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(_QWORD, __int64); // rsi
  char v31; // al
  int v32; // eax
  unsigned int v34; // r8d
  _BYTE *v35; // r14
  int v36; // ebx
  int v37; // [rsp+38h] [rbp-A1h]
  float *v39; // [rsp+48h] [rbp-91h]
  unsigned int v40; // [rsp+50h] [rbp-89h]
  float v41; // [rsp+60h] [rbp-79h] BYREF
  float v42; // [rsp+64h] [rbp-75h]
  float v43; // [rsp+68h] [rbp-71h]
  float v44; // [rsp+6Ch] [rbp-6Dh]
  _DWORD v45[4]; // [rsp+70h] [rbp-69h] BYREF
  float v46; // [rsp+80h] [rbp-59h] BYREF
  float v47; // [rsp+84h] [rbp-55h]
  float v48; // [rsp+88h] [rbp-51h]
  float v49; // [rsp+8Ch] [rbp-4Dh]
  float v50; // [rsp+90h] [rbp-49h]
  float v51; // [rsp+94h] [rbp-45h]
  float v52; // [rsp+98h] [rbp-41h]
  float v53; // [rsp+9Ch] [rbp-3Dh]

  v5 = 0;
  v6 = (float *)a3;
  if ( !*((_DWORD *)a1 + 78) )
    return (unsigned int)v5;
  v9 = (_DWORD *)((char *)a1 + 240);
  v10 = 0;
  CMergedRect::Optimize((CBitmapOfDeviceBitmaps *)((char *)a1 + 240), 1);
  if ( (unsigned int)(v9[18] - 2) <= 1 )
  {
    v34 = 0;
    v35 = v9 + 16;
    do
    {
      if ( *v35 )
      {
        if ( v34 != v10 )
          CMergedRect::SwapExisting((CMergedRect *)v9, v10, v34);
        ++v10;
      }
      ++v34;
      ++v35;
    }
    while ( v34 < 4 );
    v6 = (float *)a3;
  }
  v40 = v9[18];
  v37 = 0;
  if ( !v40 )
  {
LABEL_61:
    *((_QWORD *)a1 + 29) = *(_QWORD *)(*((_QWORD *)a1 + 2) + 352LL);
    goto LABEL_62;
  }
  v11 = v44;
  v12 = (float *)(v9 + 2);
  v13 = v43;
  v14 = v42;
  v15 = v41;
  v39 = (float *)(v9 + 2);
  while ( 1 )
  {
    v16 = *(v12 - 2);
    v17 = *((_DWORD *)v12 - 1);
    v18 = *v12;
    v19 = v12[1];
    *(float *)v45 = v16;
    v45[1] = v17;
    *(float *)&v45[2] = v18;
    *(float *)&v45[3] = v19;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v6) )
    {
      v26 = &v41;
      v15 = v6[12] + v16;
      v14 = v6[13] + v23;
      v27 = 4;
      v13 = v6[12] + v24;
      v25 = 1;
      v11 = v6[13] + v19;
      v41 = v15;
      v42 = v14;
      v43 = v13;
      v44 = v11;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(v20, (const struct MilRectF *)v45, (struct MilPoint2F *const)&v46);
      v25 = 0;
      v26 = &v46;
      v27 = 8;
    }
    for ( i = 0; i < v27; ++i )
      ++v26;
    if ( !v25 )
    {
      v13 = v48;
      if ( v46 > v48 )
        v15 = v48;
      else
        v15 = v46;
      v14 = v47;
      if ( v47 > v49 )
        v14 = v49;
      if ( v48 <= v46 )
        v13 = v46;
      v11 = v47;
      if ( v49 > v47 )
        v11 = v49;
      if ( v15 > v50 )
        v15 = v50;
      if ( v14 > v51 )
        v14 = v51;
      if ( v50 > v13 )
        v13 = v50;
      if ( v51 > v11 )
        v11 = v51;
      if ( v15 > v52 )
        v15 = v52;
      if ( v14 > v53 )
        v14 = v53;
      if ( v52 > v13 )
        v13 = v52;
      if ( v53 > v11 )
        v11 = v53;
      v44 = v11;
      v43 = v13;
      v42 = v14;
      v41 = v15;
    }
    v29 = *((_QWORD *)a1 + 47);
    if ( v29 )
    {
      v30 = *(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v29 + 48LL);
      if ( v30 == v21 )
      {
        v31 = CCompositionSurfaceBitmap::IsOfType(*((_QWORD *)a1 + 47), 84LL);
      }
      else if ( v30 == v22 )
      {
        v31 = CPrimitiveGroup::IsOfType(*((_QWORD *)a1 + 47), 84LL);
      }
      else
      {
        v31 = v30(*((_QWORD *)a1 + 47), 84LL);
      }
      if ( v31 )
      {
        v12 = v39;
        if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v41) )
        {
          v15 = v15 + -0.5;
          v14 = v14 + -0.5;
          v13 = v13 + 0.5;
          v11 = v11 + 0.5;
          v41 = v15;
          v42 = v14;
          v43 = v13;
          v44 = v11;
        }
      }
      else
      {
        v12 = v39;
      }
    }
    if ( v13 <= v15 || v11 <= v14 )
      goto LABEL_60;
    if ( !a5 )
      break;
    if ( *a5 > v15 )
    {
      v15 = *a5;
      v41 = *a5;
    }
    if ( a5[1] > v14 )
    {
      v14 = a5[1];
      v42 = v14;
    }
    if ( v13 > a5[2] )
    {
      v13 = a5[2];
      v43 = v13;
    }
    if ( v11 > a5[3] )
    {
      v11 = a5[3];
      v44 = v11;
    }
    if ( v13 > v15 && v11 > v14 )
      break;
    v11 = 0.0;
    v13 = 0.0;
    v14 = 0.0;
    v44 = 0.0;
    v15 = 0.0;
    v43 = 0.0;
    v42 = 0.0;
    v41 = 0.0;
LABEL_60:
    v12 += 4;
    v39 = v12;
    if ( ++v37 >= v40 )
      goto LABEL_61;
  }
  v5 = 0;
  if ( *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v15
    && v13 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
    || *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v14
    && v11 >= *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
  {
    v36 = *((_DWORD *)this + 248);
    CDirtyRegion::Initialize(this);
    *((_DWORD *)this + 248) = v36;
  }
  if ( !*((_BYTE *)this + 1012) && !*((_DWORD *)this + 248) )
  {
    v32 = CDirtyRegion::_Add(this, a1);
    v5 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x1C3u);
  }
  if ( v5 >= 0 )
    goto LABEL_60;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xB42u);
LABEL_62:
  *((_BYTE *)a1 + 90) |= 2u;
  return (unsigned int)v5;
}
