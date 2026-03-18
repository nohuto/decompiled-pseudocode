/*
 * XREFs of PiPnpRtlObjectEventRelease @ 0x14043C01C
 * Callers:
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140442488 (PiDqQueryActionQueueEntryFree.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
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
