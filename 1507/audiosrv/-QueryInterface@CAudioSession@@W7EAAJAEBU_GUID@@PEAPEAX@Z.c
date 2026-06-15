/*
 * XREFs of ?QueryInterface@CAudioSession@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CAudioSession::QueryInterface((CAudioSession *)(a1 - 8), a2, a3);
}
