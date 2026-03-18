/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C0164A44
 * Callers:
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C0164288 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C016454C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1C0164270 (--PWin81@@YA_NAEBUtagSIZE@@0@Z.c)
 */

__int64 __fastcall Win81::SatisfyMinResolutionBarForScaleIdx(
        Win81 *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct Win81::DPI_SCALE_FACTOR_COLLECTION *const a4)
{
  int v4; // eax
  int v5; // r8d
  int v6; // ecx
  _DWORD *v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // ebx
  __int64 i; // r9
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp+18h]
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v4 = a2;
  v5 = (int)this;
  if ( (int)a2 >= SHIDWORD(a2) )
  {
    v6 = HIDWORD(a2);
  }
  else
  {
    v6 = a2;
    v4 = HIDWORD(a2);
  }
  v7 = dword_1C002F1A8;
  if ( v5 >= 0 )
  {
    if ( v5 > 4 )
      v5 = 4;
    if ( v5 > 0 )
    {
      v8 = 100 * v4;
      v9 = 100 * v6;
      for ( i = v5; i > 0; i = v11 - 1 )
      {
        LODWORD(v13) = v8 / v7[i];
        HIDWORD(v13) = v9 / v7[i];
        v14 = v13;
        if ( Win81::operator>=(&v14, dword_1C002F070) )
          break;
        --v5;
      }
    }
  }
  else
  {
    v5 = 0;
  }
  return (unsigned int)v7[v5];
}
