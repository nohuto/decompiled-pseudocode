/*
 * XREFs of ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0028E1C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C000D1E0 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
 */

void __fastcall DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        DpiInternal *this,
        struct tagSIZE a2,
        __int64 a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // ebx
  bool v7; // zf
  int v8; // [rsp+34h] [rbp+Ch]
  __int64 v9; // [rsp+40h] [rbp+18h]
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v8 = HIDWORD(this);
  v4 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    v5 = *(_QWORD *)(a3 + 16);
    v6 = 100 * (_DWORD)this;
    do
    {
      LODWORD(v9) = v6 / *(_DWORD *)(v5 + 4 * v4);
      HIDWORD(v9) = (unsigned int)(100 * v8) / *(_DWORD *)(v5 + 4 * v4);
      v10 = v9;
      if ( DpiInternal::operator>=(&v10, (_DWORD *)a3) )
        break;
      v7 = (_DWORD)v4 == 1;
      v4 = (unsigned int)(v4 - 1);
    }
    while ( !v7 );
  }
  *((_DWORD *)a4 + 3) = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4 * v4);
}
