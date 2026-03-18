/*
 * XREFs of SmAcquireReleaseCharges @ 0x1400D958C
 * Callers:
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D9054 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1401476BC (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140147B04 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     SmKmFreeMdlForLock @ 0x14014B838 (SmKmFreeMdlForLock.c)
 *     SmKmAllocateMdlForLock @ 0x14014F364 (SmKmAllocateMdlForLock.c)
 *     SmFpPreAllocate @ 0x140170E0C (SmFpPreAllocate.c)
 * Callees:
 *     MmChargeResources @ 0x1400D95D8 (MmChargeResources.c)
 *     MmReleaseResourceCharge @ 0x1400D9688 (MmReleaseResourceCharge.c)
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
