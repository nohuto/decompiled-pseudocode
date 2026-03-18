/*
 * XREFs of ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180141A24
 * Callers:
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800BA560 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18002B954 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RecreateTextures(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  int updated; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 30) )
  {
    updated = CGdiSpriteBitmap::UpdateSurface(this, (enum DXGI_FORMAT)*((_DWORD *)this + 42));
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x35Cu);
  }
  return v1;
}
