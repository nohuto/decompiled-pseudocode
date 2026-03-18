/*
 * XREFs of ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800B1754
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x18002A18C (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x18002A280 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800940EC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z @ 0x18014180C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAVCRedirectedGDISurface@@@Z.c)
 *     ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180141A24 (-RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 */

__int64 __fastcall CLogicalSurfaceHandleMap::EnsureTextures(CLogicalSurfaceHandleMap *this)
{
  CLogicalSurfaceHandleMap *v1; // r15
  CMILRefCountBase *v2; // rsi
  CLogicalSurfaceHandleMap *v3; // r14
  int v4; // edi
  char *v6; // rbp
  CBitmapOfDeviceBitmaps *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // [rsp+60h] [rbp+8h] BYREF
  CMILRefCountBase *v12; // [rsp+68h] [rbp+10h] BYREF

  v1 = (CLogicalSurfaceHandleMap *)((char *)this + 80);
  v2 = 0LL;
  v3 = (CLogicalSurfaceHandleMap *)*((_QWORD *)this + 10);
  v4 = 0;
  v12 = 0LL;
  if ( v3 == (CLogicalSurfaceHandleMap *)((char *)this + 80) )
    return (unsigned int)v4;
  while ( 1 )
  {
    v6 = (char *)v3 - 552;
    v3 = *(CLogicalSurfaceHandleMap **)v3;
    if ( v6[248] )
    {
      v7 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)v6 + 30);
      CBitmapOfDeviceBitmaps::CleanupInvalidSources(v7);
      if ( *((_DWORD *)v6 + 128) == *((_DWORD *)v7 + 80) )
        goto LABEL_5;
    }
    if ( (v6[516] & 4) != 0 )
      goto LABEL_5;
    if ( CGdiSpriteBitmap::HasValidDeviceBitmapObject((CGdiSpriteBitmap *)v6, &v12) )
    {
      v8 = CGdiSpriteBitmap::EnsureDeviceBitmapTextures((CGdiSpriteBitmap *)v6);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xBBu);
        goto LABEL_21;
      }
      v2 = v12;
      if ( v12 )
      {
        CMILRefCountBase::Release(v12);
        v2 = 0LL;
        v12 = 0LL;
      }
      goto LABEL_15;
    }
    v9 = CGdiSpriteBitmap::RecreateTextures((CGdiSpriteBitmap *)v6);
    v4 = v9;
    if ( v9 < 0 )
      break;
    v2 = v12;
LABEL_15:
    v10 = CGdiSpriteBitmap::Dirty((CGdiSpriteBitmap *)v6);
    v11 = v10;
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x53Eu);
      TranslateDXGIorD3DErrorInContext(v4, 13, &v11);
      v4 = v11;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xC8u);
      goto LABEL_6;
    }
LABEL_5:
    if ( v3 == v1 )
      goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xC1u);
LABEL_21:
  v2 = v12;
LABEL_6:
  if ( v2 )
    CMILRefCountBase::Release(v2);
  return (unsigned int)v4;
}
