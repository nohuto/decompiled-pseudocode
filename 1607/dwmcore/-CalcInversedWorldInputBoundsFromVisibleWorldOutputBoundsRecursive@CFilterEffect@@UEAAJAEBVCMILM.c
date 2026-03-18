/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@1PEAV3@2@Z @ 0x180014CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B91C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@@Z @ 0x18014CB44 (-InvertTransformToCalc2DBounds@CFilterEffect@@IEAA_NAEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v9; // r15
  __int128 v11; // xmm0
  int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // eax
  __m128i v26; // xmm0
  int v27; // eax
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float v31; // xmm0_4
  unsigned int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // rdx
  float v35; // xmm0_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // eax
  unsigned int v39; // [rsp+20h] [rbp-B9h]
  int v40; // [rsp+40h] [rbp-99h]
  __int128 v42; // [rsp+58h] [rbp-81h] BYREF
  __int64 v43; // [rsp+68h] [rbp-71h]
  unsigned int v44; // [rsp+70h] [rbp-69h]
  __int64 v45; // [rsp+78h] [rbp-61h]
  __int128 v46; // [rsp+80h] [rbp-59h] BYREF
  float v47; // [rsp+90h] [rbp-49h] BYREF
  float v48; // [rsp+94h] [rbp-45h]
  float v49; // [rsp+98h] [rbp-41h]
  float v50; // [rsp+9Ch] [rbp-3Dh]
  __int128 v51; // [rsp+A0h] [rbp-39h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-29h] BYREF
  _BYTE v53[20]; // [rsp+C0h] [rbp-19h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-1h] BYREF

  v6 = 0LL;
  v7 = a1[8] ^ (a1[8] ^ ((a1[8] & 0xFFFFFFFE) + 2)) & 6;
  v42 = 0LL;
  v9 = a2;
  v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  a1[8] = v7;
  v12 = 0;
  v43 = 0LL;
  v44 = 0;
  v52 = v11;
  if ( (v7 & 6) != 2 )
  {
    v12 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x1ACu);
    goto LABEL_4;
  }
  (*(void (__fastcall **)(_DWORD *, __int64, __int64, _DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 160LL))(
    a1,
    a2,
    a3,
    a1 + 64,
    &v51,
    &v54);
  v13 = (int)a1[58];
  if ( !(_DWORD)v13 )
  {
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v51);
    *(_OWORD *)a6 = v54;
    goto LABEL_4;
  }
  v45 = (int)a1[58];
  if ( v13 <= 0 )
  {
LABEL_35:
    (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 120LL))(a1, &v42, &v52);
    CMILMatrix::Transform2DBoundsHelper<1>(v9, &v52, a6);
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a6) )
    {
      if ( *(float *)a3 > *(float *)a6 )
        *(_DWORD *)a6 = *(_DWORD *)a3;
      v35 = *(float *)(a3 + 4);
      if ( v35 > *(float *)(a6 + 4) )
        *(float *)(a6 + 4) = v35;
      v36 = *(float *)(a3 + 8);
      if ( *(float *)(a6 + 8) > v36 )
        *(float *)(a6 + 8) = v36;
      v37 = *(float *)(a3 + 12);
      if ( *(float *)(a6 + 12) > v37 )
        *(float *)(a6 + 12) = v37;
      if ( *(float *)(a6 + 8) <= *(float *)a6 || *(float *)(a6 + 12) <= *(float *)(a6 + 4) )
      {
        *(_QWORD *)(a6 + 8) = 0LL;
        *(_QWORD *)a6 = 0LL;
      }
    }
    goto LABEL_4;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)a1 + 28);
    v46 = v51;
    v19 = *(_QWORD *)(v18 + 8 * v6);
    v20 = *(_QWORD *)(v19 + 24);
    v40 = *(_DWORD *)(*((_QWORD *)a1 + 27) + 4 * v6);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 9LL);
      v22 = *(_QWORD *)(v19 + 24);
      if ( v21 )
      {
        v9 = a2;
        *(_OWORD *)v53 = v46;
        v23 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, __int64, __int128 *))(*(_QWORD *)v22 + 144LL))(
                v22,
                a2,
                v53,
                v22 + 256,
                a5,
                &v46);
        v12 = v23;
        if ( v23 < 0 )
        {
          v39 = 470;
          v17 = v23;
          goto LABEL_7;
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, 92LL) )
        {
          v12 = -2147467263;
          v39 = 491;
          goto LABEL_52;
        }
        v25 = *(_DWORD *)(v19 + 12) - *(_DWORD *)(v19 + 4);
        v47 = 0.0;
        v48 = 0.0;
        v26 = _mm_cvtsi32_si128(v25);
        v27 = *(_DWORD *)(v19 + 16) - *(_DWORD *)(v19 + 8);
        v9 = a2;
        LODWORD(v49) = _mm_cvtepi32_ps(v26).m128_u32[0];
        v50 = (float)v27;
        CMILMatrix::Transform2DBoundsHelper<1>(a2, &v47, &v47);
        v28 = *(float *)&v46;
        if ( v47 > *(float *)&v46 )
        {
          v28 = v47;
          *(float *)&v46 = v47;
        }
        v29 = *((float *)&v46 + 1);
        if ( v48 > *((float *)&v46 + 1) )
        {
          v29 = v48;
          *((float *)&v46 + 1) = v48;
        }
        v30 = *((float *)&v46 + 2);
        if ( *((float *)&v46 + 2) > v49 )
        {
          v30 = v49;
          *((float *)&v46 + 2) = v49;
        }
        v31 = *((float *)&v46 + 3);
        if ( *((float *)&v46 + 3) > v50 )
        {
          v31 = v50;
          *((float *)&v46 + 3) = v50;
        }
        if ( v30 <= v28 || v31 <= v29 )
          v46 = 0uLL;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v46);
      }
    }
    else
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a5, &v46);
      v9 = a2;
    }
    if ( (float)(*((float *)&v46 + 2) - *(float *)&v46) <= 0.0000099999997
      || (float)(*((float *)&v46 + 3) - *((float *)&v46 + 1)) <= 0.0000099999997 )
    {
      goto LABEL_34;
    }
    if ( !(unsigned __int8)CFilterEffect::InvertTransformToCalc2DBounds(v24, v9, &v46, &v46) )
      break;
    *(_DWORD *)v53 = v40;
    *(_OWORD *)&v53[4] = v46;
    v32 = v44 + 1;
    if ( v44 + 1 >= v44 )
    {
      v12 = 0;
      if ( v32 <= HIDWORD(v43) )
      {
        v33 = v42;
        v34 = 5LL * v44;
        *(_OWORD *)(v42 + 4 * v34) = *(_OWORD *)v53;
        *(_DWORD *)(v33 + 4 * v34 + 16) = *(_DWORD *)&v53[16];
        v44 = v32;
        goto LABEL_34;
      }
      v38 = DynArrayImpl<0>::AddMultipleAndSet(&v42, 20LL, 1LL, v53);
      v12 = v38;
      if ( v38 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xC0u);
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v12 < 0 )
    {
      v39 = 509;
LABEL_52:
      v17 = v12;
      goto LABEL_7;
    }
LABEL_34:
    if ( ++v6 >= v45 )
      goto LABEL_35;
  }
  v17 = -2147467259;
  v39 = 506;
  v12 = -2147467259;
LABEL_7:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v39);
LABEL_4:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v42, v14, v15);
  return (unsigned int)v12;
}
