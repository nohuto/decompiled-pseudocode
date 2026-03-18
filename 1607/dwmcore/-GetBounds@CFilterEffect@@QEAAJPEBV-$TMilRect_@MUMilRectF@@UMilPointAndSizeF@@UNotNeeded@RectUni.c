/*
 * XREFs of ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014F2C
 * Callers:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014F2C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetBoundsWithEffects@CVisual@@QEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180109F34 (-GetBoundsWithEffects@CVisual@@QEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 * Callees:
 *     ?GetBounds@CFilterEffect@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014F2C (-GetBounds@CFilterEffect@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::GetBounds(__int64 a1, __int128 *a2, __int64 a3)
{
  int v4; // ebx
  unsigned int v5; // ecx
  __int128 *v6; // r9
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  __int128 v10; // xmm0
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // r8
  char v19; // al
  __int64 v20; // rcx
  int Bounds; // eax
  __m128i v22; // xmm1
  unsigned __int64 v23; // xmm0_8
  unsigned int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax
  unsigned int v29; // [rsp+20h] [rbp-49h]
  int v30; // [rsp+30h] [rbp-39h]
  __int128 v31; // [rsp+38h] [rbp-31h] BYREF
  int v32; // [rsp+48h] [rbp-21h]
  unsigned int v33; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v34; // [rsp+50h] [rbp-19h]
  __int64 v35; // [rsp+58h] [rbp-11h]
  __int128 *v36; // [rsp+60h] [rbp-9h]
  __int64 v37; // [rsp+68h] [rbp-1h]
  __int64 v38; // [rsp+70h] [rbp+7h]
  __int128 v39; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v40[20]; // [rsp+88h] [rbp+1Fh] BYREF

  v38 = a3;
  v4 = 0;
  v36 = a2;
  v32 = 0;
  v5 = 0;
  v33 = 0;
  v6 = a2;
  v7 = *(_DWORD *)(a1 + 32) & 0xFFFFFFFE;
  v34 = 0;
  v8 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ (v7 + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v8;
  v31 = 0LL;
  if ( (v8 & 6) != 2 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xE8u);
    goto LABEL_7;
  }
  v9 = *(int *)(a1 + 232);
  if ( (_DWORD)v9 )
  {
    v16 = 0LL;
    v37 = *(int *)(a1 + 232);
    v35 = 0LL;
    if ( v9 <= 0 )
    {
LABEL_6:
      (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)a1 + 120LL))(a1, &v31, v38);
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v16);
      v30 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 4 * v16);
      v39 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      v18 = *(_QWORD *)(v17 + 24);
      if ( v18 )
      {
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v18 + 48LL))(*(_QWORD *)(v17 + 24), 9LL);
        v20 = *(_QWORD *)(v17 + 24);
        if ( v19 )
        {
          Bounds = CFilterEffect::GetBounds(v20, v36, &v39);
          v4 = Bounds;
          if ( Bounds < 0 )
          {
            v29 = 258;
            v15 = Bounds;
            goto LABEL_11;
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 48LL))(v20, 92LL) )
          {
            v4 = -2147467263;
            v29 = 276;
            goto LABEL_10;
          }
          v22 = *(__m128i *)(v17 + 4);
          *(_QWORD *)&v39 = 0LL;
          v23 = _mm_srli_si128(v22, 8).m128i_u64[0];
          *((float *)&v39 + 3) = (float)(HIDWORD(v23) - v22.m128i_i32[1]);
          *((float *)&v39 + 2) = (float)((int)v23 - v22.m128i_i32[0]);
        }
        v5 = v34;
      }
      else
      {
        v39 = *v6;
      }
      v24 = v5 + 1;
      *(_DWORD *)v40 = v30;
      *(_OWORD *)&v40[4] = v39;
      if ( v5 + 1 >= v5 )
      {
        v4 = 0;
        if ( v24 <= v33 )
        {
          v25 = v5;
          v26 = v31;
          v27 = 5 * v25;
          *(_OWORD *)(v31 + 4 * v27) = *(_OWORD *)v40;
          *(_DWORD *)(v26 + 4 * v27 + 16) = *(_DWORD *)&v40[16];
          v5 = v24;
          v34 = v24;
          goto LABEL_29;
        }
        v28 = DynArrayImpl<0>::AddMultipleAndSet(&v31, 20LL, 1LL, v40);
        v4 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      }
      else
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v4 < 0 )
      {
        v29 = 285;
        goto LABEL_10;
      }
      v5 = v34;
LABEL_29:
      v16 = v35 + 1;
      v35 = v16;
      if ( v16 >= v37 )
        goto LABEL_6;
      v6 = v36;
    }
  }
  v10 = *a2;
  *(_DWORD *)v40 = 0;
  *(_OWORD *)&v40[4] = v10;
  v11 = DynArrayImpl<0>::AddMultipleAndSet(&v31, 20LL, 1LL, v40);
  v4 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  if ( v4 >= 0 )
    goto LABEL_6;
  v29 = 238;
LABEL_10:
  v15 = v4;
LABEL_11:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v29);
LABEL_7:
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  DynArrayImpl<1>::~DynArrayImpl<1>(&v31, v12, v13);
  return (unsigned int)v4;
}
