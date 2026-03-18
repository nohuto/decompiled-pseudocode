/*
 * XREFs of ?Clear@CoordMap@@QEAAXXZ @ 0x180135B60
 * Callers:
 *     ?ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z @ 0x180133934 (-ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z.c)
 *     ?Copy@CoordMap@@QEAAJAEBV1@@Z @ 0x180135F50 (-Copy@CoordMap@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall CoordMap::Clear(CoordMap *this)
{
  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this, 0x10u);
  *((_DWORD *)this + 54) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 192, 0x10u);
  *((_DWORD *)this + 102) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 384, 0x10u);
}
