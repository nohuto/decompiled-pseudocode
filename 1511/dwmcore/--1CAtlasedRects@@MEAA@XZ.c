/*
 * XREFs of ??1CAtlasedRects@@MEAA@XZ @ 0x1800253CC
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x1800260C0 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x180026FA4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ??_GCAtlasedRects@@MEAAPEAXI@Z @ 0x180113140 (--_GCAtlasedRects@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x1800254D4 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CAtlasedRects::~CAtlasedRects(CAtlasedRects *this)
{
  *(_QWORD *)this = &CAtlasedRects::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRects::FreeCaches(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 72);
  CResource::~CResource(this);
}
