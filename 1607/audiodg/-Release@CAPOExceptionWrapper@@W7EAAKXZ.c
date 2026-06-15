/*
 * XREFs of ?Release@CAPOExceptionWrapper@@W7EAAKXZ @ 0x14001A040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAPOExceptionWrapper::Release(__int64 a1)
{
  return CAPOExceptionWrapper::Release((CAPOExceptionWrapper *)(a1 - 8));
}
