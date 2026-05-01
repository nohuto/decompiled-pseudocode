/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18002B3B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CImmersiveWindowFactory::GetTrustLevel((CImmersiveWindowFactory *)(a1 - 32), a2);
}
