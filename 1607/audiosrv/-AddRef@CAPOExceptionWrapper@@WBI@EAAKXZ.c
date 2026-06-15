/*
 * XREFs of ?AddRef@CAPOExceptionWrapper@@WBI@EAAKXZ @ 0x180039820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAPOExceptionWrapper::AddRef(__int64 a1)
{
  return CAPOExceptionWrapper::AddRef((CAPOExceptionWrapper *)(a1 - 24));
}
