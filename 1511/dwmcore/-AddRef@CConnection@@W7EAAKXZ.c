/*
 * XREFs of ?AddRef@CConnection@@W7EAAKXZ @ 0x1800BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConnection::AddRef(__int64 a1)
{
  return CArrayBasedCoverageSet::AddRef((CArrayBasedCoverageSet *)(a1 - 8));
}
