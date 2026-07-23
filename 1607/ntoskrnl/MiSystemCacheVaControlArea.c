/*
 * XREFs of MiSystemCacheVaControlArea @ 0x1400189B0
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x14001EF78 (MiRecheckVaWorkingSet.c)
 *     MmProbeAndLockPages @ 0x14002ECA0 (MmProbeAndLockPages.c)
 *     MiSwapWslEntries @ 0x1400499F0 (MiSwapWslEntries.c)
 *     MiInitializeProbePacketVm @ 0x14009A124 (MiInitializeProbePacketVm.c)
 *     MmProtectSystemCacheView @ 0x1401E6CF0 (MmProtectSystemCacheView.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x140019690 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MiSystemCacheVaControlArea(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(MiGetSystemCacheReverseMap(a1) + 24);
  if ( (v1 & 1) != 0 )
    v1 &= ~1uLL;
  return *(_QWORD *)v1;
}
