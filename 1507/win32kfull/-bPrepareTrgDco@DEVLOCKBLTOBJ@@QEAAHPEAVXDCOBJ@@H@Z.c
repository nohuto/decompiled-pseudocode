/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0018878
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00182A4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018630 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018704 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0018920 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025E4FC (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025E5C0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct XDCOBJ *v9; // r14
  __int64 v10; // rcx
  int v11; // edx

  v6 = 1;
  if ( !a2 )
    goto LABEL_9;
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v7 + 36) & 0x200) == 0 )
    goto LABEL_9;
  v8 = *(_QWORD *)(v7 + 48);
  v9 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v7);
  v10 = *(_QWORD *)(v8 + 1440);
  if ( !*(_QWORD *)v9 )
  {
LABEL_8:
    v6 = 0;
LABEL_9:
    *((_QWORD *)this + 15) = 0LL;
    return v6;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 28) )
  {
    *(_DWORD *)(*(_QWORD *)v9 + 36LL) |= 0x4000u;
    *(_QWORD *)(*(_QWORD *)v9 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
    *((_DWORD *)this + 28) |= 0x10u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    if ( a3 )
    {
      *(_DWORD *)(*(_QWORD *)v9 + 44LL) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 21) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v9);
    XDCOBJ::vUnlock(v9);
    goto LABEL_8;
  }
  return v6;
}
