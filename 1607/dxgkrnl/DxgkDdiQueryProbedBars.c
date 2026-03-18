/*
 * XREFs of DxgkDdiQueryProbedBars @ 0x1C015A8FC
 * Callers:
 *     ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C002EF20 (-DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z.c)
 * Callees:
 *     ?DdiQueryProbedBars@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_QUERYPROBEDBARS@@@Z @ 0x1C0159004 (-DdiQueryProbedBars@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_QUERYPROBEDBARS@@@Z.c)
 */

void __fastcall DxgkDdiQueryProbedBars(__int64 a1, unsigned __int16 a2, ULONG *a3)
{
  ADAPTER_RENDER *v3; // rcx
  _DXGKARG_QUERYPROBEDBARS v4; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(ADAPTER_RENDER **)(a1 + 2136);
  *(&v4.VirtualFunctionIndex + 1) = 0;
  v4.VirtualFunctionIndex = a2;
  v4.BaseRegisterValues = a3;
  ADAPTER_RENDER::DdiQueryProbedBars(v3, &v4);
}
