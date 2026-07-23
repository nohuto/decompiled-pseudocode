/*
 * XREFs of PspDeleteSilo @ 0x14067E9A4
 * Callers:
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 * Callees:
 *     PsGetServerSiloState @ 0x1400AE2D8 (PsGetServerSiloState.c)
 *     PspIsServerSilo @ 0x1400B0D44 (PspIsServerSilo.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 *     SeRmCleanupSiloState @ 0x14068CB54 (SeRmCleanupSiloState.c)
 */

void __fastcall PspDeleteSilo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *(_DWORD *)(a1 + 216) )
    NT_ASSERT("Silo->ActiveProcesses == 0");
  if ( PspIsServerSilo(a1) && (unsigned int)PsGetServerSiloState(v2) != 4 )
    NT_ASSERT("PsGetServerSiloState(Silo) == SERVERSILO_TERMINATED");
  if ( PspIsServerSilo(v2) )
  {
    SeRmCleanupSiloState(*(_QWORD *)(v3 + 1256) + 768LL);
    PspDeleteServerSiloGlobals(*(_QWORD *)(a1 + 1256));
    *(_QWORD *)(a1 + 1256) = 0LL;
  }
}
