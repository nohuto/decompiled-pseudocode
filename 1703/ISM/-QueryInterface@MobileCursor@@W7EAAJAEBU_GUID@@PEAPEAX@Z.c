/*
 * XREFs of ?QueryInterface@MobileCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180027110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileCursor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return MobileCursor::QueryInterface((MobileCursor *)(a1 - 8), a2, a3);
}
