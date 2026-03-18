/*
 * XREFs of SmAcquireReleaseCharges @ 0x1400F8ECC
 * Callers:
 *     SmFpCleanup @ 0x1400F6A78 (SmFpCleanup.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400F9010 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     SmKmFreeMdlForLock @ 0x14011098C (SmKmFreeMdlForLock.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140110A14 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140110B74 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmKmAllocateMdlForLock @ 0x14011B02C (SmKmAllocateMdlForLock.c)
 *     SmFpPreAllocate @ 0x140142F28 (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x1400F8F18 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x1400F8FC8 (MmReleaseResourceCharge.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(unsigned __int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // r10d

  v3 = a1 >> 12;
  v4 = 1;
  v5 = (a2 & 1) != 0;
  if ( (a2 & 2) != 0 )
    v5 |= 2u;
  if ( (_DWORD)a3 )
    MmReleaseResourceCharge(v3, v5, 0LL);
  else
    return (unsigned int)MmChargeResources(v3, v5, a3, 1LL);
  return v4;
}
