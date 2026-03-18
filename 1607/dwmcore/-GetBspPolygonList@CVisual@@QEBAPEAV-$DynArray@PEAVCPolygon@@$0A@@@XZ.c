/*
 * XREFs of ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18004FD80
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18000AB10 (-PreSubgraph@CHitTestContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180050A40 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x180109880 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180137F30 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x180138294 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBspPolygonList(__int64 a1)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *(_QWORD *)(a1 + 272);
  if ( (*(_DWORD *)(v1 + 4) & 0x1000000) == 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x8000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}
