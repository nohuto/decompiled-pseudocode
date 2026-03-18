/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18006200C
 * Callers:
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18007EEA0 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180035460 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x180062138 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
