/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x14048C268
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x14048D088 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiPnpRtlObjectEventRelease @ 0x1404E4DC8 (PiPnpRtlObjectEventRelease.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)a1[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (void *)a1[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(a1, 0x58706E50u);
}
