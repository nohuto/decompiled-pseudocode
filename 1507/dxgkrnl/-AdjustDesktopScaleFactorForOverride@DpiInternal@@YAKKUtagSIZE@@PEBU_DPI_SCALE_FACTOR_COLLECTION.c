/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0009C18
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0009B98 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0022490 (-UpdateScaleFactorForOverride@@YAXPEAU_DPI_INFORMATION@@HPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0009C88 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

unsigned int __fastcall DpiInternal::AdjustDesktopScaleFactorForOverride(
        DpiInternal *this,
        int a2,
        struct tagSIZE a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v4; // esi
  int v6; // ebp
  unsigned int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v13; // [rsp+20h] [rbp-8h]

  v4 = (int)a4;
  v6 = (int)this;
  if ( (unsigned int)((_DWORD)a4 + 11) > 0x16 )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v11 + 24) = 311LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = *(_DWORD *)(*(_QWORD *)&a3 + 8LL);
  v8 = 0;
  if ( v7 )
  {
    v9 = *(_DWORD **)(*(_QWORD *)&a3 + 16LL);
    do
    {
      if ( v6 == *v9 )
        break;
      ++v8;
      ++v9;
    }
    while ( v8 < v7 );
  }
  if ( v8 >= v7 )
  {
    v12 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v12 + 24) = 294LL;
    WdLogEvent5_WdAssertion(v12);
  }
  return DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)v8, v4, a2, a3, v13);
}
