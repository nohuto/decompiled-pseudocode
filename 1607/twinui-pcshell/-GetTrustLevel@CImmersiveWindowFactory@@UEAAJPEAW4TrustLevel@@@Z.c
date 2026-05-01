/*
 * XREFs of ?GetTrustLevel@CImmersiveWindowFactory@@UEAAJPEAW4TrustLevel@@@Z @ 0x180028D70
 * Callers:
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z @ 0x18002A850 (-GetTrustLevel@CLaunchActivatedEventArgs@@W7EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WGI@EAAJPEAW4TrustLevel@@@Z @ 0x18002AA20 (-GetTrustLevel@CLaunchActivatedEventArgs@@WGI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18002AC10 (-GetTrustLevel@CLaunchActivatedEventArgs@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WHA@EAAJPEAW4TrustLevel@@@Z @ 0x18002ADA0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WHA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WLA@EAAJPEAW4TrustLevel@@@Z @ 0x18002AE50 (-GetTrustLevel@CLaunchActivatedEventArgs@@WLA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WNA@EAAJPEAW4TrustLevel@@@Z @ 0x18002AF00 (-GetTrustLevel@CLaunchActivatedEventArgs@@WNA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18002B040 (-GetTrustLevel@CLaunchActivatedEventArgs@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WHI@EAAJPEAW4TrustLevel@@@Z @ 0x18002B110 (-GetTrustLevel@CLaunchActivatedEventArgs@@WHI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WLI@EAAJPEAW4TrustLevel@@@Z @ 0x18002B1D0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WLI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z @ 0x18002B260 (-GetTrustLevel@CLaunchActivatedEventArgs@@WNI@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WCA@EAAJPEAW4TrustLevel@@@Z @ 0x18002B3B0 (-GetTrustLevel@CLaunchActivatedEventArgs@@WCA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CLaunchActivatedEventArgs@@WIA@EAAJPEAW4TrustLevel@@@Z @ 0x18002B490 (-GetTrustLevel@CLaunchActivatedEventArgs@@WIA@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveWindowFactory::GetTrustLevel(CImmersiveWindowFactory *this, enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
