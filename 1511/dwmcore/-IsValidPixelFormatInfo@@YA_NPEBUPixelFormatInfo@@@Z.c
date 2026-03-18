/*
 * XREFs of ?IsValidPixelFormatInfo@@YA_NPEBUPixelFormatInfo@@@Z @ 0x1800A33A0
 * Callers:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800A3168 (-HrInit@CClientMemoryBitmap@@QEAAJIIPEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z @ 0x180154BF0 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A3400 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall IsValidPixelFormatInfo(enum DXGI_FORMAT *a1)
{
  int v1; // ecx
  BOOL v2; // eax
  int v3; // ecx
  __int64 v4; // r8
  char v5; // dl
  int v6; // eax

  if ( !(unsigned int)IsValidPixelFormat(*a1) )
    return 0;
  v2 = HasAlphaChannel(v1);
  v5 = 1;
  if ( v2 )
  {
    if ( v3 == 24 && *(_DWORD *)(v4 + 4) == 1 )
      return 0;
  }
  else if ( (unsigned int)(*(_DWORD *)(v4 + 4) - 1) <= 1 )
  {
    return 0;
  }
  v6 = *(_DWORD *)(v4 + 8);
  if ( v6 == 0x7FFFFFFF )
  {
    if ( *(_QWORD *)(v4 + 16) )
      return v5;
    return 0;
  }
  if ( (unsigned int)(v6 - 1) > 1 || *(_QWORD *)(v4 + 16) )
    return 0;
  return v5;
}
