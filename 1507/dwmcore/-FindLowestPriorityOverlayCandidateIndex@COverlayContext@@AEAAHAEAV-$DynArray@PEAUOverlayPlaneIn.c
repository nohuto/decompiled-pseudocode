/*
 * XREFs of ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@AEAAHAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F69CC
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ?IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z @ 0x1800F7114 (-IsHigherProprity@COverlayContext@@CA_NPEAUOverlayPlaneInfo@1@0@Z.c)
 */

__int64 __fastcall COverlayContext::FindLowestPriorityOverlayCandidateIndex(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int i; // esi

  LODWORD(v2) = -1;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v2 = 0LL;
    for ( i = 1; i < *(_DWORD *)(a2 + 24); ++i )
    {
      if ( !COverlayContext::IsHigherProprity(
              *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)a2 + 8LL * i),
              *(struct COverlayContext::OverlayPlaneInfo **)(*(_QWORD *)a2 + 8 * v2)) )
        v2 = i;
    }
  }
  return (unsigned int)v2;
}
