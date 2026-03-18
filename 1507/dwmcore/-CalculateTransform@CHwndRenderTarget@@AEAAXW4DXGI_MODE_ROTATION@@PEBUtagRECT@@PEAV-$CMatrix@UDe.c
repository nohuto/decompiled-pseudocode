/*
 * XREFs of ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004A758
 * Callers:
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004A810 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitiali.c)
 * Callees:
 *     ?Rotate180@CBaseMatrix@@QEAAXXZ @ 0x180123A14 (-Rotate180@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate270@CBaseMatrix@@QEAAXXZ @ 0x180123A88 (-Rotate270@CBaseMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CBaseMatrix@@QEAAXXZ @ 0x180123B00 (-Rotate90@CBaseMatrix@@QEAAXXZ.c)
 */

struct D2DMatrix *__fastcall CHwndRenderTarget::CalculateTransform(
        __int64 a1,
        int a2,
        int *a3,
        const struct D2DMatrix *a4,
        _DWORD *a5)
{
  __int64 v5; // r10
  int v6; // eax
  int v9; // r9d
  __int128 v10; // xmm1
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // edx
  int v16; // eax
  float v17; // xmm0_4
  float v18; // xmm4_4

  v5 = a1 + 132;
  v6 = a3[2];
  *(_OWORD *)(a1 + 132) = IdentityMatrix;
  v9 = *a3;
  *(_OWORD *)(a1 + 148) = xmmword_180190B10;
  *(_OWORD *)(a1 + 164) = xmmword_180190B20;
  v10 = xmmword_180190B30;
  *(_DWORD *)(a1 + 124) = v6 - v9;
  v11 = a3[3];
  *(_DWORD *)(a1 + 120) = a2;
  v12 = a3[1];
  *(_DWORD *)(a1 + 128) = v11 - v12;
  *(_OWORD *)(v5 + 48) = v10;
  if ( v9 || v12 )
  {
    *(float *)(v5 + 48) = (float)-v9 + *(float *)(v5 + 48);
    *(float *)(v5 + 52) = (float)-v12 + *(float *)(v5 + 52);
  }
  v13 = a2 - 2;
  if ( !v13 )
  {
    CBaseMatrix::Rotate270((CBaseMatrix *)v5);
    v17 = *(float *)(v5 + 48) + 0.0;
    *(float *)(v5 + 52) = (float)*(int *)(a1 + 124) + *(float *)(v5 + 52);
    goto LABEL_12;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    CBaseMatrix::Rotate180((CBaseMatrix *)v5);
    v18 = (float)*(int *)(a1 + 128) + *(float *)(v5 + 52);
    *(float *)(v5 + 48) = (float)*(int *)(a1 + 124) + *(float *)(v5 + 48);
    *(float *)(v5 + 52) = v18;
    return D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, a4);
  }
  if ( v14 == 1 )
  {
    CBaseMatrix::Rotate90((CBaseMatrix *)v5);
    v16 = *(_DWORD *)(a1 + 128);
    *(float *)(v5 + 52) = *(float *)(v5 + 52) + 0.0;
    v17 = (float)v16 + *(float *)(v5 + 48);
LABEL_12:
    *(float *)(v5 + 48) = v17;
    *a5 |= 0x10000000u;
    return D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, a4);
  }
  *(_DWORD *)(a1 + 120) = 1;
  return D2DMatrixMultiply((struct D2DMatrix *)v5, (const struct D2DMatrix *)v5, a4);
}
