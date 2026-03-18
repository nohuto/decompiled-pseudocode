/*
 * XREFs of ??0CD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x1800308A4
 * Callers:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180012050 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x1800ADD4C (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180027830 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::CD2DBitmap(CD2DBitmap *this, struct CD2DResourceManager *a2)
{
  __int64 v2; // r9
  CD2DBitmap *result; // rax

  CD2DResource::CD2DResource(this, a2);
  *(_QWORD *)v2 = &CD2DBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v2 + 16) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v2 + 104) = &CD2DBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(v2 + 112) = &CD2DBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v2 + 120) = &CSecondaryD2DBitmap::`vftable'{for `IBitmapUnlock'};
  *(_QWORD *)(v2 + 128) = 0LL;
  *(_QWORD *)(v2 + 136) = 0LL;
  *(_QWORD *)(v2 + 144) = 0LL;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_DWORD *)(v2 + 248) = DisplayId::None;
  result = (CD2DBitmap *)v2;
  *(_DWORD *)(v2 + 252) = 0;
  *(_BYTE *)(v2 + 256) = 0;
  return result;
}
