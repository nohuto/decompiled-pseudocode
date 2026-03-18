/*
 * XREFs of ?AddRef@CHwSolidBrush@@WBA@EAAKXZ @ 0x18009B600
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CHwSolidBrush::AddRef()
{
  return LocalMILObject<CMILBrushLinearGradient>::Release();
}
