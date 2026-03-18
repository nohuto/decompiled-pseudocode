/*
 * XREFs of ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180108328
 * Callers:
 *     ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800629F0 (-EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 *     ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x180093A24 (-RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18007F6E8 (-UpdateSurface@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RecreateTextures(CGdiSpriteBitmap *this)
{
  unsigned int v1; // ebx
  int updated; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 21) )
  {
    updated = CGdiSpriteBitmap::UpdateSurface(this, (enum DXGI_FORMAT)*((_DWORD *)this + 24));
    v1 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x35Cu);
  }
  return v1;
}
