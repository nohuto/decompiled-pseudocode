/*
 * XREFs of ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x18005C370
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x18005A330 (-GetDefaultRealizationFormat@CImageLegacyMilBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180088F80 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapResource::GetPixelFormat(CBitmapResource *this, enum DXGI_FORMAT *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(CBitmap *__hidden, enum DXGI_FORMAT *); // rdi
  int PixelFormat; // eax
  unsigned int v5; // ebx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CBitmap *__hidden, enum DXGI_FORMAT *))(*(_QWORD *)v2 + 24LL);
    if ( v3 == CBitmap::GetPixelFormat )
      PixelFormat = CBitmap::GetPixelFormat(*((CBitmap **)this + 8), a2);
    else
      PixelFormat = v3(*((CBitmap **)this + 8), a2);
    v5 = PixelFormat;
    if ( PixelFormat < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x3Fu);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x43u);
  }
  return v5;
}
