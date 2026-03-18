/*
 * XREFs of ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180012050
 * Callers:
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAV1@@Z @ 0x1800104A4 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 * Callees:
 *     ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x1800308A4 (--0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::CSecondaryD2DBitmap(
        CSecondaryD2DBitmap *this,
        struct CD2DResourceManager *a2)
{
  __int64 v2; // r10

  CD2DBitmap::CD2DBitmap(this, a2);
  *(_QWORD *)(v2 + 264) = &ISecondaryBitmap::`vftable';
  *(_QWORD *)(v2 + 272) = v2 + 280;
  *(_DWORD *)(v2 + 280) = 0;
  *(_QWORD *)v2 = &CSecondaryD2DBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v2 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v2 + 104) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(v2 + 112) = &CSecondaryD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v2 + 120) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(v2 + 264) = &CSecondaryD2DBitmap::`vftable';
  return (CSecondaryD2DBitmap *)v2;
}
