/*
 * XREFs of ?AddRef@MouseProcessor@@WKI@EAAKXZ @ 0x180059D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MouseProcessor::AddRef(__int64 a1)
{
  return TouchInfoAdapter::AddRef((TouchInfoAdapter *)(a1 - 168));
}
