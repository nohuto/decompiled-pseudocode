/*
 * XREFs of ?RemoveUnbackedSurfaces@COverlayContext@@CAXAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800B52B8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z @ 0x18012994C (-RemoveAt@-$DynArray@PEAVCWARPCallbackRenderer@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall COverlayContext::RemoveUnbackedSurfaces(__int64 *a1)
{
  unsigned int v1; // edx
  __int64 i; // rbx
  __int64 v4; // r9
  __int64 v5; // r8
  unsigned int v6; // ecx
  _QWORD *v7; // rax

  v1 = *((_DWORD *)a1 + 6);
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    v4 = *a1;
    v5 = *(_QWORD *)(*a1 + 8 * i);
    if ( *(_BYTE *)(v5 + 169) && *(_BYTE *)(v5 + 173) )
    {
      v6 = 1;
      if ( v1 <= 1 )
        goto LABEL_10;
      while ( 1 )
      {
        v7 = *(_QWORD **)(v4 + 8LL * v6);
        if ( *(_QWORD *)v5 == *v7 && *(_QWORD *)(v5 + 176) == v7[1] )
          break;
        if ( ++v6 >= v1 )
          goto LABEL_10;
      }
      if ( v6 == -1 )
      {
LABEL_10:
        DynArray<CWARPCallbackRenderer *,0>::RemoveAt(a1, (unsigned int)i, v5, v4);
        LODWORD(i) = i - 1;
      }
    }
    v1 = *((_DWORD *)a1 + 6);
  }
}
