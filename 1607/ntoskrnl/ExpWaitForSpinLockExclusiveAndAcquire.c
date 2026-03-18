/*
 * XREFs of ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EF00
 * Callers:
 *     MiIdentifyPfn @ 0x14000FC90 (MiIdentifyPfn.c)
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026F70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140029A00 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiAddViewsForSection @ 0x14002C690 (MiAddViewsForSection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C920 (MiCheckPurgeAndUpMapCount.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14002EC30 (ExpAcquireSpinLockExclusive.c)
 *     MmCopyToCachedPage @ 0x140037900 (MmCopyToCachedPage.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MmPurgeSection @ 0x140072AB0 (MmPurgeSection.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     MiChargeWsles @ 0x1400E1B20 (MiChargeWsles.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpWaitForSpinLockExclusiveAndAcquire(volatile signed __int32 *a1, unsigned __int8 CurrentIrql)
{
  unsigned int v2; // edi
  signed __int32 v5; // eax
  signed __int32 v7; // ett

  v2 = 0;
  do
  {
    v5 = *a1;
    while ( v5 < 0 )
    {
      if ( (v5 & 0x40000000) == 0 )
      {
        v7 = v5;
        v5 = _InterlockedCompareExchange(a1, v5 | 0x40000000, v5);
        if ( v7 != v5 )
          continue;
      }
      if ( CurrentIrql != 0xFF )
        __writecr8(CurrentIrql);
      if ( (++v2 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v2);
      if ( CurrentIrql != 0xFF )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
      }
      v5 = *a1;
    }
  }
  while ( _interlockedbittestandset(a1, 0x1Fu) );
  return v2;
}
