/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x14045E7C8
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14045E458 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x14045F3C8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x140440DF0 (PiPnpRtlObjectEventRelease.c)
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
