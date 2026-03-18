/*
 * XREFs of ??1CAtlasedRects@@MEAA@XZ @ 0x18009C4C0
 * Callers:
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18009CD88 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x18009D0E0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ??_GCAtlasedRects@@MEAAPEAXI@Z @ 0x18012B630 (--_GCAtlasedRects@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x18009BCE4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRects::~CAtlasedRects(CAtlasedRects *this)
{
  *(_QWORD *)this = &CAtlasedRects::`vftable'{for `CResource'};
  *((_QWORD *)this + 14) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRects::FreeCaches(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 144);
  CResource::~CResource(this);
}
