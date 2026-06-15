/*
 * XREFs of ?QueryInterface@CAPOExceptionWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CAPOExceptionWrapper::QueryInterface((CAPOExceptionWrapper *)(a1 - 16), a2, a3);
}
