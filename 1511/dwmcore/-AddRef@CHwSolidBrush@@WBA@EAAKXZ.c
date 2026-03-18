/*
 * XREFs of ?AddRef@CHwSolidBrush@@WBA@EAAKXZ @ 0x1800BE380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwSolidBrush::AddRef()
{
  return LocalMILObject<CMILBrushLinearGradient>::Release();
}
