/*
 * XREFs of PsReturnProcessQuota @ 0x140075124
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x1400AB9B4 (MmAdjustWorkingSetSizeEx.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045DED8 (MiCleanEmbryonicProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x14050921C (MmCreateProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x140010620 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 3u, a3);
  return result;
}
