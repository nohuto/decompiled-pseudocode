/*
 * XREFs of ?RemoveUnbackedSurfaces@COverlayContext@@AEAAXAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800F751C
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180012740 (-DeriveCheckCandidatesList@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayCon.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x1800DEB0C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall COverlayContext::RemoveUnbackedSurfaces(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 i; // rbx
  __int64 v5; // rcx
  unsigned int v6; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 24);
  for ( i = 0LL; (unsigned int)i < v2; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*(_QWORD *)a2 + 8 * i);
    if ( *(_BYTE *)(v5 + 153) && *(_BYTE *)(v5 + 157) )
    {
      v6 = 1;
      if ( v2 <= 1 )
        goto LABEL_9;
      while ( 1 )
      {
        result = v6;
        if ( *(_QWORD *)(v5 + 160) == **(_QWORD **)(*(_QWORD *)a2 + 8LL * v6) )
          break;
        if ( ++v6 >= v2 )
          goto LABEL_9;
      }
      if ( v6 == -1 )
      {
LABEL_9:
        result = DynArray<CWARPCallbackRenderer *,0>::RemoveAt((__int64 *)a2, i);
        LODWORD(i) = i - 1;
      }
    }
    v2 = *(_DWORD *)(a2 + 24);
  }
  return result;
}
