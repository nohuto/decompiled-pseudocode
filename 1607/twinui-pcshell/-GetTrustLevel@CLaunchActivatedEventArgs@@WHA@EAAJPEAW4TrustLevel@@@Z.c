/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WHA@EAAJPEAW4TrustLevel@@@Z @ 0x18002ADA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CImmersiveWindowFactory::GetTrustLevel((CImmersiveWindowFactory *)(a1 - 112), a2);
}
