/*
 * XREFs of ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0009B98
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0009A80 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C0009C18 (-AdjustDesktopScaleFactorForOverride@DpiInternal@@YAKKUtagSIZE@@PEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000A60C (-CalculateMinMaxOverride@DpiInternal@@YAXKUtagSIZE@@PEAJ1QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

void __fastcall DpiInternal::FillOverridesAndAdjustedScaleFactor(
        DpiInternal *this,
        __int64 a2,
        int *a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+20h] [rbp-18h]
  const struct _DPI_SCALE_FACTOR_COLLECTION *v10; // [rsp+28h] [rbp-10h]

  v6 = (int)this;
  if ( !*((_DWORD *)a4 + 3) )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v7 + 24) = 512LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_DWORD *)a4 + 8) || !*((_DWORD *)a4 + 9) )
  {
    v8 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v8 + 24) = 513LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DpiInternal::CalculateMinMaxOverride(
    (DpiInternal *)*((unsigned int *)a4 + 3),
    *((_QWORD *)a4 + 4),
    (struct tagSIZE)((char *)a4 + 80),
    (int *)a4 + 22,
    a3,
    v10);
  if ( v6 )
  {
    *((_DWORD *)a4 + 21) = 1234568;
    *((_DWORD *)a4 + 2) = (100 * v6 + 48) / 0x60u;
  }
  else
  {
    *((_DWORD *)a4 + 2) = DpiInternal::AdjustDesktopScaleFactorForOverride(
                            (DpiInternal *)*((unsigned int *)a4 + 3),
                            *((_QWORD *)a4 + 4),
                            (struct tagSIZE)a3,
                            (const struct _DPI_SCALE_FACTOR_COLLECTION *)*((unsigned int *)a4 + 21),
                            v9);
  }
}
