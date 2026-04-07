/*
 * XREFs of ?UpdateInputTransform@CTopLevelWindow@@AEAAJXZ @ 0x18002484C
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025200 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180036340 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateInputTransform(CTopLevelWindow *this)
{
  __int64 v1; // rax
  signed int v2; // ebx
  bool v4; // si
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  int v9; // xmm0_4
  int v10; // xmm1_4
  __int64 v11; // rdx
  int v12; // eax
  __m128i v13; // xmm1
  signed int LastError; // eax
  int v15; // [rsp+38h] [rbp-39h] BYREF
  int v16; // [rsp+3Ch] [rbp-35h]
  int v17; // [rsp+40h] [rbp-31h]
  int v18; // [rsp+44h] [rbp-2Dh]
  int v19; // [rsp+48h] [rbp-29h]
  int v20; // [rsp+4Ch] [rbp-25h]
  int v21; // [rsp+50h] [rbp-21h]
  int v22; // [rsp+54h] [rbp-1Dh]
  int v23; // [rsp+58h] [rbp-19h]
  int v24; // [rsp+5Ch] [rbp-15h]
  int v25; // [rsp+60h] [rbp-11h]
  int v26; // [rsp+64h] [rbp-Dh]
  float v27; // [rsp+68h] [rbp-9h]
  float v28; // [rsp+6Ch] [rbp-5h]
  int v29; // [rsp+70h] [rbp-1h]
  int v30; // [rsp+74h] [rbp+3h]
  _DWORD v31[16]; // [rsp+78h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 93);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 40) )
  {
    v4 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v1 + 172) - 1.0)) & _xmm) < 0.0000011920929
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v1 + 176) - 1.0)) & _xmm) < 0.0000011920929
      && !*(_DWORD *)(v1 + 312)
      && !*(_DWORD *)(v1 + 316)
      && !*(_DWORD *)(v1 + 320)
      && !*(_DWORD *)(v1 + 324);
    if ( (*((_BYTE *)this + 264) & 1) == 0 || !v4 )
    {
      v31[14] = 0;
      v31[13] = 0;
      v31[12] = 0;
      v31[11] = 0;
      v31[9] = 0;
      v31[8] = 0;
      v31[7] = 0;
      v31[6] = 0;
      v31[4] = 0;
      v31[3] = 0;
      v31[2] = 0;
      v31[1] = 0;
      v31[15] = 1065353216;
      v31[10] = 1065353216;
      v31[5] = 1065353216;
      v31[0] = 1065353216;
      v6 = *(_DWORD *)(v1 + 312);
      if ( v6 || *(_DWORD *)(v1 + 316) )
      {
        v7 = *(_DWORD *)(v1 + 316);
        v26 = 0;
        v24 = 0;
        v23 = 0;
        v22 = 0;
        v21 = 0;
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v16 = 0;
        v29 = 0;
        v30 = 1065353216;
        v25 = 1065353216;
        v20 = 1065353216;
        v15 = 1065353216;
        v27 = (float)-v6;
        v28 = (float)-v7;
        D2DMatrixMultiply((struct D2DMatrix *)v31, (const struct D2DMatrix *)v31, (const struct D2DMatrix *)&v15);
      }
      v8 = *((_QWORD *)this + 93);
      v29 = 0;
      v28 = 0.0;
      v27 = 0.0;
      v9 = *(_DWORD *)(v8 + 172);
      v10 = *(_DWORD *)(v8 + 176);
      v26 = 0;
      v24 = 0;
      v23 = 0;
      v22 = 0;
      v21 = 0;
      v19 = 0;
      v18 = 0;
      v17 = 0;
      v16 = 0;
      v15 = v9;
      v20 = v10;
      v25 = 1065353216;
      v30 = 1065353216;
      D2DMatrixMultiply((struct D2DMatrix *)v31, (const struct D2DMatrix *)v31, (const struct D2DMatrix *)&v15);
      v11 = *((_QWORD *)this + 93);
      v12 = *(_DWORD *)(v11 + 320);
      if ( v12 || *(_DWORD *)(v11 + 324) )
      {
        v13 = _mm_cvtsi32_si128(*(_DWORD *)(v11 + 324));
        v26 = 0;
        v24 = 0;
        v23 = 0;
        v22 = 0;
        v21 = 0;
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v16 = 0;
        v29 = 0;
        v30 = 1065353216;
        v25 = 1065353216;
        v20 = 1065353216;
        v15 = 1065353216;
        v27 = (float)v12;
        LODWORD(v28) = _mm_cvtepi32_ps(v13).m128_u32[0];
        D2DMatrixMultiply((struct D2DMatrix *)v31, (const struct D2DMatrix *)v31, (const struct D2DMatrix *)&v15);
      }
      if ( (dword_1800BF414 & 1) == 0 )
      {
        dword_1800BF360 = -2147024891;
        dword_1800BF414 |= 1u;
        dword_1800BF364 = -2147023496;
        dword_1800BF368 = -2147024809;
      }
      SetLastError(0);
      if ( (unsigned int)UpdateWindowTransform(*(_QWORD *)(*((_QWORD *)this + 93) + 40LL), v31, 1LL) )
      {
        *((_BYTE *)this + 264) &= ~1u;
        *((_BYTE *)this + 264) |= v4;
      }
      else
      {
        LastError = GetLastError();
        v2 = LastError;
        if ( LastError > 0 )
          v2 = (unsigned __int16)LastError | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR(0x14u, &dword_1800BF360, 3LL, v2, 0x1518u);
      }
      if ( v2 == -2147023496 || v2 == -2147024809 || v2 == -2147024891 )
        return 0;
    }
  }
  return (unsigned int)v2;
}
