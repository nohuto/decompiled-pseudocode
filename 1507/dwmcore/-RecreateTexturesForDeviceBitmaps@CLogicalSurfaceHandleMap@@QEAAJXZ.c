/*
 * XREFs of ?RecreateTexturesForDeviceBitmaps@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x180093A24
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18007DF38 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180108328 (-RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
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
    v5 = (CGdiSpriteBitmap *)(v3 - 480);
    v3 = *(char **)v3;
    if ( (*((_BYTE *)v5 + 444) & 4) == 0 )
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
