/*
 * XREFs of ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x1800072F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(__int64 a1)
{
  return MagnifierTarget::AddRef((MagnifierTarget *)(a1 - 16));
}
