/*
 * XREFs of ?QueryInterface@DWMCursorBroker@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMCursorBroker::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DWMCursorBroker::QueryInterface((DWMCursorBroker *)(a1 - 32), a2, a3);
}
