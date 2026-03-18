/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiIdentifyPfn @ 0x140050C60 (MiIdentifyPfn.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiChargeWsles @ 0x140061CF0 (MiChargeWsles.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiAddViewsForSection @ 0x140062470 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400626D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiGetVadWakeList @ 0x14006C180 (MiGetVadWakeList.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(volatile signed __int32 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int8 CurrentIrql; // bl
  signed __int32 v6; // eax
  signed __int32 v8; // ett

  v3 = 0;
  CurrentIrql = a2;
  do
  {
    v6 = *a1;
    while ( v6 < 0 )
    {
      if ( (v6 & 0x40000000) == 0 )
      {
        v8 = v6;
        v6 = _InterlockedCompareExchange(a1, v6 | 0x40000000, v6);
        if ( v8 != v6 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
        __writecr8(CurrentIrql);
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3, a2, a3);
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v6 = *a1;
    }
  }
  while ( _interlockedbittestandset(a1, 0x1Fu) );
  return v3;
}
