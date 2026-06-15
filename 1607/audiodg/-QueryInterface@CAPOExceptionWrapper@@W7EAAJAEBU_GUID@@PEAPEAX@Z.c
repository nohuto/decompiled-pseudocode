/*
 * XREFs of ?QueryInterface@CAPOExceptionWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x14001A010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOExceptionWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CAPOExceptionWrapper::QueryInterface((CAPOExceptionWrapper *)(a1 - 8), a2, a3);
}
