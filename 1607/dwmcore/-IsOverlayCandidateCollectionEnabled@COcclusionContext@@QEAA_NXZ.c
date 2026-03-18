/*
 * XREFs of ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x180010E70
 * Callers:
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000FE00 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180028480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801396E0 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COcclusionContext::IsOverlayCandidateCollectionEnabled(COcclusionContext *this)
{
  __int64 v1; // rax
  char v2; // dl
  unsigned int v3; // r9d
  unsigned int v4; // r8d

  v1 = *((_QWORD *)this + 125);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 24);
    v4 = 0;
    if ( v3 )
    {
      while ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v1 + 8LL * v4) + 1080LL) )
      {
        if ( ++v4 >= v3 )
          return v2;
      }
      return 1;
    }
  }
  return v2;
}
