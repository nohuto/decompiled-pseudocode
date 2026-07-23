/*
 * XREFs of PsGetServerSiloState @ 0x1400AE2D8
 * Callers:
 *     SepQueueWorkItem @ 0x1400AE184 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x14067E440 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x14067E48C (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x14067E9A4 (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14067FCDC (PspCatchCriticalBreak.c)
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
