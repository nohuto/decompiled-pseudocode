/*
 * XREFs of ?Release@CDuckingManager@@WBI@EAAKXZ @ 0x180045400
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDuckingManager::Release(__int64 a1)
{
  return CBackgroundSessionCallbacks::Release((CBackgroundSessionCallbacks *)(a1 - 24));
}
