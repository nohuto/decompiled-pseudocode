/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00487E0
 * Callers:
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0048550 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0048D60 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C0048658 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028CAF8 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C028EF14 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bUnMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // rdi

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
  {
    if ( (*((_DWORD *)this + 6) & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
      *((_DWORD *)this + 6) &= ~0x400u;
    }
    if ( (*((_DWORD *)this + 6) & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 6) &= ~0x2000u;
    }
    DEVLOCKOBJ::vFlushSpriteUpdates(this, 1);
  }
  return 1LL;
}
