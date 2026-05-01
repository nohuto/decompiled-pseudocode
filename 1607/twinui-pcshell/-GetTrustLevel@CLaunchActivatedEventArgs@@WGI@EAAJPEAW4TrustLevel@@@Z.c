/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WGI@EAAJPEAW4TrustLevel@@@Z @ 0x18002AA20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CImmersiveWindowFactory::GetTrustLevel((CImmersiveWindowFactory *)(a1 - 104), a2);
}
