/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBUMilPoint2F@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@11PEAV3@2@Z @ 0x180002AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E148 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive(
        _DWORD *a1,
        float *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v7; // r15
  float *v8; // r13
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // eax
  __int128 v13; // xmm0
  __int64 v14; // rax
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // eax
  int v23; // r9d
  float v24; // xmm1_4
  float v25; // xmm5_4
  float v26; // xmm3_4
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  unsigned int v31; // xmm1_4
  unsigned int v32; // xmm3_4
  unsigned int v33; // xmm4_4
  unsigned int v34; // xmm2_4
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // eax
  int v39; // ebx
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  unsigned int v47; // [rsp+20h] [rbp-D1h]
  int v48; // [rsp+40h] [rbp-B1h]
  __int64 v50; // [rsp+60h] [rbp-91h]
  __int128 v51; // [rsp+68h] [rbp-89h] BYREF
  __int64 v52; // [rsp+78h] [rbp-79h]
  unsigned int v53; // [rsp+80h] [rbp-71h]
  __int64 v54; // [rsp+88h] [rbp-69h]
  __int64 v55; // [rsp+90h] [rbp-61h]
  __int128 v56; // [rsp+98h] [rbp-59h] BYREF
  __int128 v57; // [rsp+A8h] [rbp-49h] BYREF
  __int128 v58; // [rsp+B8h] [rbp-39h] BYREF
  _BYTE v59[20]; // [rsp+C8h] [rbp-29h] BYREF
  __int128 v60; // [rsp+E0h] [rbp-11h] BYREF

  v7 = a3;
  v8 = a2;
  v10 = 0;
  v52 = 0LL;
  v53 = 0;
  v11 = a1[8] & 0xFFFFFFFE;
  v54 = a3;
  v12 = a1[8] ^ (a1[8] ^ (v11 + 2)) & 6;
  v51 = 0LL;
  v13 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  a1[8] = v12;
  v57 = v13;
  if ( (v12 & 6) != 2 )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x182u);
    goto LABEL_4;
  }
  (*(void (__fastcall **)(_DWORD *, float *, __int64, _DWORD *, __int64, __int128 *, __int128 *))(*(_QWORD *)a1 + 144LL))(
    a1,
    a2,
    a3,
    a1 + 40,
    a5,
    &v58,
    &v60);
  v14 = (int)a1[34];
  if ( !(_DWORD)v14 )
  {
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a6, &v58);
    *(_OWORD *)a7 = v60;
    goto LABEL_4;
  }
  v17 = 0LL;
  v55 = (int)a1[34];
  v50 = 0LL;
  if ( v14 > 0 )
  {
    while ( 1 )
    {
      v18 = *((_QWORD *)a1 + 16);
      v56 = v58;
      v19 = *(_QWORD *)(v18 + 8 * v17);
      v20 = *(_QWORD *)(v19 + 48);
      v48 = *(_DWORD *)(*((_QWORD *)a1 + 15) + 4 * v17);
      if ( !v20 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 9LL) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v19 + 48) + 48LL))(
                *(_QWORD *)(v19 + 48),
                79LL) )
        {
          v10 = -2147467263;
          v47 = 447;
          v16 = -2147467263;
          goto LABEL_7;
        }
        v24 = a2[1];
        v25 = *(float *)&v56;
        v26 = (float)((float)*(int *)(v19 + 12) + *a2) - (float)*(int *)(v19 + 4);
        v27 = (float)((float)*(int *)(v19 + 16) + v24) - (float)*(int *)(v19 + 8);
        if ( *a2 > *(float *)&v56 )
        {
          v25 = *a2;
          *(float *)&v56 = *a2;
        }
        v28 = *((float *)&v56 + 1);
        if ( v24 > *((float *)&v56 + 1) )
        {
          v28 = v24;
          *((float *)&v56 + 1) = v24;
        }
        v29 = *((float *)&v56 + 2);
        if ( *((float *)&v56 + 2) > v26 )
        {
          v29 = v26;
          *((float *)&v56 + 2) = v26;
        }
        v30 = *((float *)&v56 + 3);
        if ( *((float *)&v56 + 3) > v27 )
        {
          v30 = v27;
          *((float *)&v56 + 3) = v27;
        }
        if ( v29 <= v25 || v30 <= v28 )
          v56 = 0uLL;
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a6, &v56);
        v23 = v48;
        goto LABEL_27;
      }
      v21 = *(_QWORD *)(v19 + 48);
      *(_OWORD *)v59 = v56;
      v8 = a2;
      v22 = (*(__int64 (__fastcall **)(__int64, float *, _BYTE *, __int64, __int64, __int64, __int128 *))(*(_QWORD *)v21 + 128LL))(
              v21,
              a2,
              v59,
              v21 + 160,
              a5,
              a6,
              &v56);
      v10 = v22;
      if ( v22 < 0 )
      {
        v47 = 430;
        v16 = v22;
        goto LABEL_7;
      }
      v23 = v48;
LABEL_28:
      if ( (float)(*((float *)&v56 + 2) - *(float *)&v56) > 0.0000099999997
        && (float)(*((float *)&v56 + 3) - *((float *)&v56 + 1)) > 0.0000099999997 )
      {
        *(float *)&v31 = *(float *)&v56 - *v8;
        *(float *)&v32 = *((float *)&v56 + 1) - v8[1];
        *(float *)&v33 = *((float *)&v56 + 2) - *v8;
        *(float *)&v34 = *((float *)&v56 + 3) - v8[1];
        v35 = v53 + 1;
        *(_DWORD *)v59 = v23;
        *(_QWORD *)&v56 = __PAIR64__(v32, v31);
        *((_QWORD *)&v56 + 1) = __PAIR64__(v34, v33);
        *(_OWORD *)&v59[4] = v56;
        if ( v53 + 1 < v53 )
        {
          v39 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v10 = -2147024362;
LABEL_52:
          v47 = 467;
          v16 = v39;
LABEL_7:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v47);
          goto LABEL_4;
        }
        v10 = 0;
        if ( v35 > HIDWORD(v52) )
        {
          v38 = DynArrayImpl<0>::AddMultipleAndSet(&v51, 20LL, 1LL, v59);
          v39 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0xC0u);
          v10 = v39;
          if ( v39 < 0 )
            goto LABEL_52;
        }
        else
        {
          v36 = v51;
          v37 = 5LL * v53;
          *(_OWORD *)(v51 + 4 * v37) = *(_OWORD *)v59;
          *(_DWORD *)(v36 + 4 * v37 + 16) = *(_DWORD *)&v59[16];
          v53 = v35;
        }
      }
      v17 = v50 + 1;
      v50 = v17;
      if ( v17 >= v55 )
      {
        v7 = v54;
        goto LABEL_38;
      }
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a6, &v56);
LABEL_27:
    v8 = a2;
    goto LABEL_28;
  }
LABEL_38:
  (*(void (__fastcall **)(_DWORD *, __int128 *, __int128 *))(*(_QWORD *)a1 + 104LL))(a1, &v51, &v57);
  v40 = *((float *)&v57 + 1);
  v41 = *(float *)&v57 + *v8;
  v42 = *((float *)&v57 + 2);
  *(float *)a7 = v41;
  *(float *)(a7 + 4) = v40 + v8[1];
  v43 = *((float *)&v57 + 3);
  *(float *)(a7 + 8) = v42 + *v8;
  *(float *)(a7 + 12) = v43 + v8[1];
  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a7) )
  {
    if ( *(float *)v7 > v41 )
      *(_DWORD *)a7 = *(_DWORD *)v7;
    v44 = *(float *)(v7 + 4);
    if ( v44 > *(float *)(a7 + 4) )
      *(float *)(a7 + 4) = v44;
    v45 = *(float *)(v7 + 8);
    if ( *(float *)(a7 + 8) > v45 )
      *(float *)(a7 + 8) = v45;
    v46 = *(float *)(v7 + 12);
    if ( *(float *)(a7 + 12) > v46 )
      *(float *)(a7 + 12) = v46;
    if ( *(float *)(a7 + 8) <= *(float *)a7 || *(float *)(a7 + 12) <= *(float *)(a7 + 4) )
    {
      *(_DWORD *)(a7 + 12) = 0;
      *(_DWORD *)(a7 + 8) = 0;
      *(_DWORD *)(a7 + 4) = 0;
      *(_DWORD *)a7 = 0;
    }
  }
LABEL_4:
  a1[8] ^= (a1[8] ^ (2 * (a1[8] >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v51);
  return v10;
}
