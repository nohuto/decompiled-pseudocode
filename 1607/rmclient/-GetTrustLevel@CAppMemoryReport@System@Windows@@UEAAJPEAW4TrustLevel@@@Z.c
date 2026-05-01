/*
 * XREFs of ?GetTrustLevel@CAppMemoryReport@System@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x180006A30
 * Callers:
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@W7EAAJPEAW4TrustLevel@@@Z @ 0x180006850 (-GetTrustLevel@CMemoryManager@System@Windows@@W7EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180006860 (-GetTrustLevel@CAppMemoryReport@System@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z.c)
 *     ?GetTrustLevel@CMemoryManager@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180006870 (-GetTrustLevel@CMemoryManager@System@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::GetTrustLevel(
        Windows::System::CAppMemoryReport *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}
