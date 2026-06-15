/*
 * XREFs of ?Release@CPlaybackManager@@WBA@EAAKXZ @ 0x1800453F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CPlaybackManager::Release(__int64 a1)
{
  return CBackgroundSessionCallbacks::Release((CBackgroundSessionCallbacks *)(a1 - 16));
}
