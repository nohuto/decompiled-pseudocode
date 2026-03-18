/*
 * XREFs of MiIsProcessCfgEnabled @ 0x140014304
 * Callers:
 *     MiCommitVadCfgBits @ 0x140429850 (MiCommitVadCfgBits.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiCfgMarkValidEntries @ 0x1404F42BC (MiCfgMarkValidEntries.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x1406617CC (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(qword_140327F90 + 276840672) != 0LL;
}
