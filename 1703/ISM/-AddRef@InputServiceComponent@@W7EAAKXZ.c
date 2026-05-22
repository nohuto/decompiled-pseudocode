/*
 * XREFs of ?AddRef@InputServiceComponent@@W7EAAKXZ @ 0x1800055C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputServiceComponent::AddRef(__int64 a1)
{
  return PTPProcessor::AddRef((PTPProcessor *)(a1 - 8));
}
