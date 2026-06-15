/*
 * XREFs of ?QueryInterface@CDuckingManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800453D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall CDuckingManager::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CDuckingManager::QueryInterface((CDuckingManager *)(a1 - 16), a2, a3);
}
