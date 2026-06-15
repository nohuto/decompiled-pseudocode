/*
 * XREFs of ?AddRef@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x180049010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::AddRef(__int64 a1)
{
  return CAudioStream::AddRef((CAudioStream *)(a1 - 16));
}
