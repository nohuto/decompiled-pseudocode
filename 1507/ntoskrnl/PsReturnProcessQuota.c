/*
 * XREFs of PsReturnProcessQuota @ 0x1400EE610
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14012B124 (MmAdjustWorkingSetSizeEx.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessQuota(ULONG_PTR a1, __int64 a2, ULONG_PTR a3)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 3u, a3);
  return result;
}
