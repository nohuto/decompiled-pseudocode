/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x180067AD4
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180028E40 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 8);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 4);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
