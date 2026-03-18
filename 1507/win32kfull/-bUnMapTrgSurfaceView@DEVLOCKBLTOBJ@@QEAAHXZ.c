/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018688
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0018A98 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0155C88 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028E090 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02904B4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
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
