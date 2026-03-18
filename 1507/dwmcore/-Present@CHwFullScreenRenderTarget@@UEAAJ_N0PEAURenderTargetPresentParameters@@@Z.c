/*
 * XREFs of ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x1800434D0
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18004B580 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z @ 0x1800436A0 (-CopyFrontToBackBuffer@CHwFullScreenRenderTarget@@MEAAJ_N@Z.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180044B70 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::Present(
        CHwFullScreenRenderTarget *this,
        _BOOL8 a2,
        bool a3,
        struct RenderTargetPresentParameters *a4)
{
  CHwFullScreenRenderTarget *v4; // rbx
  bool v7; // si
  __int64 (__fastcall *v9)(CHwDisplayRenderTarget *__hidden, bool, bool *, unsigned int *); // rdi
  int ShouldPresent; // eax
  _BOOL8 v11; // rdx
  __int64 (__fastcall *v12)(CHwFullScreenRenderTarget *__hidden, bool); // rdi
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  bool v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = (CHwFullScreenRenderTarget *)((char *)this - 176);
  v7 = a2;
  v9 = *(__int64 (__fastcall **)(CHwDisplayRenderTarget *__hidden, bool, bool *, unsigned int *))(*((_QWORD *)this - 22)
                                                                                                + 224LL);
  if ( v9 == CHwDisplayRenderTarget::ShouldPresent )
    ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(
                      (CHwFullScreenRenderTarget *)((char *)this - 176),
                      a2,
                      &v18,
                      &v17);
  else
    ShouldPresent = v9((CHwFullScreenRenderTarget *)((char *)this - 176), a2, &v18, &v17);
  if ( ShouldPresent >= 0 && v18 && (v17 & 2) == 0 )
  {
    v12 = *(__int64 (__fastcall **)(CHwFullScreenRenderTarget *__hidden, bool))(*(_QWORD *)v4 + 256LL);
    if ( v12 == CHwFullScreenRenderTarget::CopyFrontToBackBuffer )
    {
      v13 = CHwFullScreenRenderTarget::CopyFrontToBackBuffer(v4, 1);
    }
    else
    {
      LOBYTE(v11) = 1;
      v13 = v12(v4, v11);
    }
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xDDu);
  }
  v14 = CHwDisplayRenderTarget::Present(this, v7, a3, a4);
  v15 = v14;
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xF5u);
  return v15;
}
