/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800A54C8
 * Callers:
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x180087750 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800A55F8 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  __int64 v8; // rax
  CBitmapOfDeviceBitmaps *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         56LL);
  v9 = (CBitmapOfDeviceBitmaps *)v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 0;
    *(_QWORD *)v8 = &CRedirectedGDISurface::`vftable'{for `CMILCOMBase'};
    *(_QWORD *)(v8 + 16) = &CRedirectedGDISurface::`vftable'{for `IMilRedirectedGDISurface'};
    *(_QWORD *)(v8 + 24) = a3;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    CBitmapOfDeviceBitmaps::AddRef(v9);
    v10 = CRedirectedGDISurface::Initialize(v9, a1, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Bu);
    }
    else
    {
      *a4 = v9;
      v9 = 0LL;
    }
    if ( v9 )
      CMILCOMBase::InternalRelease(v9);
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v11;
}
