/*
 * XREFs of PspReferenceSiloObject @ 0x14024445C
 * Callers:
 *     PspReferenceJobSilo @ 0x140415668 (PspReferenceJobSilo.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     PsGetSiloObject @ 0x140490B30 (PsGetSiloObject.c)
 *     EtwpAddGuidEntry @ 0x1404D4348 (EtwpAddGuidEntry.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14052EB48 (SepInformFileSystemsOfDeletedLogon.c)
 *     PspStartMonitorDeferred @ 0x1405939AC (PspStartMonitorDeferred.c)
 *     EtwpServerSiloCreateNotify @ 0x140593ABC (EtwpServerSiloCreateNotify.c)
 *     PspAddProcessToSilo @ 0x1406C17F8 (PspAddProcessToSilo.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     PspShutdownServerSilos @ 0x1406C292C (PspShutdownServerSilos.c)
 *     PspUnregisterMonitorDeferred @ 0x1406C2E94 (PspUnregisterMonitorDeferred.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall PspReferenceSiloObject(void *a1)
{
  return ObfReferenceObjectWithTag(a1, 0x746C6644u);
}
