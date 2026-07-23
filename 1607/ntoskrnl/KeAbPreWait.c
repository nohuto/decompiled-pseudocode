/*
 * XREFs of KeAbPreWait @ 0x1400C62F0
 * Callers:
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     MiChangingSubsectionProtos @ 0x1401ED094 (MiChangingSubsectionProtos.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617ADC (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140669158 (PfpPrefetchSharedConflictNotifyStart.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140030BB0 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 a1, __int64 a2)
{
  char result; // al

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1, a2);
  *(_BYTE *)(a1 + 25) |= 1u;
  result = *(_BYTE *)(a1 + 32) & 0xFD;
  *(_BYTE *)(a1 + 32) = result;
  return result;
}
