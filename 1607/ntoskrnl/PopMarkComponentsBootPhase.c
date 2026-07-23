/*
 * XREFs of PopMarkComponentsBootPhase @ 0x1403CAFB4
 * Callers:
 *     PopSaveHiberContext @ 0x1403CCB40 (PopSaveHiberContext.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x140082F44 (VfIsVerifierEnabled.c)
 *     RtlMarkHiberPhase @ 0x1401132CC (RtlMarkHiberPhase.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     HvlMarkHiberPhase @ 0x1401271CC (HvlMarkHiberPhase.c)
 *     FirstEntrySList @ 0x140167360 (FirstEntrySList.c)
 *     VfIsVerifierExtensionEnabled @ 0x140171E64 (VfIsVerifierExtensionEnabled.c)
 *     MmUpdateHiberMappings @ 0x1403C9630 (MmUpdateHiberMappings.c)
 *     BgkResumePrepare @ 0x1403CA94C (BgkResumePrepare.c)
 *     KdMarkHiberPhase @ 0x1403CABD4 (KdMarkHiberPhase.c)
 *     PopMarkHiberPhase @ 0x1403CAC58 (PopMarkHiberPhase.c)
 *     MmMarkHiberPhase @ 0x1403CAD7C (MmMarkHiberPhase.c)
 *     KeMarkHiberPhase @ 0x1403CB1C8 (KeMarkHiberPhase.c)
 *     xHalPowerEarlyRestore @ 0x1403D6AEC (xHalPowerEarlyRestore.c)
 */

void __fastcall PopMarkComponentsBootPhase(unsigned int *Address)
{
  PVOID *i; // rbx
  PSLIST_ENTRY j; // rbx
  unsigned int k; // ebx
  _QWORD *v5; // rbx

  if ( !byte_140303501 )
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
    off_1402F22B8();
    PopMarkHiberPhase(Address);
    KdMarkHiberPhase();
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
    for ( k = 0; k < IopNumTriageDumpDataBlocks; ++k )
      PoSetHiberRange(
        0LL,
        0x10000u,
        IopTriageDumpDataBlocks[2 * k],
        _mm_srli_si128(*(__m128i *)&IopTriageDumpDataBlocks[2 * k], 8).m128i_u64[0]
      - (_QWORD)IopTriageDumpDataBlocks[2 * k],
        0x42706D44u);
    v5 = PopShutdownNotificationCallback;
    if ( PopShutdownNotificationCallback )
    {
      PoSetHiberRange(0LL, 0x10000u, PopShutdownNotificationCallback, 0x18uLL, 0x6E72654Bu);
      ((void (__fastcall *)(_QWORD))*v5)(v5[2]);
    }
    MmUpdateHiberMappings(1, (__int64)(Address + 8));
    *((_BYTE *)Address + 3) = 1;
  }
  *((_BYTE *)Address + 28) = 1;
}
