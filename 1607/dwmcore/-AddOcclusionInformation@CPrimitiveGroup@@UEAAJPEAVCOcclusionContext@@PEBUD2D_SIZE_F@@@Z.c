/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18004D850
 * Callers:
 *     <none>
 * Callees:
 *     ?Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z @ 0x1800253EC (-Top@CBaseMatrixStack@@IEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005BC24 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  int v6; // ebx
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v22; // eax
  _BYTE v23[64]; // [rsp+38h] [rbp-39h] BYREF
  int v24; // [rsp+78h] [rbp+7h]
  __int128 v25; // [rsp+88h] [rbp+17h] BYREF
  __int128 v26; // [rsp+98h] [rbp+27h] BYREF
  int v27; // [rsp+A8h] [rbp+37h]
  float v28; // [rsp+B0h] [rbp+3Fh] BYREF
  float v29; // [rsp+B4h] [rbp+43h]
  float v30; // [rsp+B8h] [rbp+47h]
  float v31; // [rsp+BCh] [rbp+4Bh]

  if ( !*((_QWORD *)this + 54) )
    return 0LL;
  v3 = *((float *)this + 123);
  v4 = *((float *)this + 122);
  v5 = *((float *)this + 124);
  LODWORD(v25) = *((_DWORD *)this + 121);
  *(_QWORD *)((char *)&v25 + 4) = __PAIR64__(LODWORD(v3), LODWORD(v4));
  *((float *)&v25 + 3) = v5;
  if ( v3 <= *(float *)&v25 || v5 <= v4 || *((_DWORD *)a2 + 223) )
    return 0LL;
  v6 = 0;
  if ( v5 > v4 )
  {
    v27 = 0;
    v24 = 0;
    CBaseMatrixStack::Top((struct COcclusionContext *)((char *)a2 + 16), (struct CMILMatrix *)v23);
    CMILMatrix::Transform2DBoundsHelper<0>(v23, &v25, &v28);
    if ( *((_DWORD *)a2 + 16) )
    {
      v8 = *((_DWORD *)a2 + 16);
      if ( v8 )
        v25 = *(_OWORD *)(*((_QWORD *)a2 + 10) + 16LL * (unsigned int)(v8 - 1));
      v9 = *(float *)&v25;
      v10 = *((float *)&v25 + 1);
      v11 = *((float *)&v25 + 2);
      v12 = *((float *)&v25 + 3);
    }
    else
    {
      v9 = *(float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v10 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v11 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v12 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    }
    v13 = v28;
    if ( v9 > v28 )
      v13 = v9;
    v14 = v29;
    if ( v10 > v29 )
      v14 = v10;
    v15 = v30;
    if ( v30 > v11 )
      v15 = v11;
    v16 = v31;
    if ( v31 > v12 )
      v16 = v12;
    if ( v15 <= v13 || v16 <= v14 )
    {
      v13 = 0.0;
      v16 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
    }
    *(_QWORD *)&v26 = __PAIR64__(LODWORD(v14), LODWORD(v13));
    *((_QWORD *)&v26 + 1) = __PAIR64__(LODWORD(v16), LODWORD(v15));
    if ( (unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a2, &v26) )
    {
      v17 = *((unsigned int *)a2 + 70);
      v18 = v17 + 1;
      if ( (int)v17 + 1 < (unsigned int)v17 )
      {
        v6 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      else
      {
        if ( v18 <= *((_DWORD *)a2 + 69) )
        {
          v19 = *((_QWORD *)a2 + 32);
          v20 = 5 * v17;
          *(_OWORD *)(v19 + 4 * v20) = v26;
          *(_DWORD *)(v19 + 4 * v20 + 16) = v27;
          *((_DWORD *)a2 + 70) = v18;
          goto LABEL_24;
        }
        v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 256, 20LL, 1LL, &v26);
        v6 = v22;
        if ( v22 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
      }
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x73Du);
    }
  }
LABEL_24:
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4EAu);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x41Au);
  }
  return 0LL;
}
