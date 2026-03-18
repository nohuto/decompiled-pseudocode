/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00464E0
 * Callers:
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0046684 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004698C (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028CAF8 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C028EF14 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  __int64 v3; // rax
  SURFACE *v4; // rsi

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    v4 = *(SURFACE **)(v3 + 512);
    if ( (*((_DWORD *)this + 28) & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
      *((_DWORD *)this + 28) &= ~0x400u;
    }
    if ( (*((_DWORD *)this + 28) & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 28) &= ~0x2000u;
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 1) == 0 )
        SURFACE::bUnMap(v4, this, *(struct DC **)v1);
      *(_DWORD *)(*(_QWORD *)v1 + 44LL) &= ~1u;
    }
  }
  return 1LL;
}
