/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18000272C
 * Callers:
 *     ?GetBounds@CFilterEffect@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18000272C (-GetBounds@CFilterEffect@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x1800377D0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18000272C (-GetBounds@CFilterEffect@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // edi
  unsigned int v5; // ecx
  __int128 *v6; // r8
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  int Bounds; // eax
  __m128i v18; // xmm1
  unsigned __int64 v19; // xmm0_8
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  int v25; // ebx
  int v27; // [rsp+38h] [rbp-41h]
  __int128 v28; // [rsp+40h] [rbp-39h] BYREF
  int v29; // [rsp+50h] [rbp-29h]
  unsigned int v30; // [rsp+54h] [rbp-25h]
  unsigned int v31; // [rsp+58h] [rbp-21h]
  __int64 v32; // [rsp+60h] [rbp-19h]
  __int128 *v33; // [rsp+68h] [rbp-11h]
  __int64 v34; // [rsp+70h] [rbp-9h]
  __int64 v35; // [rsp+78h] [rbp-1h]
  __int64 v36; // [rsp+80h] [rbp+7h]
  __int64 v37; // [rsp+88h] [rbp+Fh]
  __int128 v38; // [rsp+90h] [rbp+17h] BYREF
  _BYTE v39[20]; // [rsp+A0h] [rbp+27h] BYREF

  v3 = a1;
  v4 = 0;
  v35 = a3;
  v29 = 0;
  v5 = 0;
  v30 = 0;
  v6 = a2;
  v7 = *(_DWORD *)(v3 + 32) & 0xFFFFFFFE;
  v33 = a2;
  v31 = 0;
  v8 = *(_DWORD *)(v3 + 32) ^ (*(_DWORD *)(v3 + 32) ^ (v7 + 2)) & 6;
  *(_DWORD *)(v3 + 32) = v8;
  v28 = 0LL;
  if ( (v8 & 6) != 2 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xDDu);
    goto LABEL_8;
  }
  v9 = *(int *)(v3 + 136);
  if ( !(_DWORD)v9 )
  {
    v10 = *a2;
    *(_DWORD *)v39 = 0;
    *(_OWORD *)&v39[4] = v10;
    v11 = DynArrayImpl<0>::AddMultipleAndSet(&v28, 20LL, 1LL, v39);
    v4 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xE3u);
      goto LABEL_8;
    }
LABEL_6:
    (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v3 + 104LL))(a1, &v28, v35);
    goto LABEL_7;
  }
  v13 = 0LL;
  v37 = *(int *)(v3 + 136);
  v32 = 0LL;
  if ( v9 <= 0 )
    goto LABEL_6;
  while ( 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v3 + 128) + 8 * v13);
    v15 = *(_QWORD *)(v3 + 120);
    v34 = v14;
    v27 = *(_DWORD *)(v15 + 4 * v13);
    v38 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v16 = *(_QWORD *)(v14 + 48);
    v36 = v16;
    if ( v16 )
      break;
    v38 = *v6;
LABEL_20:
    v20 = v5 + 1;
    *(_DWORD *)v39 = v27;
    *(_OWORD *)&v39[4] = v38;
    if ( v5 + 1 < v5 )
    {
      v25 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v4 = -2147024362;
LABEL_30:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x110u);
      goto LABEL_7;
    }
    v4 = 0;
    if ( v20 > v30 )
    {
      v24 = DynArrayImpl<0>::AddMultipleAndSet(&v28, 20LL, 1LL, v39);
      v25 = v24;
      if ( v24 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
      v4 = v25;
      if ( v25 < 0 )
        goto LABEL_30;
      v5 = v31;
    }
    else
    {
      v21 = v5;
      v22 = v28;
      v23 = 5 * v21;
      *(_OWORD *)(v28 + 4 * v23) = *(_OWORD *)v39;
      *(_DWORD *)(v22 + 4 * v23 + 16) = *(_DWORD *)&v39[16];
      v5 = v20;
      v31 = v20;
    }
    v3 = a1;
    v13 = v32 + 1;
    v32 = v13;
    if ( v13 >= v37 )
      goto LABEL_6;
    v6 = v33;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v16 + 48LL))(v36, 9LL, v6) )
  {
    Bounds = CFilterEffect::GetBounds(*(_QWORD *)(v14 + 48), v33, &v38);
    v4 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Bounds, 0xF7u);
      goto LABEL_7;
    }
    goto LABEL_18;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v14 + 48) + 48LL))(
         *(_QWORD *)(v14 + 48),
         79LL) )
  {
    v18 = *(__m128i *)(v34 + 4);
    *(_QWORD *)&v38 = 0LL;
    v19 = _mm_srli_si128(v18, 8).m128i_u64[0];
    *((float *)&v38 + 3) = (float)(HIDWORD(v19) - v18.m128i_i32[1]);
    *((float *)&v38 + 2) = (float)((int)v19 - v18.m128i_i32[0]);
LABEL_18:
    v5 = v31;
    goto LABEL_20;
  }
  v4 = -2147467263;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x107u);
LABEL_7:
  v3 = a1;
LABEL_8:
  *(_DWORD *)(v3 + 32) ^= (*(_DWORD *)(v3 + 32) ^ (2 * (*(_DWORD *)(v3 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v28);
  return (unsigned int)v4;
}
