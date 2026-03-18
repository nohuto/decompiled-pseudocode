/*
 * XREFs of ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073CA4
 * Callers:
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073DA8 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 * Callees:
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180058DFC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18005B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18005B548 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x1800C0994 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::CalculateTransform(
        __int64 a1,
        int a2,
        _DWORD *a3,
        const struct CMILMatrix *a4,
        _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // r11
  int v8; // edx
  int v9; // edx
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // r11
  float v15; // xmm2_4
  float v16; // xmm1_4
  CMILMatrix *v17; // r10
  CMILMatrix *v18; // rcx
  __int64 v19; // r11
  CMILMatrix *v20; // r10
  __int64 v21; // r11

  v5 = a1 + 204;
  *(_OWORD *)(a1 + 204) = CMILMatrix::Identity;
  v6 = a1;
  *(_OWORD *)(a1 + 220) = xmmword_1801EAD20;
  *(_OWORD *)(a1 + 236) = xmmword_1801EAD30;
  *(_OWORD *)(a1 + 252) = xmmword_1801EAD40;
  *(_DWORD *)(a1 + 268) = dword_1801EAD50;
  *(_OWORD *)(a1 + 272) = CMILMatrix::Identity;
  *(_OWORD *)(a1 + 288) = xmmword_1801EAD20;
  *(_OWORD *)(a1 + 304) = xmmword_1801EAD30;
  *(_OWORD *)(a1 + 320) = xmmword_1801EAD40;
  *(_DWORD *)(a1 + 336) = dword_1801EAD50;
  *(_DWORD *)(a1 + 192) = a2;
  *(_DWORD *)(a1 + 196) = a3[2] - *a3;
  *(_DWORD *)(a1 + 200) = a3[3] - a3[1];
  if ( *a3 || a3[1] )
  {
    CMILMatrix::Translate((CMILMatrix *)v5, (float)-*a3, (float)-a3[1], 0.0);
    v10 = *(_DWORD *)(v5 + 64);
    v11 = *(_OWORD *)(v5 + 16);
    *(_OWORD *)(v6 + 272) = *(_OWORD *)v5;
    v12 = *(_OWORD *)(v5 + 32);
    *(_OWORD *)(v6 + 288) = v11;
    v13 = *(_OWORD *)(v5 + 48);
    *(_OWORD *)(v6 + 304) = v12;
    *(_OWORD *)(v6 + 320) = v13;
    *(_DWORD *)(v6 + 336) = v10;
  }
  v8 = a2 - 2;
  if ( !v8 )
  {
    CMILMatrix::Rotate270((CMILMatrix *)v5);
    v16 = 0.0;
    v15 = (float)*(int *)(v21 + 196);
    goto LABEL_12;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    CMILMatrix::Scale((CMILMatrix *)v5, -1.0, -1.0, 1.0);
    CMILMatrix::Translate(v20, (float)*(int *)(v19 + 196), (float)*(int *)(v19 + 200), 0.0);
    goto LABEL_7;
  }
  if ( v9 == 1 )
  {
    CMILMatrix::Rotate90((CMILMatrix *)v5);
    v15 = 0.0;
    v16 = (float)*(int *)(v14 + 200);
    v18 = v17;
LABEL_12:
    CMILMatrix::Translate(v18, v16, v15, 0.0);
    *a5 |= 0x10000000u;
    goto LABEL_7;
  }
  *(_DWORD *)(v6 + 192) = 1;
LABEL_7:
  CMILMatrix::Multiply((CMILMatrix *)v5, a4);
}
