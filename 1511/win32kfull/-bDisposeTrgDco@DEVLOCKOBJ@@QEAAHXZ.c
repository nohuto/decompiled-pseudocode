/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C002CC90
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0268BDC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vUnlock@XDCOBJ@@QEAAXXZ @ 0x1C002DBA0 (-vUnlock@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C014B6AC (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C014B71C (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDco(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rbx

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v3 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        *(_QWORD *)(*((_QWORD *)this + 4) + 512LL) = *(_QWORD *)(v4 + 2576);
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    XDCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
  return v3;
}
