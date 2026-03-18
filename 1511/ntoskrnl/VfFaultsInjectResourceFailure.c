/*
 * XREFs of VfFaultsInjectResourceFailure @ 0x1406C4D50
 * Callers:
 *     VerifierIoAllocateDriverObjectExtension @ 0x1406B9368 (VerifierIoAllocateDriverObjectExtension.c)
 *     VerifierIoAllocateErrorLogEntry @ 0x1406B93C8 (VerifierIoAllocateErrorLogEntry.c)
 *     VerifierIoAllocateIrp @ 0x1406B93FC (VerifierIoAllocateIrp.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1406B966C (VerifierIoSetCompletionRoutineEx.c)
 *     VerifierPortIoAllocateIrp @ 0x1406B975C (VerifierPortIoAllocateIrp.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x1406C4CC8 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViKeInjectStatusAlerted @ 0x1406C6EB8 (ViKeInjectStatusAlerted.c)
 *     VerifierMmAllocateContiguousMemory @ 0x1406CF580 (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1406CF628 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1406CF6FC (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x1406CF7D0 (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x1406CF880 (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1406CF8D0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x1406CF9A8 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1406CFA20 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x1406CFACC (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1406CFBE4 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1406CFDF8 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x1406CFFAC (VerifierMmMapLockedPagesSpecifyCache.c)
 *     VerifierMmProbeAndLockPages @ 0x1406D0124 (VerifierMmProbeAndLockPages.c)
 *     VerifierMmProbeAndLockProcessPages @ 0x1406D01F8 (VerifierMmProbeAndLockProcessPages.c)
 * Callees:
 *     VfRandomGetNumber @ 0x1406B72E0 (VfRandomGetNumber.c)
 *     VfFaultsIsSystemSufficientlyBooted @ 0x1406C4E84 (VfFaultsIsSystemSufficientlyBooted.c)
 *     ViFaultsInjectionNotification @ 0x1406C5438 (ViFaultsInjectionNotification.c)
 *     ViFaultsIsCurrentAppTarget @ 0x1406C5530 (ViFaultsIsCurrentAppTarget.c)
 */

__int64 __fastcall VfFaultsInjectResourceFailure(int a1)
{
  unsigned int v3; // edi
  unsigned int v4; // esi

  if ( !ViFaultsInitialized )
  {
    ++ViFaultsDecisions;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_1406E02DC;
    return 0LL;
  }
  if ( (MmVerifierData & 4) != 0 )
  {
    v3 = VfFaultInjectionProbability;
    v4 = VfFaultInjectionMaxProbability;
    if ( !VfFaultInjectionProbability
      || VfFaultInjectionProbability > (unsigned int)VfFaultInjectionMaxProbability
      || !(unsigned int)VfFaultsIsSystemSufficientlyBooted()
      || !a1 && ViHaveFaultTags && !ViFaultsForceAllAPIs
      || !(unsigned int)ViFaultsIsCurrentAppTarget() )
    {
      return 0LL;
    }
    if ( (unsigned int)VfRandomGetNumber(0, v4) >= v3 )
    {
      ++dword_1406E02CC;
      if ( v3 != 600 || v4 != 10000 || (MEMORY[0xFFFFF78000000320] & 0x7FFFu) >= 0x400 )
        return 0LL;
      ++dword_1406E02D0;
    }
    else
    {
      ++dword_1406E02C8;
    }
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
  }
  else
  {
    if ( ViInjectInPagePathOnly != 1 || !BYTE2(KeGetCurrentThread()[1].Teb) )
      return 0LL;
    ViFaultsInjectionNotification(a1 != 0 ? 3 : 1);
    ++dword_1406E02B8;
  }
  return 1LL;
}
