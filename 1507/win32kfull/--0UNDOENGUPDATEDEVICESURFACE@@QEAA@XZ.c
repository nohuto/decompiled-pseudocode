/*
 * XREFs of ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C026C1C8
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00206C4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C026DABC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

UNDOENGUPDATEDEVICESURFACE *__fastcall UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE(
        UNDOENGUPDATEDEVICESURFACE *this)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    *(_BYTE *)this = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  return this;
}
