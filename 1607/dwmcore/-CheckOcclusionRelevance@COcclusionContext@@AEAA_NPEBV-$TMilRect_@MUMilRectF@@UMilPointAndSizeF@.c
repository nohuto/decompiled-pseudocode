/*
 * XREFs of ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005BC24
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18004D850 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800516E0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18005C4C0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall COcclusionContext::CheckOcclusionRelevance(__int64 a1, float *a2)
{
  char v2; // r8
  unsigned int v3; // r10d
  int v4; // eax
  float v6; // xmm1_4
  unsigned int v7; // edx
  int v8; // ecx
  float *i; // r9

  v2 = 0;
  v3 = -1;
  v4 = *(_DWORD *)(a1 + 928);
  v6 = (float)(a2[3] - a2[1]) * (float)(a2[2] - *a2);
  if ( v4 )
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 944) + 4LL * (unsigned int)(v4 - 1));
  v7 = *(_DWORD *)(a1 + 496);
  v8 = 0;
  if ( v7 )
  {
    for ( i = (float *)(a1 + 628); ((v3 >> v8) & 1) == 0 || v6 <= (float)(*i * 0.25); ++i )
    {
      if ( ++v8 >= v7 )
        return v2;
    }
    return 1;
  }
  return v2;
}
