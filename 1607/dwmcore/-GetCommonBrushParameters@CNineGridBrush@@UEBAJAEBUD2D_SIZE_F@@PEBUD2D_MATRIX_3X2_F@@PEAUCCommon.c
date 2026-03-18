/*
 * XREFs of ?GetCommonBrushParameters@CNineGridBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x1801648B4 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 */

__int64 __fastcall CNineGridBrush::GetCommonBrushParameters(
        CNineGridBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct CCommonBrushParameters *a4)
{
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // esi
  __m128i v12; // xmm6
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  __m128i v16; // xmm0
  __int128 v17; // xmm0
  float v19; // [rsp+30h] [rbp-30h] BYREF
  float v20; // [rsp+34h] [rbp-2Ch]
  float v21; // [rsp+38h] [rbp-28h]
  float v22; // [rsp+3Ch] [rbp-24h]
  _BYTE v23[16]; // [rsp+40h] [rbp-20h] BYREF

  v6 = *((float *)this + 37) * *((float *)this + 36);
  v19 = *((float *)this + 35) * *((float *)this + 34);
  v7 = *((float *)this + 39) * *((float *)this + 38);
  v20 = v6;
  v8 = *((float *)this + 41) * *((float *)this + 40);
  v9 = *((_QWORD *)this + 16);
  v21 = v7;
  v22 = v8;
  v10 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, const struct D2D_MATRIX_3X2_F *))(*(_QWORD *)v9 + 168LL))(
          v9,
          a2,
          a3);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x177u);
  }
  else
  {
    v12 = _mm_loadu_si128((const __m128i *)Insets::Clamp(v23, &v19));
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
           *((_QWORD *)this + 16),
           78LL) )
    {
      *((__m128i *)a4 + 3) = v12;
      *((_BYTE *)a4 + 290) = *((_BYTE *)this + 168);
    }
    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 16) + 48LL))(
                *((_QWORD *)this + 16),
                80LL) )
    {
      v13 = *((float *)this + 36);
      v19 = *((float *)this + 34);
      v14 = *((float *)this + 38);
      v20 = v13;
      v15 = *((float *)this + 40);
      v21 = v14;
      v22 = v15;
      v16 = _mm_loadu_si128((const __m128i *)Insets::Clamp(v23, &v19));
      *((_DWORD *)a4 + 29) = 1;
      *(__m128i *)((char *)a4 + 120) = v16;
      v17 = *((_OWORD *)a4 + 1);
      *(__m128i *)((char *)a4 + 152) = v12;
      *(_OWORD *)((char *)a4 + 136) = v17;
      *((_BYTE *)a4 + 168) = *((_BYTE *)this + 168);
    }
    return 0;
  }
  return v11;
}
