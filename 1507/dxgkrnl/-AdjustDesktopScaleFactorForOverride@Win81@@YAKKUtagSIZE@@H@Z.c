/*
 * XREFs of ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C0164288
 * Callers:
 *     ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164664 (-FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164AF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C0164A44 (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

unsigned int __fastcall Win81::AdjustDesktopScaleFactorForOverride(
        Win81 *this,
        __int64 a2,
        struct tagSIZE a3,
        const struct Win81::DPI_SCALE_FACTOR_COLLECTION *a4)
{
  LONG cx; // edi
  int v5; // esi
  __int64 v6; // rax
  _DWORD *v7; // rax
  unsigned int i; // ebx
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp+10h]

  v11 = a2;
  cx = a3.cx;
  v5 = (int)this;
  if ( (unsigned int)(a3.cx + 4) > 8 )
  {
    v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = &unk_1C002F1A8;
  for ( i = 0; i < 5; ++i )
  {
    if ( v5 == *v7 )
      break;
    ++v7;
  }
  if ( i >= 5 )
  {
    v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 455LL;
    WdLogEvent5_WdAssertion(v9);
  }
  return Win81::SatisfyMinResolutionBarForScaleIdx((Win81 *)(i + cx), v11, a3, a4);
}
