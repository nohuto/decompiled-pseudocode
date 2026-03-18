/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x140442488
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x14053D550 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x14043C01C (PiPnpRtlObjectEventRelease.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *a1)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)a1[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)a1[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(a1, 0x58706E50u);
}
