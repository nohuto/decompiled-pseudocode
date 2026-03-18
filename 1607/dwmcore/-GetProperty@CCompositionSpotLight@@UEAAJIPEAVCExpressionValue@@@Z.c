/*
 * XREFs of ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180151050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::GetProperty(
        CCompositionSpotLight *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx
  float v8; // xmm0_4
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  int v11; // xmm0_4
  float v12; // xmm0_4
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int128 v17; // xmm0

  v3 = 0;
  if ( a2 > 7 )
  {
    v13 = a2 - 8;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        v9 = (__m128)*((unsigned int *)this + 50);
        v10 = (__m128)*((unsigned int *)this + 51);
        v11 = *((_DWORD *)this + 52);
        goto LABEL_11;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
        v8 = *((float *)this + 57);
        goto LABEL_9;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v12 = *((float *)this + 57);
        goto LABEL_16;
      }
      if ( v16 != 1 )
        goto LABEL_22;
      *((_DWORD *)a3 + 16) = 70;
      v17 = *(_OWORD *)((char *)this + 248);
    }
    else
    {
      *((_DWORD *)a3 + 16) = 70;
      v17 = *(_OWORD *)((char *)this + 232);
    }
    *(_OWORD *)a3 = v17;
    goto LABEL_29;
  }
  if ( a2 == 7 )
  {
    v12 = *((float *)this + 56);
LABEL_16:
    v8 = v12 * 57.295776;
    goto LABEL_9;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = *((float *)this + 44);
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v8 = *((float *)this + 45);
    goto LABEL_9;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v8 = *((float *)this + 46);
    goto LABEL_9;
  }
  v7 = v6 - 2;
  if ( !v7 )
  {
    v9 = (__m128)*((unsigned int *)this + 53);
    v10 = (__m128)*((unsigned int *)this + 54);
    v11 = *((_DWORD *)this + 55);
LABEL_11:
    *(_QWORD *)a3 = _mm_unpacklo_ps(v9, v10).m128_u64[0];
    *((_DWORD *)a3 + 2) = v11;
    *((_DWORD *)a3 + 16) = 52;
    goto LABEL_29;
  }
  if ( v7 == 1 )
  {
    v8 = *((float *)this + 56);
LABEL_9:
    *(float *)a3 = v8;
    *((_DWORD *)a3 + 16) = 18;
LABEL_29:
    *((_BYTE *)a3 + 68) = 1;
    return v3;
  }
LABEL_22:
  v3 = -2147024809;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x90u);
  return v3;
}
