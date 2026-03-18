/*
 * XREFs of ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800BF610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CInteractionContextWrapper::Release(__int64 a1)
{
  return CWARPCallbackRenderer::Release((CWARPCallbackRenderer *)(a1 - 8));
}
