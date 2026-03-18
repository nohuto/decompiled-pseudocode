/*
 * XREFs of ??1CBitmapRealization@@MEAA@XZ @ 0x180046C3C
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18001EDA8 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ??_ECBitmapRealization@@MEAAPEAXI@Z @ 0x18014D2B0 (--_ECBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x18014D57C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??1CDxHandleDecodeBitmapRealization@@MEAA@XZ @ 0x18014F950 (--1CDxHandleDecodeBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void __fastcall CBitmapRealization::~CBitmapRealization(CBitmapRealization *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 65) == 0;
  *(_QWORD *)this = &CBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CDxHandleBitmapRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 14) = &CBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 15) = &CBitmapRealization::`vftable'{for `IDeviceResource'};
  if ( !v1 )
    CComposition::s_bHwProtectionTempDisabled = --CComposition::s_cHwProtectedEntities != 0
                                             && CComposition::s_bHwProtectionTempDisabled;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 51);
  FastRegion::CRegion::FreeMemory((CBitmapRealization *)((char *)this + 336));
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
