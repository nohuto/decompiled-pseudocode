/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x18008361C
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x180032D1C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18015BEDC (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x18015BFA0 (--_ECBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleDecodeBitmapRealization@@MEAA@XZ @ 0x18015E414 (--1CDxHandleDecodeBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 64) == 0;
  *(_QWORD *)this = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CSectionBitmapRealization::`vftable'{for `IDeviceResource'};
  if ( !v1 )
    --CComposition::s_cHwProtectedEntities;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  FastRegion::CRegion::FreeMemory((void **)this + 42);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
