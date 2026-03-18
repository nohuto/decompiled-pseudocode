/*
 * XREFs of ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x1800435C0
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x180045060 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 329) )
    *((_QWORD *)this + 43) = *((_QWORD *)this + 42);
  v1 = *((_QWORD *)this + 40);
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 42) = v1;
}
