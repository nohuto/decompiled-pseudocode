/*
 * XREFs of ??1CSecondaryD2DBitmap@@MEAA@XZ @ 0x1800120D0
 * Callers:
 *     ??_ECSecondaryD2DBitmap@@MEAAPEAXI@Z @ 0x1800B1970 (--_ECSecondaryD2DBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CSecondaryD2DBitmap::~CSecondaryD2DBitmap(CSecondaryD2DBitmap *this)
{
  *(_QWORD *)this = &CSecondaryD2DBitmap::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 13) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmap'};
  *((_QWORD *)this + 14) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *((_QWORD *)this + 15) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *((_QWORD *)this + 33) = &CSecondaryD2DBitmap::`vftable';
  FastRegion::CRegion::FreeMemory((CSecondaryD2DBitmap *)((char *)this + 272));
  CD2DBitmap::~CD2DBitmap(this);
}
