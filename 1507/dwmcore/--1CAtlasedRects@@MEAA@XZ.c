/*
 * XREFs of ??1CAtlasedRects@@MEAA@XZ @ 0x180070B50
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x180016C50 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18006F6D4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ??_GCAtlasedRects@@MEAAPEAXI@Z @ 0x1800F9030 (--_GCAtlasedRects@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeCaches@CAtlasedRects@@AEAAXXZ @ 0x180070308 (-FreeCaches@CAtlasedRects@@AEAAXXZ.c)
 */

void __fastcall CAtlasedRects::~CAtlasedRects(CAtlasedRects *this)
{
  *(_QWORD *)this = &CAtlasedRects::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CAtlasedRectsMesh::`vftable'{for `IDeviceResourceNotify'};
  CAtlasedRects::FreeCaches((void **)this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 9);
  CResource::~CResource(this);
}
