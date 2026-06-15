/*
 * XREFs of ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStream::QueryInterface(__int64 a1, const struct _GUID *a2, char **a3)
{
  return CAudioStream::QueryInterface((CAudioStream *)(a1 - 8), a2, a3);
}
