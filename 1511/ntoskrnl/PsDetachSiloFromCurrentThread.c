/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14049BC98
 * Callers:
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpServerSiloCreateNotify @ 0x140526A2C (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140526CAC (SeInitServerSilo.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     PspShutdownCsrProcess @ 0x140640950 (PspShutdownCsrProcess.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406542BC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpServerSiloTerminateNotify @ 0x140663CF0 (EtwpServerSiloTerminateNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall PsDetachSiloFromCurrentThread(__int64 a1)
{
  if ( a1 != -2 )
    JUMPOUT(0x1405A53AALL);
}
