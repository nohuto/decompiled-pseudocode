/*
 * XREFs of ?QueryInterface@CDesktopRenderTarget@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BF970
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CMILFactory::QueryInterface((CMILCOMBase *)(a1 - 152), a2, a3);
}
