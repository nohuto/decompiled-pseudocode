/*
 * XREFs of ?GetPixelFormat@CBitmapResource@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180082660
 * Callers:
 *     ?GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z @ 0x180085AF0 (-GetDefaultRealizationFormat@CImageBrush@@UEBAXPEAUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180080D50 (-GetPixelFormat@CBitmap@@UEAAJPEAW4DXGI_FORMAT@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapResource::GetPixelFormat(CBitmapResource *this, enum DXGI_FORMAT *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(CBitmap *, enum DXGI_FORMAT *); // rdi
  int PixelFormat; // eax
  unsigned int v5; // ebx

  v2 = *((_QWORD *)this + 8);
  if ( v2 )
  {
    v3 = *(__int64 (__fastcall **)(CBitmap *, enum DXGI_FORMAT *))(*(_QWORD *)v2 + 24LL);
    if ( v3 == CBitmap::GetPixelFormat )
      PixelFormat = CBitmap::GetPixelFormat(*((CBitmap **)this + 8), a2);
    else
      PixelFormat = v3(*((CBitmap **)this + 8), a2);
    v5 = PixelFormat;
    if ( PixelFormat < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormat, 0x7Au);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x7Eu);
  }
  return v5;
}
