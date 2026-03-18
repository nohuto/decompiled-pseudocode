/*
 * XREFs of ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x180136008
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800921B0 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z @ 0x180135460 (-AddMultipleAndSet@-$DynArray@URampEntry@CoordMap@@$0A@@@QEAAJPEFBURampEntry@CoordMap@@I@Z.c)
 */

__int64 __fastcall CoordMap::GetAllHollowRects(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  *(_DWORD *)(a2 + 24) = 0;
  v2 = DynArray<CoordMap::RampEntry,0>::AddMultipleAndSet(a2, *(const void **)(a1 + 384), *(_DWORD *)(a1 + 408));
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x11Cu);
  else
    return 0;
  return v3;
}
