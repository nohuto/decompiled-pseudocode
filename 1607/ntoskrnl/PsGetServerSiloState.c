/*
 * XREFs of PsGetServerSiloState @ 0x1400B0120
 * Callers:
 *     SepQueueWorkItem @ 0x1400AFFCC (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x14067E35C (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E3A8 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x14067E8C0 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14067FBF8 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1256) + 992LL);
  else
    return 1LL;
}
