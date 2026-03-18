/*
 * XREFs of ?QueryInterface@CMILBrushLinearGradient@@WOI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BFE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILCOMBase *)(a1 - 232), a2, a3);
}
