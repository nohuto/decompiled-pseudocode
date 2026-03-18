/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C003038C
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C002F1B0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C002FE9C (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0030220 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0030274 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0030434 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
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
    goto LABEL_5;
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v7 + 36) & 0x200) == 0 )
    goto LABEL_5;
  v8 = *(_QWORD *)(v7 + 48);
  v9 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 80), *(HDC *)v7);
  v10 = *(_QWORD *)(v8 + 1440);
  if ( !*(_QWORD *)v9 )
  {
LABEL_4:
    v6 = 0;
LABEL_5:
    *((_QWORD *)this + 10) = 0LL;
    return v6;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 15) )
  {
    *(_DWORD *)(*(_QWORD *)v9 + 36LL) |= 0x4000u;
    *(_QWORD *)(*(_QWORD *)v9 + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
    *((_DWORD *)this + 18) |= 0x10u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    if ( a3 )
    {
      *(_DWORD *)(*(_QWORD *)v9 + 44LL) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 12) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v9);
    XDCOBJ::vUnlock(v9);
    goto LABEL_4;
  }
  return v6;
}
