/*
 * XREFs of PiPnpRtlFreeContainerRemoveInfo @ 0x14062EB74
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14062EC7C (PiPnpRtlGatherContainerRemoveInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 */

void __fastcall PiPnpRtlFreeContainerRemoveInfo(unsigned int **P)
{
  unsigned int *v2; // rcx
  unsigned int *v3; // rcx

  if ( P )
  {
    v2 = *P;
    if ( v2 )
      PiDmObjectRelease(v2);
    v3 = P[1];
    if ( v3 )
      PiDmObjectRelease(v3);
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
