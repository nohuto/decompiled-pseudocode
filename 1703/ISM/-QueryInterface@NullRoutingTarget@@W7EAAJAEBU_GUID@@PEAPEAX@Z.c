/*
 * XREFs of ?QueryInterface@NullRoutingTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800113B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NullRoutingTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return NullRoutingTarget::QueryInterface((NullRoutingTarget *)(a1 - 8), a2, a3);
}
