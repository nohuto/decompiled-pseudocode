/*
 * XREFs of ViPoolLogStackTrace @ 0x1407463EC
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 *     VfFreePoolNotification @ 0x140746198 (VfFreePoolNotification.c)
 *     VerifierMmAllocateContiguousMemory @ 0x14075304C (VerifierMmAllocateContiguousMemory.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCache @ 0x1407530F4 (VerifierMmAllocateContiguousMemorySpecifyCache.c)
 *     VerifierMmAllocateContiguousMemorySpecifyCacheNode @ 0x1407531C8 (VerifierMmAllocateContiguousMemorySpecifyCacheNode.c)
 *     VerifierMmAllocateContiguousNodeMemory @ 0x14075329C (VerifierMmAllocateContiguousNodeMemory.c)
 *     VerifierMmAllocateMappingAddress @ 0x14075334C (VerifierMmAllocateMappingAddress.c)
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x14075339C (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocateNonCachedMemory @ 0x140753474 (VerifierMmAllocateNonCachedMemory.c)
 *     VerifierMmAllocatePagesForMdl @ 0x1407534EC (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140753598 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmCreateMdl @ 0x1407536B0 (VerifierMmCreateMdl.c)
 *     VerifierMmMapIoSpace @ 0x1407538C4 (VerifierMmMapIoSpace.c)
 *     VerifierMmMapLockedPages @ 0x1407539B0 (VerifierMmMapLockedPages.c)
 *     VerifierMmMapLockedPagesSpecifyCache @ 0x140753A78 (VerifierMmMapLockedPagesSpecifyCache.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x1400216E0 (KeExpandKernelStackAndCalloutEx.c)
 *     RtlEnoughStackSpaceForStackCapture @ 0x140245BF8 (RtlEnoughStackSpaceForStackCapture.c)
 *     ViPoolLogStackCallout @ 0x1407463BC (ViPoolLogStackCallout.c)
 */

void __fastcall ViPoolLogStackTrace(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx

  if ( VfPoolTraces )
  {
    v2 = VfPoolTraces
       + ((unsigned __int64)(_InterlockedIncrement(&VfPoolTracesIndex) & (unsigned int)(VfPoolTracesLength - 1)) << 7);
    *(_QWORD *)(v2 + 16) = KeGetCurrentThread();
    *(_QWORD *)v2 = a1;
    *(_QWORD *)(v2 + 8) = a2;
    if ( (VfOptionFlags & 2) != 0 )
    {
LABEL_3:
      *(_QWORD *)(v2 + 24) = 0LL;
      return;
    }
    if ( KeGetCurrentIrql() > 1u || (unsigned int)RtlEnoughStackSpaceForStackCapture() )
    {
      ViPoolLogStackCallout((PVOID *)v2);
    }
    else if ( KeExpandKernelStackAndCalloutEx(
                (PEXPAND_STACK_CALLOUT)ViPoolLogStackCallout,
                (PVOID)v2,
                0xE30uLL,
                1u,
                0LL) < 0 )
    {
      goto LABEL_3;
    }
  }
}
