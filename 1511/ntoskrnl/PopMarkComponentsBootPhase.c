/*
 * XREFs of PopMarkComponentsBootPhase @ 0x14039F020
 * Callers:
 *     PopSaveHiberContext @ 0x1403A13B0 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140001FF0 (VfIsVerifierEnabled.c)
 *     HvlMarkHiberPhase @ 0x14011839C (HvlMarkHiberPhase.c)
 *     RtlMarkHiberPhase @ 0x1401187AC (RtlMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     FirstEntrySList @ 0x14015B950 (FirstEntrySList.c)
 *     VfIsVerifierExtensionEnabled @ 0x140166FF4 (VfIsVerifierExtensionEnabled.c)
 *     MmUpdateHiberMappings @ 0x14039DF40 (MmUpdateHiberMappings.c)
 *     BgkResumePrepare @ 0x14039ED54 (BgkResumePrepare.c)
 *     MmMarkHiberPhase @ 0x14039EE0C (MmMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x14039F3F4 (PopMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x14039F518 (KeMarkHiberPhase.c)
 *     xHalPowerEarlyRestore @ 0x1403AAAB0 (xHalPowerEarlyRestore.c)
 */

void __fastcall PopMarkComponentsBootPhase(PVOID Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int m; // ebx
  __int64 k; // rbx
  void *v6; // r8

  if ( !byte_1402DE321 )
  {
    PoSetHiberRange(0LL, 0x10000u, PopSaveHiberContext, 0LL, 0x6E72654Bu);
    PoSetHiberRange(0LL, 0x10000u, HalAllocateCrashDumpRegisters, 0LL, 0x6348616Cu);
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      PoSetHiberRange(0LL, 0x10000u, i, 0xA0uLL, 0x6E72654Bu);
      PoSetHiberRange(0LL, 0x10000u, i[12], *((unsigned __int16 *)i + 44), 0x6E72654Bu);
      PoSetHiberRange(0LL, 0x10000u, i[10], *((unsigned __int16 *)i + 36), 0x6E72654Bu);
    }
    for ( j = FirstEntrySList(&SListHead); j; j = j->Next )
      KeMarkHiberPhase(*((PVOID *)&j[-1].Next + 1));
    off_1402D2618();
    PopMarkHiberPhase(Address);
    PoSetHiberRange(0LL, 0x10000u, &KdPitchDebugger, 0LL, 0x626C644Bu);
    if ( !KdPitchDebugger )
    {
      KdSetHiberRange(&KdpContext);
      for ( k = 0LL; (unsigned int)k < (unsigned int)KeNumberProcessors_0; k = (unsigned int)(k + 1) )
      {
        v6 = (void *)KdLogBuffer[k];
        if ( v6 )
          PoSetHiberRange(0LL, 0x10000u, v6, 0x1000uLL, 0x626C644Bu);
      }
    }
    if ( (unsigned int)VfIsVerifierEnabled() )
    {
      if ( ViTrackIrqlQueue )
        PoSetHiberRange(0LL, 0x10000u, ViTrackIrqlQueue, 56LL * (unsigned int)ViTrackIrqlQueueLength, 0x72696656u);
      if ( (unsigned int)VfIsVerifierExtensionEnabled() == 1 && ViFnExtensionHiberFunc )
        PoSetHiberRange(0LL, 0x10000u, ViFnExtensionHiberFunc, 0LL, 0x72696656u);
    }
    BgkResumePrepare(0LL);
    RtlMarkHiberPhase();
    HvlMarkHiberPhase();
    MmMarkHiberPhase();
    for ( m = 0; m < IopNumTriageDumpDataBlocks; ++m )
      PoSetHiberRange(
        0LL,
        0x10000u,
        *(PVOID *)&IopTriageDumpDataBlocks[m],
        _mm_srli_si128((__m128i)IopTriageDumpDataBlocks[m], 8).m128i_u64[0] - *(_QWORD *)&IopTriageDumpDataBlocks[m],
        0x42706D44u);
    if ( PopShutdownNotificationCallback )
    {
      *((_BYTE *)Address + 3) = 1;
    }
    else
    {
      MmUpdateHiberMappings(1, (__int64)Address + 32);
      *((_BYTE *)Address + 4) = 1;
    }
  }
  *((_BYTE *)Address + 28) = 1;
}
