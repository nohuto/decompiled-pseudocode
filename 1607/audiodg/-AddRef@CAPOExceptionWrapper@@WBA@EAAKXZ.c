/*
 * XREFs of ?AddRef@CAPOExceptionWrapper@@WBA@EAAKXZ @ 0x140019FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAPOExceptionWrapper::AddRef(__int64 a1)
{
  return CAPOExceptionWrapper::AddRef((CAPOExceptionWrapper *)(a1 - 16));
}
