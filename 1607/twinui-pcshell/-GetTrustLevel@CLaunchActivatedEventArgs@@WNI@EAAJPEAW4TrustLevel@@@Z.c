/*
 * XREFs of ?GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z @ 0x18002B260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLaunchActivatedEventArgs::GetTrustLevel(__int64 a1, enum TrustLevel *a2)
{
  return CImmersiveWindowFactory::GetTrustLevel((CImmersiveWindowFactory *)(a1 - 216), a2);
}
