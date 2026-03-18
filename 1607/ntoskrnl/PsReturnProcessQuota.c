/*
 * XREFs of PsReturnProcessQuota @ 0x1400750A4
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1400AD44C (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045F008 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1405261BC (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x140010AA0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 3u, a3);
  return result;
}
