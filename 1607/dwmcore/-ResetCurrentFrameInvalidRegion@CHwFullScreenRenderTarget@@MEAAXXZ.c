/*
 * XREFs of ?ResetCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAXXZ @ 0x18007AE00
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18008F020 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwFullScreenRenderTarget::ResetCurrentFrameInvalidRegion(CHwFullScreenRenderTarget *this)
{
  __int64 v1; // rax

  if ( *((_DWORD *)this + 66) == 3 )
    *((_QWORD *)this + 44) = *((_QWORD *)this + 43);
  v1 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = v1;
}
