/*
 * XREFs of MiSystemCacheVaControlArea @ 0x140018E30
 * Callers:
 *     MmSetAddressRangeModified @ 0x140016FA0 (MmSetAddressRangeModified.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x14001F3F8 (MiRecheckVaWorkingSet.c)
 *     MmProbeAndLockPages @ 0x14002F120 (MmProbeAndLockPages.c)
 *     MiSwapWslEntries @ 0x140049E70 (MiSwapWslEntries.c)
 *     MiInitializeProbePacketVm @ 0x14009A924 (MiInitializeProbePacketVm.c)
 *     MmProtectSystemCacheView @ 0x1401E6EC4 (MmProtectSystemCacheView.c)
 * Callees:
 *     MiGetSystemCacheReverseMap @ 0x140019B10 (MiGetSystemCacheReverseMap.c)
 */

__int64 __fastcall MiSystemCacheVaControlArea(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(MiGetSystemCacheReverseMap(a1) + 24);
  if ( (v1 & 1) != 0 )
    v1 &= ~1uLL;
  return *(_QWORD *)v1;
}
