/*
 * XREFs of ?GetTrustLevel@WGIController@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x180063CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WGIController::GetTrustLevel(__int64 a1, unsigned int *a2)
{
  return DWMInputTarget::GetViewId((DWMInputTarget *)(a1 - 32), a2);
}
