/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x1400098A0
 * Callers:
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x1404052E0 (ObpDecrementHandleCount.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14044CB20 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14044D250 (ObCloseHandleTableEntry.c)
 *     EtwpEnableGuid @ 0x14048EE64 (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14056BF00 (SepRmLsaConnectRequest.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 *     PspShutdownCsrProcess @ 0x14067EB60 (PspShutdownCsrProcess.c)
 *     PspSiloInitializeUserSharedData @ 0x14067EE9C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x14067EF24 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14068CBD8 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693824 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406BA04C (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x1406E613C (ObCreateSiloRootDirectory.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PsDetachSiloFromCurrentThread(__int64 a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  *(_QWORD *)&result[1].WaitBlockFill11[160] = a1;
  return result;
}
