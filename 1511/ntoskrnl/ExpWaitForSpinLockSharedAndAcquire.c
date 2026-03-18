/*
 * XREFs of ExpWaitForSpinLockSharedAndAcquire @ 0x1400AAE30
 * Callers:
 *     RtlpWalkFrameChain @ 0x140026220 (RtlpWalkFrameChain.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400348F0 (KiAbEntryGetLockedHeadEntry.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAddTagForBigPages @ 0x140041A10 (ExpAddTagForBigPages.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     MiEndingOffsetWithLock @ 0x14007C7F0 (MiEndingOffsetWithLock.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MmProbeAndLockPages @ 0x1400A7230 (MmProbeAndLockPages.c)
 *     MiInitializeProbePacketVm @ 0x1400D5990 (MiInitializeProbePacketVm.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14021416C (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall ExpWaitForSpinLockSharedAndAcquire(volatile signed __int32 *a1, __int64 a2, __int64 a3)
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
  while ( v6 != _InterlockedCompareExchange(a1, (v6 + 1) & 0xBFFFFFFF, v6) );
  return v3;
}
