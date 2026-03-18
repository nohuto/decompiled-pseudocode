/*
 * XREFs of PiPnpRtlFreeContainerRemoveInfo @ 0x14067FB38
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14067FBE4 (PiPnpRtlGatherContainerRemoveInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
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
