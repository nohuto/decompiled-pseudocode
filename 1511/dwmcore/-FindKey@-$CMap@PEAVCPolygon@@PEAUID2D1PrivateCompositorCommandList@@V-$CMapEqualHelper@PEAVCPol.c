/*
 * XREFs of ?FindKey@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEBAHAEBQEAVCPolygon@@@Z @ 0x1800FEF90
 * Callers:
 *     ?GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x180025E58 (-GetID2DCommandList@CD2DCommandList@@QEAAJPEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList.c)
 *     ?RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z @ 0x180149774 (-RemoveID2DCommandList@CD2DCommandList@@QEAAXPEAVCPolygon@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::FindKey(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *i; // rcx

  v2 = *(int *)(a1 + 16);
  result = 0LL;
  if ( (int)v2 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = *a2;
  v5 = 0LL;
  for ( i = *(_QWORD **)a1; *i != v4; ++i )
  {
    result = (unsigned int)(result + 1);
    if ( ++v5 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return result;
}
