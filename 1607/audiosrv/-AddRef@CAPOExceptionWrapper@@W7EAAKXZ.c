/*
 * XREFs of ?AddRef@CAPOExceptionWrapper@@W7EAAKXZ @ 0x180039800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAPOExceptionWrapper::AddRef(__int64 a1)
{
  return CAPOExceptionWrapper::AddRef((CAPOExceptionWrapper *)(a1 - 8));
}
