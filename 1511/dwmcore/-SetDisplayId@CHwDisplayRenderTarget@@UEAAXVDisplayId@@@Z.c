/*
 * XREFs of ?SetDisplayId@CHwDisplayRenderTarget@@UEAAXVDisplayId@@@Z @ 0x1800817B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::SetDisplayId(__int64 a1, int a2)
{
  *(_DWORD *)(a1 - 64) = a2;
}
