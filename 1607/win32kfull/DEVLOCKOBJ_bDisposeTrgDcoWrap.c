/*
 * XREFs of DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0048550
 * Callers:
 *     <none>
 * Callees:
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048594 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00487E0 (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025B528 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bDisposeTrgDcoWrap(DEVLOCKOBJ *this)
{
  XDCOBJ *v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rbx

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v4 = 1;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)v1 + 36LL) &= ~0x4000u;
        *(_QWORD *)(*(_QWORD *)v1 + 512LL) = *(_QWORD *)(v6 + 2576);
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    XDCOBJ::vUnlock(v1);
    *(_QWORD *)v1 = 0LL;
  }
  return v4;
}
