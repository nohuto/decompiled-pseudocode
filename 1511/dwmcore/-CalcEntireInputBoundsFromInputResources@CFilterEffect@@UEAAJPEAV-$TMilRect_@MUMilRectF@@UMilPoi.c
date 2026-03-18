/*
 * XREFs of ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUMilPoint2F@@@Z @ 0x18001A410
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CFilterEffect::CalcEntireInputBoundsFromInputResources(__int64 a1, __int128 *a2, float *a3)
{
  int v3; // xmm6_4
  int v5; // xmm7_4
  int v6; // ebx
  int v7; // xmm8_4
  unsigned int v8; // ecx
  int v9; // xmm9_4
  unsigned int v10; // r15d
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rax
  __int128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // r9
  int v20; // r9d
  __int64 v21; // r12
  __int64 v22; // r13
  __int64 v23; // rdi
  char v24; // al
  _OWORD *v25; // rdi
  bool v26; // zf
  __int64 v27; // rax
  int v28; // r13d
  __int128 v29; // xmm0
  int v30; // eax
  float v31; // xmm3_4
  float v32; // xmm1_4
  unsigned int v33; // xmm2_4
  float v34; // xmm0_4
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // eax
  int v40; // edi
  unsigned int v41; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+38h] [rbp-D0h]
  __int128 v43; // [rsp+40h] [rbp-C8h] BYREF
  int v44; // [rsp+50h] [rbp-B8h]
  __int64 v45; // [rsp+54h] [rbp-B4h]
  __int128 *v46; // [rsp+60h] [rbp-A8h]
  float *v47; // [rsp+68h] [rbp-A0h]
  __m256i v48; // [rsp+70h] [rbp-98h] BYREF
  int v49; // [rsp+90h] [rbp-78h]
  __int128 v50; // [rsp+98h] [rbp-70h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-60h] BYREF
  int v52; // [rsp+B0h] [rbp-58h]
  int v53; // [rsp+B4h] [rbp-54h]
  _BYTE v54[20]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v5 = DWORD1(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v6 = 0;
  v7 = DWORD2(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v8 = 0;
  v9 = HIDWORD(TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 32);
  v44 = 0;
  v51 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v12 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((v11 & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v12;
  v52 = v7;
  v53 = v9;
  v47 = a3;
  v46 = a2;
  v45 = 0LL;
  v43 = 0LL;
  if ( (v12 & 6) != 2 )
  {
    v6 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x206u);
    goto LABEL_12;
  }
  v13 = *(int *)(a1 + 152);
  if ( !(_DWORD)v13 )
  {
    v14 = *a2;
    *(_DWORD *)v54 = 0;
    *(_OWORD *)&v54[4] = v14;
    v15 = DynArrayImpl<0>::AddMultipleAndSet(&v43, 20LL, 1LL, v54);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xC0u);
    if ( v6 < 0 )
    {
      v41 = 525;
LABEL_15:
      v20 = v6;
      goto LABEL_16;
    }
    v10 = HIDWORD(v45);
    goto LABEL_7;
  }
  v21 = 0LL;
  v48.m256i_i64[0] = *(int *)(a1 + 152);
  if ( v13 <= 0 )
  {
LABEL_7:
    if ( v10 )
    {
      v16 = v43 + 4;
      do
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v51, v16);
        v16 = v17 + 20;
      }
      while ( v18 != 1 );
      v9 = v53;
      v7 = v52;
      v5 = HIDWORD(v51);
      v3 = v51;
    }
    *(_DWORD *)(a1 + 176) = v3;
    *(_DWORD *)(a1 + 180) = v5;
    *(_DWORD *)(a1 + 184) = v7;
    *(_DWORD *)(a1 + 188) = v9;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v21);
    v42 = *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v21);
    v50 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v23 = *(_QWORD *)(v22 + 24);
    if ( !v23 )
    {
      v50 = *a2;
LABEL_28:
      v28 = v42;
      goto LABEL_29;
    }
    v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v23 + 48LL))(*(_QWORD *)(v22 + 24), 9LL);
    v25 = *(_OWORD **)(v22 + 24);
    v26 = v24 == 0;
    v27 = *(_QWORD *)v25;
    if ( v26 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(v27 + 48))(*(_QWORD *)(v22 + 24), 87LL) )
      {
        v6 = -2147467263;
        v41 = 564;
        goto LABEL_15;
      }
      v8 = v45;
      v31 = v47[1];
      v32 = (float)*(int *)(v22 + 16);
      *(float *)&v33 = (float)((float)*(int *)(v22 + 12) + *v47) - (float)*(int *)(v22 + 4);
      v34 = (float)*(int *)(v22 + 8);
      *(float *)&v50 = *v47;
      *(_QWORD *)((char *)&v50 + 4) = __PAIR64__(v33, LODWORD(v31));
      *((float *)&v50 + 3) = (float)(v32 + v31) - v34;
      goto LABEL_28;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, float *))(v27 + 144))(*(_QWORD *)(v22 + 24), v46, v47);
    if ( v6 < 0 )
    {
      v41 = 542;
      goto LABEL_15;
    }
    v28 = v42;
    memset(&v48.m256i_u64[1], 0, 24);
    v49 = 0;
    v29 = v25[11];
    *(_DWORD *)v54 = v42;
    *(_OWORD *)&v54[4] = v29;
    v30 = DynArrayImpl<0>::AddMultipleAndSet(&v48.m256i_u64[1], 20LL, 1LL, v54);
    v6 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x221u);
      DynArrayImpl<1>::~DynArrayImpl<1>(&v48.m256i_u64[1]);
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_OWORD *, unsigned __int64 *, __int128 *))(*(_QWORD *)v25 + 112LL))(
      v25,
      &v48.m256i_u64[1],
      &v50);
    DynArrayImpl<1>::~DynArrayImpl<1>(&v48.m256i_u64[1]);
    v8 = v45;
LABEL_29:
    v35 = v10 + 1;
    *(_DWORD *)v54 = v28;
    *(_OWORD *)&v54[4] = v50;
    if ( v10 + 1 < v10 )
      break;
    v6 = 0;
    if ( v35 > v8 )
    {
      v39 = DynArrayImpl<0>::AddMultipleAndSet(&v43, 20LL, 1LL, v54);
      v40 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0xC0u);
      v6 = v40;
      if ( v40 < 0 )
        goto LABEL_42;
      v10 = HIDWORD(v45);
    }
    else
    {
      v36 = v43;
      v37 = v10++;
      HIDWORD(v45) = v35;
      v38 = 5 * v37;
      *(_OWORD *)(v43 + 4 * v38) = *(_OWORD *)v54;
      *(_DWORD *)(v36 + 4 * v38 + 16) = *(_DWORD *)&v54[16];
    }
    if ( ++v21 >= v48.m256i_i64[0] )
      goto LABEL_7;
    v8 = v45;
    a2 = v46;
  }
  v40 = -2147024362;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
  v6 = -2147024362;
LABEL_42:
  v41 = 572;
  v20 = v40;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v41);
LABEL_12:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v43);
  return (unsigned int)v6;
}
