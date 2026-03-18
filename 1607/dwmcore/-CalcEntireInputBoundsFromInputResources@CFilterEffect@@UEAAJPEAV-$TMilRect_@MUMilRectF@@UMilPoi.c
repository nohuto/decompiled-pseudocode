/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180014990
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059930 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // xmm6_4
  int v5; // xmm7_4
  unsigned int v6; // r14d
  int v7; // xmm8_4
  unsigned int v8; // eax
  int v9; // xmm9_4
  __int64 v11; // rax
  __int128 v12; // xmm0
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v17; // r12
  __int64 v18; // r15
  __int64 v19; // rbx
  int v20; // r13d
  __int64 v21; // rcx
  _OWORD *v22; // r15
  __int128 v23; // xmm0
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // eax
  __m128i v28; // xmm0
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned int v35; // [rsp+28h] [rbp-E0h]
  _QWORD v36[3]; // [rsp+30h] [rbp-D8h] BYREF
  int v37; // [rsp+48h] [rbp-C0h]
  unsigned int v38; // [rsp+4Ch] [rbp-BCh]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  __int64 v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  __m256i v42; // [rsp+68h] [rbp-A0h] BYREF
  int v43; // [rsp+88h] [rbp-80h]
  int v44; // [rsp+90h] [rbp-78h] BYREF
  int v45; // [rsp+94h] [rbp-74h]
  int v46; // [rsp+98h] [rbp-70h]
  int v47; // [rsp+9Ch] [rbp-6Ch]
  _BYTE v48[20]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v49; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD v50[4]; // [rsp+C8h] [rbp-40h] BYREF

  v3 = 0;
  v4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v6 = 0;
  v7 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  v9 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v37 = 0;
  v38 = 0;
  *(_DWORD *)(a1 + 32) = v8;
  v44 = v4;
  v45 = v5;
  v46 = v7;
  v47 = v9;
  v40 = a3;
  v41 = a2;
  LODWORD(v39) = 0;
  *(_OWORD *)&v36[1] = 0LL;
  if ( (v8 & 6) != 2 )
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x21Fu);
    goto LABEL_12;
  }
  v11 = *(int *)(a1 + 232);
  if ( !(_DWORD)v11 )
  {
    v12 = *(_OWORD *)a2;
    *(_DWORD *)v48 = 0;
    *(_OWORD *)&v48[4] = v12;
    v13 = DynArrayImpl<0>::AddMultipleAndSet(&v36[1], 20LL, 1LL, v48);
    v3 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xC0u);
    if ( v3 < 0 )
    {
      v35 = 550;
      goto LABEL_15;
    }
    v6 = v39;
    goto LABEL_7;
  }
  v17 = 0LL;
  v42.m256i_i64[0] = *(int *)(a1 + 232);
  v18 = v11;
  if ( (int)v11 <= 0 )
  {
LABEL_7:
    if ( v6 )
    {
      a2 = v36[1] + 4LL;
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v44, a2);
        a2 = v14 + 20;
      }
      while ( v15 != 1 );
      v9 = v47;
      v7 = v46;
      v5 = v45;
      v4 = v44;
    }
    *(_DWORD *)(a1 + 256) = v4;
    *(_DWORD *)(a1 + 260) = v5;
    *(_DWORD *)(a1 + 264) = v7;
    *(_DWORD *)(a1 + 268) = v9;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v17);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * v17);
    v49 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v21 = *(_QWORD *)(v19 + 24);
    if ( !v21 )
    {
      v49 = *(_OWORD *)a2;
      goto LABEL_27;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 48LL))(v21, 9LL) )
      break;
    v22 = *(_OWORD **)(v19 + 24);
    v3 = (*(__int64 (__fastcall **)(_OWORD *, __int64, __int64))(*(_QWORD *)v22 + 152LL))(v22, v41, v40);
    if ( v3 < 0 )
    {
      v35 = 568;
      goto LABEL_15;
    }
    memset(&v42.m256i_u64[1], 0, 24);
    v43 = 0;
    v23 = v22[16];
    *(_DWORD *)v48 = v20;
    *(_OWORD *)&v48[4] = v23;
    v24 = DynArrayImpl<0>::AddMultipleAndSet(&v42.m256i_u64[1], 20LL, 1LL, v48);
    v3 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x23Cu);
      DynArrayImpl<1>::~DynArrayImpl<1>(&v42.m256i_u64[1], v33, v34);
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v22 + 120LL))(
      v22,
      &v42.m256i_u64[1],
      &v49);
    DynArrayImpl<1>::~DynArrayImpl<1>(&v42.m256i_u64[1], v25, v26);
    v18 = v42.m256i_i64[0];
LABEL_27:
    a3 = v6 + 1;
    *(_DWORD *)v48 = v20;
    *(_OWORD *)&v48[4] = v49;
    if ( (unsigned int)a3 >= v6 )
    {
      v3 = 0;
      if ( (unsigned int)a3 <= v38 )
      {
        v30 = v36[1];
        v31 = v6++;
        LODWORD(v39) = a3;
        a2 = 5 * v31;
        *(_OWORD *)(v36[1] + 4 * a2) = *(_OWORD *)v48;
        *(_DWORD *)(v30 + 4 * a2 + 16) = *(_DWORD *)&v48[16];
        goto LABEL_31;
      }
      v32 = DynArrayImpl<0>::AddMultipleAndSet(&v36[1], 20LL, 1LL, v48);
      v3 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
      v6 = v39;
    }
    else
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    }
    if ( v3 < 0 )
    {
      v35 = 603;
      goto LABEL_15;
    }
LABEL_31:
    if ( ++v17 >= v18 )
      goto LABEL_7;
    a2 = v41;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 24) + 48LL))(
         *(_QWORD *)(v19 + 24),
         92LL) )
  {
    v27 = *(_DWORD *)(v19 + 12) - *(_DWORD *)(v19 + 4);
    v50[0] = 0;
    v50[1] = 0;
    v28 = _mm_cvtsi32_si128(v27);
    v29 = *(_DWORD *)(v19 + 16) - *(_DWORD *)(v19 + 8);
    v50[2] = _mm_cvtepi32_ps(v28).m128_u32[0];
    *(float *)&v50[3] = (float)v29;
    CMILMatrix::Transform2DBoundsHelper<1>(v40, v50, &v49);
    goto LABEL_27;
  }
  v3 = -2147467263;
  v35 = 595;
LABEL_15:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v35);
LABEL_12:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v36[1], a2, a3);
  return (unsigned int)v3;
}
