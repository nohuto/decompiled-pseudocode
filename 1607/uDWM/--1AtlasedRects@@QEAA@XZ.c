/*
 * XREFs of ??1AtlasedRects@@QEAA@XZ @ 0x180070068
 * Callers:
 *     ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18002B7A0 (-Validate@CAtlasedImage@@QEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall AtlasedRects::~AtlasedRects(AtlasedRects *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 32);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
