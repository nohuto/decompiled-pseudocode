/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WNA@EAAJPEAW4TrustLevel@@@Z @ 0x18002AF00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CImmersiveWindowFactory::GetTrustLevel((CImmersiveWindowFactory *)(a1 - 208), a2);
}
