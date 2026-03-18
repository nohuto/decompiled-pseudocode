/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18007B210
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ @ 0x18007B450 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@UEAAJXZ.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18008EE50 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        bool a2,
        bool a3,
        struct RenderTargetPresentParameters *a4)
{
  CHwDisplayRenderTarget *v6; // rcx
  __int64 (__fastcall *v9)(CHwDisplayRenderTarget *__hidden, bool, bool *, unsigned int *); // rax
  __int64 (__fastcall *v10)(CHwDisplayRenderTarget *__hidden, bool, bool *, unsigned int *); // rdx
  int ShouldPresent; // eax
  __int64 (__fastcall *v12)(CHwFullScreenRenderTarget *__hidden); // rax
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF
  bool v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = (CHwFullScreenRenderTarget *)((char *)this - 176);
  v10 = CHwDisplayRenderTarget::ShouldPresent;
  v9 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, bool, bool *, unsigned int *))(*(_QWORD *)v6 + 240LL);
  LOBYTE(v10) = a2;
  if ( v9 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(v6, a2, &v18, &v17);
  else
    ShouldPresent = v9(v6, (bool)v10, &v18, &v17);
  if ( ShouldPresent >= 0 && v18 && (v17 & 2) == 0 )
  {
    v12 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden))(*(_QWORD *)this + 200LL);
    v13 = v12 == CHwFullScreenRenderTarget::CopyFrontToBackBuffer
        ? CHwFullScreenRenderTarget::CopyFrontToBackBuffer(this)
        : v12(this);
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xF3u);
  }
  v14 = CHwDisplayRenderTarget::Present(this, a2, a3, a4);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x10Bu);
  return v15;
}
