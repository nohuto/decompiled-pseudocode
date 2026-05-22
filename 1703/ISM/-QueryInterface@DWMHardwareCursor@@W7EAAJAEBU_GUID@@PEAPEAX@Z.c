/*
 * XREFs of ?QueryInterface@DWMHardwareCursor@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800227C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DWMHardwareCursor::QueryInterface((DWMHardwareCursor *)(a1 - 8), a2, a3);
}
