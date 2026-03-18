/*
 * XREFs of PsDetachSiloFromCurrentThread @ 0x14052EA14
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     SeInitServerSilo @ 0x140593C18 (SeInitServerSilo.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x1405A79A8 (SepRmLsaConnectRequest.c)
 *     CsrShutdownSynchronization @ 0x1406C094C (CsrShutdownSynchronization.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1406D62B4 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 *     EtwpServerSiloTerminateNotify @ 0x1406E6DD0 (EtwpServerSiloTerminateNotify.c)
 *     ExWnfServerSiloTerminated @ 0x1406F7718 (ExWnfServerSiloTerminated.c)
 * Callees:
 *     <none>
 */

void __fastcall PsDetachSiloFromCurrentThread(__int64 a1)
{
  if ( a1 != -2 )
    JUMPOUT(0x14061EF3ALL);
}
