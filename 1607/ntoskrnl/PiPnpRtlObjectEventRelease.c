/*
 * XREFs of PiPnpRtlObjectEventRelease @ 0x140501E38
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048BD04 (PiDqQueryActionQueueEntryFree.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405015D8 (PiPnpRtlObjectEventCreate.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 */

void __fastcall PiPnpRtlObjectEventRelease(char *P)
{
  unsigned int *v2; // rcx
  void *v3; // rcx
  unsigned int i; // edi
  void *v5; // rcx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P, 0xFFFFFFFF) == 1 )
  {
    v2 = (unsigned int *)*((_QWORD *)P + 1);
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = (void *)*((_QWORD *)P + 2);
    if ( v3 )
      ZwClose(v3);
    if ( (*((_DWORD *)P + 1) & 4) != 0 )
      SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 24));
    for ( i = 0; i < *((_DWORD *)P + 19); ++i )
    {
      v5 = *(void **)&P[32 * i + 104];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x41706E50u);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
