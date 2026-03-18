/*
 * XREFs of ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E578
 * Callers:
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18006E3A0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CPrimitiveGroup::GetLargestOpaqueRect(__int64 a1, __int64 a2)
{
  char v2; // r8
  bool v3; // cc
  float v4; // xmm1_4

  v2 = 0;
  if ( *(_QWORD *)(a1 + 352) )
  {
    if ( a2 )
    {
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 404);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 408);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 412);
      v3 = *(float *)(a2 + 8) <= *(float *)a2;
      v4 = *(float *)(a1 + 416);
      *(float *)(a2 + 12) = v4;
      if ( !v3 )
        return v4 > *(float *)(a2 + 4);
    }
  }
  return v2;
}
