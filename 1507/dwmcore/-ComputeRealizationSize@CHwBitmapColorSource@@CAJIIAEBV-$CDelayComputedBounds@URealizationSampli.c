/*
 * XREFs of ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1800199B8
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x1800196D8 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 * Callees:
 *     ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x18005FA48 (-ComputePrefilteredSize@@YAXIMMAEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     sqrtf_0 @ 0x180099BF6 (sqrtf_0.c)
 *     ?RoundToPow2@@YAII@Z @ 0x180125C24 (-RoundToPow2@@YAII@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D470 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeRealizationSize(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        float *a4,
        int a5,
        int a6,
        float a7,
        int a8,
        _DWORD *a9)
{
  _DWORD *v9; // rbx
  int v11; // r15d
  unsigned int v12; // edi
  __int64 v13; // r10
  _DWORD *v15; // r9
  unsigned int v17; // esi
  unsigned int v18; // r12d
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  unsigned int v22; // eax
  _DWORD *v23; // rsi
  unsigned int v24; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+18h]

  v29 = a3;
  v9 = a9;
  v11 = a6;
  v12 = 0;
  v13 = a3;
  v15 = a9 + 18;
  if ( (unsigned int)(a9[18] - 4) <= 1 )
  {
    v26 = a9[19];
    if ( v26 < a1 )
    {
      if ( a6 || a5 )
        v9[3] = RoundToPow2(v26);
      else
        a9[3] = v26;
    }
    else
    {
      a9[3] = a1;
    }
    v27 = v9[20];
    if ( v27 < a2 )
    {
      if ( v11 || a5 )
        v9[4] = RoundToPow2(v27);
      else
        v9[4] = v27;
    }
    else
    {
      v9[4] = a2;
    }
    *((_BYTE *)v9 + 88) = 1;
  }
  else if ( a6 )
  {
    v17 = a9[20];
    v18 = a9[19];
    v28 = v18;
    LODWORD(a9) = v17;
    if ( a7 > 0.0 )
    {
      v19 = 1.0 / a7;
      v20 = sqrtf_0((float)(*a4 * *a4) + (float)(a4[1] * a4[1]));
      v21 = sqrtf_0((float)(a4[4] * a4[4]) + (float)(a4[5] * a4[5]));
      if ( v19 >= v20 )
      {
        ComputePrefilteredSize(v18, v19, v20, &v28);
        v18 = v28;
      }
      if ( v19 >= v21 )
      {
        ComputePrefilteredSize(v17, v19, v21, (unsigned int *)&a9);
        v17 = (unsigned int)a9;
      }
      v13 = v29;
      v15 = v9 + 18;
    }
    v9[3] = v18;
    v9[4] = v17;
  }
  else
  {
    a9[3] = a9[19];
    v9[4] = v9[20];
  }
  v22 = v9[3];
  v23 = v9 + 7;
  v24 = v9[4];
  v9[7] = 0;
  *((_BYTE *)v9 + 20) = 0;
  v9[8] = 0;
  v9[9] = v22;
  v9[10] = v24;
  if ( v22 > a1 || v24 > a2 )
  {
    *((_BYTE *)v9 + 88) = 1;
    if ( (unsigned __int8)CHwBitmapColorSource::ComputeMinimumRealizationBounds(v13, v15, v9 + 7) )
    {
      if ( v9[9] - v9[7] <= a1 && v9[10] - v9[8] <= a2 )
        goto LABEL_42;
    }
    if ( a8 && v11 )
    {
      v12 = -2147467263;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x450u);
      return v12;
    }
    if ( v9[9] - v9[7] <= a1 )
    {
      if ( *v23 || v9[9] < v9[3] )
        *((_BYTE *)v9 + 20) = 1;
    }
    else
    {
      v9[3] = a1;
      *v23 = 0;
      v9[9] = a1;
    }
    if ( v9[10] - v9[8] > a2 )
    {
      v9[4] = a2;
      v9[8] = 0;
      v9[10] = a2;
      return v12;
    }
    if ( v9[8] || v9[10] < v9[4] )
LABEL_42:
      *((_BYTE *)v9 + 20) = 1;
  }
  return v12;
}
