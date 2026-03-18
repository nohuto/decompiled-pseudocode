/*
 * XREFs of ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800B11E8
 * Callers:
 *     ?EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ @ 0x18002B014 (-EnsureRedirSurface@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800B1558 (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRedirectedGDISurface::Create(
        HLSURF a1,
        struct CGdiSpriteBitmap *a2,
        struct CLegacySurfaceManager *a3,
        struct CRedirectedGDISurface **a4)
{
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi

  *a4 = 0LL;
  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         48LL);
  v9 = (volatile signed __int32 *)v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 16) = a3;
    *(_QWORD *)v8 = &CMILRefCountBase::`vftable';
    *(_QWORD *)v8 = &CRedirectedGDISurface::`vftable';
    *(_DWORD *)(v8 + 8) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 2);
    v10 = CRedirectedGDISurface::Initialize((CRedirectedGDISurface *)v9, a1, a2);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1Bu);
      CMILRefCountBase::Release((CMILRefCountBase *)v9);
    }
    else
    {
      *a4 = (struct CRedirectedGDISurface *)v9;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x18u);
  }
  return v11;
}
