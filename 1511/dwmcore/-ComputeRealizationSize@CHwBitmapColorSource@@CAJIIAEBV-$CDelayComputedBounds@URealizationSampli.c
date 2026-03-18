/*
 * XREFs of ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x18008C200
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18008BF20 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 * Callees:
 *     ?RoundToPow2@@YAII@Z @ 0x18001368C (-RoundToPow2@@YAII@Z.c)
 *     ?ComputePrefilteringDimensions@CBaseMatrix@@IEBAXIIMAEAI0@Z @ 0x1800477E0 (-ComputePrefilteringDimensions@CBaseMatrix@@IEBAXIIMAEAI0@Z.c)
 *     ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077160 (-ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV-$CDelayComputedBounds@URealizati.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeRealizationSize(
        unsigned int a1,
        unsigned int a2,
        int *a3,
        CBaseMatrix *a4,
        int a5,
        int a6,
        float a7,
        int a8,
        __int64 a9)
{
  unsigned int v10; // edi
  int *v11; // r10
  _DWORD *v13; // rdx
  unsigned int *v14; // rsi
  unsigned int *v15; // r14
  unsigned int v16; // eax
  _DWORD *v17; // r15
  unsigned int v18; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx

  v10 = 0;
  v11 = a3;
  v13 = (_DWORD *)(a9 + 72);
  if ( (unsigned int)(*(_DWORD *)(a9 + 72) - 4) <= 1 )
  {
    v20 = *(_DWORD *)(a9 + 76);
    if ( v20 < a1 )
    {
      if ( a6 || a5 )
      {
        v15 = (unsigned int *)(a9 + 12);
        *(_DWORD *)(a9 + 12) = RoundToPow2(v20);
      }
      else
      {
        v15 = (unsigned int *)(a9 + 12);
        *(_DWORD *)(a9 + 12) = v20;
      }
    }
    else
    {
      v15 = (unsigned int *)(a9 + 12);
      *(_DWORD *)(a9 + 12) = a1;
    }
    v21 = *(_DWORD *)(a9 + 80);
    if ( v21 < a2 )
    {
      if ( a6 || a5 )
      {
        v14 = (unsigned int *)(a9 + 16);
        *(_DWORD *)(a9 + 16) = RoundToPow2(v21);
      }
      else
      {
        v14 = (unsigned int *)(a9 + 16);
        *(_DWORD *)(a9 + 16) = v21;
      }
    }
    else
    {
      v14 = (unsigned int *)(a9 + 16);
      *(_DWORD *)(a9 + 16) = a2;
    }
    *(_BYTE *)(a9 + 88) = 1;
    v13 = (_DWORD *)(a9 + 72);
  }
  else
  {
    v14 = (unsigned int *)(a9 + 16);
    v15 = (unsigned int *)(a9 + 12);
    if ( a6 )
    {
      CBaseMatrix::ComputePrefilteringDimensions(
        a4,
        *(_DWORD *)(a9 + 76),
        *(_DWORD *)(a9 + 80),
        a7,
        (unsigned int *)(a9 + 12),
        v14);
      v11 = a3;
      v13 = (_DWORD *)(a9 + 72);
    }
    else
    {
      *v15 = *(_DWORD *)(a9 + 76);
      *v14 = *(_DWORD *)(a9 + 80);
    }
  }
  v16 = *v15;
  v17 = (_DWORD *)(a9 + 28);
  v18 = *v14;
  *(_DWORD *)(a9 + 28) = 0;
  *(_BYTE *)(a9 + 20) = 0;
  *(_DWORD *)(a9 + 32) = 0;
  *(_DWORD *)(a9 + 36) = v16;
  *(_DWORD *)(a9 + 40) = v18;
  if ( v16 > a1 || v18 > a2 )
  {
    *(_BYTE *)(a9 + 88) = 1;
    if ( (unsigned __int8)CHwBitmapColorSource::ComputeMinimumRealizationBounds(v11, v13, (int *)(a9 + 28)) )
    {
      if ( *(_DWORD *)(a9 + 36) - *(_DWORD *)(a9 + 28) <= a1 && *(_DWORD *)(a9 + 40) - *(_DWORD *)(a9 + 32) <= a2 )
        goto LABEL_36;
    }
    if ( a8 && a6 )
    {
      v10 = -2147467263;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467263, 0x450u);
      return v10;
    }
    if ( *(_DWORD *)(a9 + 36) - *(_DWORD *)(a9 + 28) <= a1 )
    {
      if ( *v17 || *(_DWORD *)(a9 + 36) < *v15 )
        *(_BYTE *)(a9 + 20) = 1;
    }
    else
    {
      *v15 = a1;
      *v17 = 0;
      *(_DWORD *)(a9 + 36) = a1;
    }
    if ( *(_DWORD *)(a9 + 40) - *(_DWORD *)(a9 + 32) > a2 )
    {
      *v14 = a2;
      *(_DWORD *)(a9 + 32) = 0;
      *(_DWORD *)(a9 + 40) = a2;
      return v10;
    }
    if ( *(_DWORD *)(a9 + 32) || *(_DWORD *)(a9 + 40) < *v14 )
LABEL_36:
      *(_BYTE *)(a9 + 20) = 1;
  }
  return v10;
}
