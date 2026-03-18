/*
 * XREFs of ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x180138CB4
 * Callers:
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x180050A40 (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x180137F30 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800ACB14 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetBspPolygonList(__int64 a1, __int64 a2)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == `CVisual::SetBspPolygonList'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)(a1 + 272) + 4LL) &= ~0x1000000u;
  else
    CSparseStorage::SetData((char **)(a1 + 272), 8, 8u, &v2);
}
