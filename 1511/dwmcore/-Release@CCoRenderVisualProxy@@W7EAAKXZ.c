/*
 * XREFs of ?Release@CCoRenderVisualProxy@@W7EAAKXZ @ 0x1800BC960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCoRenderVisualProxy::Release(__int64 a1)
{
  return CConnection::Release((CConnection *)(a1 - 8));
}
