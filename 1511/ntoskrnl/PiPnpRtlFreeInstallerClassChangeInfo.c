/*
 * XREFs of PiPnpRtlFreeInstallerClassChangeInfo @ 0x14051A6DC
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405199A0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 */

void __fastcall PiPnpRtlFreeInstallerClassChangeInfo(unsigned int **P, __int64 a2, unsigned int *a3)
{
  unsigned int *v4; // rcx
  unsigned int *v5; // rcx
  unsigned int *v6; // rax

  if ( P )
  {
    v4 = *P;
    if ( v4 )
      PiDmObjectRelease(v4);
    v5 = P[1];
    if ( v5 )
      PiDmObjectRelease(v5);
    v6 = P[2];
    if ( v6 )
    {
      PiDmRemoveCacheReferenceForObject(v6[7], *((_QWORD *)v6 + 2), a3);
      PiDmObjectRelease(P[2]);
    }
    ExFreePoolWithTag(P, 0x47706E50u);
  }
}
