/*
 * XREFs of KeAbPreWait @ 0x140020C90
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     MiProceedToCreateSubsectionProtos @ 0x1401E39B0 (MiProceedToCreateSubsectionProtos.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140630E58 (PfpPrefetchSharedConflictNotifyStart.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140033590 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 a1)
{
  char result; // al

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1);
  *(_BYTE *)(a1 + 25) |= 1u;
  result = *(_BYTE *)(a1 + 32) & 0xFD;
  *(_BYTE *)(a1 + 32) = result;
  return result;
}
