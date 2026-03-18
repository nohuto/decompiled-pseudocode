/*
 * XREFs of ?ComputePrefilteringDimensions@CMILMatrix@@QEBAXIIMAEAI0@Z @ 0x18005AFC4
 * Callers:
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x180080CBC (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 * Callees:
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005B910 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x1800B3EF0 (-ComputePrefilteredSize@@YAXIMMAEAI@Z.c)
 */

void __fastcall CMILMatrix::ComputePrefilteringDimensions(
        CMILMatrix *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  unsigned int v7; // edi
  float v8; // xmm6_4
  unsigned int v9[4]; // [rsp+20h] [rbp-28h] BYREF
  float v10; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF
  float v12; // [rsp+68h] [rbp+20h] BYREF

  v6 = a3;
  v7 = a2;
  v9[0] = a3;
  v11 = a2;
  if ( a4 > 0.0 )
  {
    v8 = 1.0 / a4;
    CMILMatrix::Get2DScaleDimensions(this, &v10, &v12);
    if ( (float)(1.0 / a4) >= v10 )
    {
      ComputePrefilteredSize(v7, v8, v10, &v11);
      v7 = v11;
    }
    if ( v8 >= v12 )
    {
      ComputePrefilteredSize(v6, v8, v12, v9);
      v6 = v9[0];
    }
  }
  *a5 = v7;
  *a6 = v6;
}
