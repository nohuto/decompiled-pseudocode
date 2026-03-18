/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@Win81@@YAXIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164664
 * Callers:
 *     ?FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z @ 0x1C016454C (-FillDpiInfo@Win81@@YAXAEBUtagSIZE@@0IIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0164AF4 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z @ 0x1C0164288 (-AdjustDesktopScaleFactorForOverride@Win81@@YAKKUtagSIZE@@H@Z.c)
 *     ?CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1C016434C (-CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 */

void __fastcall Win81::FillOverridesAndAdjustedScaleFactor(
        Win81 *this,
        __int64 a2,
        __int64 a3,
        struct _DPI_INFORMATION *a4)
{
  int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rax
  const struct Win81::DPI_SCALE_FACTOR_COLLECTION *v8; // r9

  v5 = (int)this;
  if ( !*(_DWORD *)(a3 + 12) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 598LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*(_DWORD *)(a3 + 32) || !*(_DWORD *)(a3 + 36) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 599LL;
    WdLogEvent5_WdAssertion(v7);
  }
  Win81::CalculateMinMaxOverride(
    (Win81 *)*(unsigned int *)(a3 + 12),
    *(_QWORD *)(a3 + 32),
    (struct tagSIZE)(a3 + 80),
    (int *)(a3 + 88));
  if ( v5 )
  {
    *(_DWORD *)(a3 + 84) = 1234568;
    *(_DWORD *)(a3 + 8) = (100 * v5 + 48) / 0x60u;
  }
  else
  {
    *(_DWORD *)(a3 + 8) = Win81::AdjustDesktopScaleFactorForOverride(
                            (Win81 *)*(unsigned int *)(a3 + 12),
                            *(_QWORD *)(a3 + 32),
                            (struct tagSIZE)*(unsigned int *)(a3 + 84),
                            v8);
  }
}
