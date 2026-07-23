/*
 * XREFs of MiReferenceVad @ 0x14002BEFC
 * Callers:
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046BDEC (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x140663140 (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
