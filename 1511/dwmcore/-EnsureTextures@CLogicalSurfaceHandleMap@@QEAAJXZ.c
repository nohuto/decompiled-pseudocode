/*
 * XREFs of ?EnsureTextures@CLogicalSurfaceHandleMap@@QEAAJXZ @ 0x1800A60F8
 * Callers:
 *     ?EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ @ 0x180075420 (-EnsureRenderTargets@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180086460 (-EnsureDeviceBitmapTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 *     ?Dirty@CGdiSpriteBitmap@@IEAAJXZ @ 0x180086554 (-Dirty@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x18008AB4C (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z @ 0x180124F2C (-HasValidDeviceBitmapObject@CGdiSpriteBitmap@@QEAA_NPEAPEAUIMilRedirectedGDISurface@@@Z.c)
 *     ?RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ @ 0x180125170 (-RecreateTextures@CGdiSpriteBitmap@@QEAAJXZ.c)
 */

__int64 __fastcall CLogicalSurfaceHandleMap::EnsureTextures(CLogicalSurfaceHandleMap *this)
{
  int v1; // edi
  CLogicalSurfaceHandleMap *v2; // r15
  CLogicalSurfaceHandleMap *v3; // r14
  char *v5; // rsi
  CBitmapOfDeviceBitmaps *v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+50h] [rbp+8h] BYREF
  struct IMilRedirectedGDISurface *v11; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  v2 = (CLogicalSurfaceHandleMap *)((char *)this + 80);
  v11 = 0LL;
  v3 = (CLogicalSurfaceHandleMap *)*((_QWORD *)this + 10);
  if ( v3 == (CLogicalSurfaceHandleMap *)((char *)this + 80) )
    return (unsigned int)v1;
  while ( 1 )
  {
    v5 = (char *)v3 - 480;
    v3 = *(CLogicalSurfaceHandleMap **)v3;
    if ( v5[176] )
    {
      v6 = (CBitmapOfDeviceBitmaps *)*((_QWORD *)v5 + 21);
      CBitmapOfDeviceBitmaps::CleanupInvalidSources(v6);
      if ( *((_DWORD *)v5 + 110) == *((_DWORD *)v6 + 80) )
        goto LABEL_5;
    }
    if ( (v5[444] & 4) != 0 )
      goto LABEL_5;
    if ( !CGdiSpriteBitmap::HasValidDeviceBitmapObject((CGdiSpriteBitmap *)v5, &v11) )
    {
      v7 = CGdiSpriteBitmap::RecreateTextures((CGdiSpriteBitmap *)v5);
      v1 = v7;
      if ( v7 < 0 )
      {
        v9 = 193;
        goto LABEL_20;
      }
      goto LABEL_13;
    }
    v7 = CGdiSpriteBitmap::EnsureDeviceBitmapTextures((CGdiSpriteBitmap *)v5);
    v1 = v7;
    if ( v7 < 0 )
      break;
    if ( v11 )
    {
      (*(void (__fastcall **)(struct IMilRedirectedGDISurface *))(*(_QWORD *)v11 + 16LL))(v11);
      v11 = 0LL;
    }
LABEL_13:
    v8 = CGdiSpriteBitmap::Dirty((CGdiSpriteBitmap *)v5);
    v10 = v8;
    v1 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x53Eu);
      TranslateDXGIorD3DErrorInContext(v1, 18, &v10);
      v1 = v10;
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xC8u);
      goto LABEL_6;
    }
LABEL_5:
    if ( v3 == v2 )
      goto LABEL_6;
  }
  v9 = 187;
LABEL_20:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v9);
LABEL_6:
  if ( v11 )
    (*(void (__fastcall **)(struct IMilRedirectedGDISurface *))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)v1;
}
