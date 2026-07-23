/*
 * XREFs of SmAcquireReleaseCharges @ 0x140003E04
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140003F2C (SmFpCleanup.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14011EB50 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14011F090 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmKmFreeMdlForLock @ 0x140124EA0 (SmKmFreeMdlForLock.c)
 *     SmKmAllocateMdlForLock @ 0x14012F67C (SmKmAllocateMdlForLock.c)
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 * Callees:
 *     MmReleaseResourceCharge @ 0x140003E4C (MmReleaseResourceCharge.c)
 *     MmChargeResources @ 0x140003E88 (MmChargeResources.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(unsigned __int64 a1, char a2, int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rcx
  unsigned int v5; // eax

  v3 = 1;
  v4 = a1 >> 12;
  v5 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v5 |= 2u;
  if ( a3 )
    MmReleaseResourceCharge(v4, v5, 0LL);
  else
    return (unsigned int)MmChargeResources(v4, v5, 0LL, 1LL);
  return v3;
}
