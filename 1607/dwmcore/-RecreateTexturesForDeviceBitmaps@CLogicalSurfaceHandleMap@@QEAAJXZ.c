/*
 * XREFs of ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800BA560
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 * Callees:
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180141A24 (-RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 */

__int64 __fastcall CLogicalSurfaceHandleMap::RecreateTexturesForDeviceBitmaps(CLogicalSurfaceHandleMap *this)
{
  char *v1; // rsi
  unsigned int v2; // ebx
  char *v3; // rdi
  CGdiSpriteBitmap *v5; // rbp
  int v6; // eax
  int v7; // eax

  v1 = (char *)this + 80;
  v2 = 0;
  v3 = (char *)*((_QWORD *)this + 10);
  while ( v3 != v1 )
  {
    v5 = (CGdiSpriteBitmap *)(v3 - 552);
    v3 = *(char **)v3;
    if ( (*((_BYTE *)v5 + 516) & 4) == 0 )
    {
      v6 = CGdiSpriteBitmap::RecreateTextures(v5);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xEAu);
        return v2;
      }
      v7 = CGdiSpriteBitmap::Dirty(v5);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xEBu);
        return v2;
      }
    }
  }
  return v2;
}
