/*
 * XREFs of ?OnPresentComplete@CAsyncFlushResponse@@UEAAJXZ @ 0x180061980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAsyncFlushResponse::OnPresentComplete(CAsyncFlushResponse *this)
{
  return CAsyncFlushResponse::SendResponse(this, 0);
}
