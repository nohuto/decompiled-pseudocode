/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x140009D20
 * Callers:
 *     SepRmCallLsa @ 0x1400B1930 (SepRmCallLsa.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     ObpDecrementHandleCount @ 0x140406420 (ObpDecrementHandleCount.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     ObpIncrementHandleCountEx @ 0x14044DC50 (ObpIncrementHandleCountEx.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     EtwpEnableGuid @ 0x14048E3D4 (EtwpEnableGuid.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwInitializeSiloState @ 0x1405631E8 (EtwInitializeSiloState.c)
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14056B9C0 (SepRmLsaConnectRequest.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspShutdownCsrProcess @ 0x14067EA7C (PspShutdownCsrProcess.c)
 *     PspSiloInitializeUserSharedData @ 0x14067EDB8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x14067EE40 (PspSiloLoadApiSets.c)
 *     SeInitServerSilo @ 0x14068CAF4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x140693740 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1406B9F14 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ObCreateSiloRootDirectory @ 0x1406E6004 (ObCreateSiloRootDirectory.c)
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
