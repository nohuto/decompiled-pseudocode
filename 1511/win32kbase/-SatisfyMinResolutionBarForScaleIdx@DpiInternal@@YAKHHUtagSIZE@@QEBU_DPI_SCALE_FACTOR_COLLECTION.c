/*
 * XREFs of ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00BC1B4
 * Callers:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C00B9A08 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C00B9934 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
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
  unsigned int v9; // edi
  unsigned int v10; // esi
  _DWORD *v11; // r11
  __int64 v12; // r8
  __int64 v13; // r11
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v16; // [rsp+58h] [rbp+20h]

  v4 = (int)this;
  v5 = a3;
  if ( (int)a3 >= SHIDWORD(a3) )
  {
    v7 = HIDWORD(a3);
  }
  else
  {
    v7 = a3;
    v5 = HIDWORD(a3);
  }
  v8 = a2 + v4;
  if ( v8 >= 0 )
  {
    if ( v8 > *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1 )
      v8 = *(_DWORD *)(*(_QWORD *)&a4 + 8LL) - 1;
    if ( v8 > 0 )
    {
      v9 = 100 * v5;
      v10 = 100 * v7;
      v11 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)&a4 + 16LL) + 4LL * v8);
      do
      {
        LODWORD(v16) = v9 / *v11;
        HIDWORD(v16) = v10 / *v11;
        v15[0] = v16;
        if ( DpiInternal::operator>=(v15, *(_DWORD **)&a4) )
          break;
        --v8;
        v11 = (_DWORD *)(v13 - 4);
      }
      while ( v12 - 1 > 0 );
    }
  }
  else
  {
    v8 = 0;
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
