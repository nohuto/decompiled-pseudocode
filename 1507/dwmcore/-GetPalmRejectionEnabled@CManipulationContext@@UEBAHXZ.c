/*
 * XREFs of ?GetPalmRejectionEnabled@CManipulationContext@@UEBAHXZ @ 0x18009AE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::GetPalmRejectionEnabled(CManipulationContext *this)
{
  return *((_BYTE *)this + 28) & 1;
}
