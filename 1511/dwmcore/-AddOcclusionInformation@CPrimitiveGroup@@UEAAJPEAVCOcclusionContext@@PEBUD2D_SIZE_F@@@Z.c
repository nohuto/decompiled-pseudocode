/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180091AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x180047890 (-Transform2DRectToPerspective@CBaseMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     ?IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ @ 0x180047BB0 (-IsExactlyPureTranslate@CBaseMatrix@@QEBA_NXZ.c)
 *     ?Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z @ 0x18004E9F8 (-Top@CBaseMatrixStack@@IEAAXPEAVCBaseMatrix@@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054E4C (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25A4 (-Top@CBaseClipStack@@IEAAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // xmm4_4
  unsigned int v10; // xmm5_4
  unsigned int v11; // xmm5_4
  float v12; // xmm4_4
  __int64 v13; // r11
  float v14; // xmm4_4
  float v15; // xmm5_4
  __int64 v16; // r11
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  float v20; // xmm3_4
  __int64 v21; // r11
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rdx
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm2_4
  float v30; // xmm0_4
  int v31; // edi
  int v32; // eax
  __int128 v33; // [rsp+40h] [rbp-51h] BYREF
  int v34; // [rsp+50h] [rbp-41h]
  unsigned __int64 v35; // [rsp+58h] [rbp-39h] BYREF
  float v36; // [rsp+60h] [rbp-31h]
  float v37; // [rsp+64h] [rbp-2Dh]
  _BYTE v38[48]; // [rsp+68h] [rbp-29h] BYREF
  float v39; // [rsp+98h] [rbp+7h]
  float v40; // [rsp+9Ch] [rbp+Bh]
  __int64 v41; // [rsp+A8h] [rbp+17h] BYREF
  float v42; // [rsp+B0h] [rbp+1Fh]
  float v43; // [rsp+B4h] [rbp+23h]
  float v44; // [rsp+B8h] [rbp+27h]
  float v45; // [rsp+BCh] [rbp+2Bh]
  float v46; // [rsp+C0h] [rbp+2Fh]
  float v47; // [rsp+C4h] [rbp+33h]

  if ( !*((_QWORD *)this + 44) )
    return 0LL;
  v3 = *((float *)this + 101);
  v4 = *((float *)this + 103);
  v5 = *((float *)this + 102);
  v6 = *((float *)this + 104);
  v37 = v6;
  v35 = __PAIR64__(LODWORD(v5), LODWORD(v3));
  v36 = v4;
  if ( v4 <= v3 || v6 <= v5 || *((_DWORD *)a2 + 164) )
    return 0LL;
  v7 = 0;
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v35) )
  {
    *(_QWORD *)&v33 = __PAIR64__(v10, LODWORD(v3));
    *((_QWORD *)&v33 + 1) = __PAIR64__(LODWORD(v6), v9);
    v34 = 0;
    CBaseMatrixStack::Top((CBaseMatrixStack *)(v8 + 16), (struct CBaseMatrix *)v38);
    v35 = __PAIR64__(v11, LODWORD(v3));
    v36 = v12;
    v37 = v6;
    if ( CBaseMatrix::IsExactlyPureTranslate((CBaseMatrix *)v38) )
    {
      *(float *)&v33 = v3 + v39;
      *((float *)&v33 + 1) = v15 + v40;
      *((float *)&v33 + 2) = v14 + v39;
      *((float *)&v33 + 3) = v6 + v40;
    }
    else
    {
      CBaseMatrix::Transform2DRectToPerspective(
        (CBaseMatrix *)v38,
        (const struct MilRectF *)&v35,
        (struct MilPoint2F *const)&v41);
      v27 = v42;
      v35 = v41;
      if ( *(float *)&v41 > v42 )
        v28 = v42;
      else
        LODWORD(v28) = v41;
      v29 = *((float *)&v41 + 1);
      if ( *((float *)&v41 + 1) > v43 )
        v29 = v43;
      if ( v42 <= *(float *)&v41 )
        LODWORD(v27) = v35;
      v30 = *((float *)&v35 + 1);
      if ( v43 > *((float *)&v35 + 1) )
        v30 = v43;
      if ( v28 > v44 )
        v28 = v44;
      if ( v29 > v45 )
        v29 = v45;
      if ( v44 > v27 )
        v27 = v44;
      if ( v45 > v30 )
        v30 = v45;
      if ( v28 > v46 )
        v28 = v46;
      if ( v29 > v47 )
        v29 = v47;
      if ( v46 > v27 )
        v27 = v46;
      if ( v47 > v30 )
        v30 = v47;
      *(_QWORD *)&v33 = __PAIR64__(LODWORD(v29), LODWORD(v28));
      *((_QWORD *)&v33 + 1) = __PAIR64__(LODWORD(v30), LODWORD(v27));
    }
    CBaseClipStack::Top(v13 + 56, &v35);
    v17 = *(float *)&v33;
    if ( *(float *)&v35 > *(float *)&v33 )
    {
      v17 = *(float *)&v35;
      LODWORD(v33) = v35;
    }
    v18 = *((float *)&v33 + 1);
    if ( *((float *)&v35 + 1) > *((float *)&v33 + 1) )
    {
      v18 = *((float *)&v35 + 1);
      DWORD1(v33) = HIDWORD(v35);
    }
    v19 = *((float *)&v33 + 2);
    if ( *((float *)&v33 + 2) > v36 )
    {
      v19 = v36;
      *((float *)&v33 + 2) = v36;
    }
    v20 = *((float *)&v33 + 3);
    if ( *((float *)&v33 + 3) > v37 )
    {
      v20 = v37;
      *((float *)&v33 + 3) = v37;
    }
    if ( v19 <= v17 || v20 <= v18 )
      v33 = 0uLL;
    if ( COcclusionContext::CheckOcclusionRelevance(v16, (float *)&v33) )
    {
      v22 = *(unsigned int *)(v21 + 128);
      v23 = v22 + 1;
      if ( (int)v22 + 1 < (unsigned int)v22 )
      {
        v31 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        v7 = -2147024362;
      }
      else
      {
        if ( v23 <= *(_DWORD *)(v21 + 124) )
        {
          v24 = *(_QWORD *)(v21 + 104);
          v25 = 5 * v22;
          *(_OWORD *)(v24 + 4 * v25) = v33;
          *(_DWORD *)(v24 + 4 * v25 + 16) = v34;
          *(_DWORD *)(v21 + 128) = v23;
          goto LABEL_22;
        }
        v32 = DynArrayImpl<0>::AddMultipleAndSet(v21 + 104, 20, 1, &v33);
        v31 = v32;
        if ( v32 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
        v7 = v31;
        if ( v31 >= 0 )
          goto LABEL_22;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v31, 0x70Au);
    }
  }
LABEL_22:
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4ACu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x3FEu);
  }
  return 0LL;
}
