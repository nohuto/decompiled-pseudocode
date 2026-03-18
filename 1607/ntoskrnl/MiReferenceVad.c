/*
 * XREFs of MiReferenceVad @ 0x14002C37C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCfgInitializeProcess @ 0x14046CF1C (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x1404F38DC (MiLockVadRange.c)
 *     MiCreatePebOrTeb @ 0x14050B230 (MiCreatePebOrTeb.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 *     MiDeleteAllPartialCloneVads @ 0x14066305C (MiDeleteAllPartialCloneVads.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
