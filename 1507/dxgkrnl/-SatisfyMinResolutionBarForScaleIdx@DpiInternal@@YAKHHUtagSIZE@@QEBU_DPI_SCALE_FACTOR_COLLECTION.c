/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0009C88
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0009A80 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0009C18 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C000A6D4 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
 */

__int64 __fastcall DpiInternal::SatisfyMinResolutionBarForScaleIdx(
        DpiInternal *this,
        int a2,
        __int64 a3,
        struct tagSIZE a4)
{
  int v4; // r10d
  int v5; // ecx
  int v7; // r11d
  int v8; // r10d
  unsigned int v10; // edi
  unsigned int v11; // esi
  _DWORD *v12; // r11
  __int64 v13; // r8
  __int64 v14; // r11
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h]

  v4 = (int)this;
  v5 = a3;
  if ( (int)a3 < SHIDWORD(a3) )
  {
    v7 = a3;
    v5 = HIDWORD(a3);
  }
  else
  {
    v7 = HIDWORD(a3);
  }
  v8 = a2 + v4;
  if ( v8 < 0 )
  {
    v8 = 0;
  }
  else
  {
    if ( v8 > *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1 )
      v8 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v8 > 0 )
    {
      v10 = 100 * v5;
      v11 = 100 * v7;
      v12 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&a4 + 16LL) + 4LL * v8);
      do
      {
        LODWORD(v16) = v10 / *v12;
        HIDWORD(v16) = v11 / *v12;
        v15[0] = v16;
        if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))DpiInternal::operator>=)(v15, a4) )
          break;
        --v8;
        v12 = (_DWORD *)(v14 - 4);
      }
      while ( v13 - 1 > 0 );
    }
  }
  if ( !a2
    && v8 > 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a4 + 24LL) + 4LL * v8) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a4 + 24LL)
                                                                               + 4LL * v8
                                                                               - 4) )
  {
    --v8;
  }
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)&a4 + 16LL) + 4LL * v8);
}
