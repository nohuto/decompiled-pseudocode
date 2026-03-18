/*
 * XREFs of DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C004BFB0
 * Callers:
 *     GreExtTextOutRect @ 0x1C0039588 (GreExtTextOutRect.c)
 *     GreDrawStream @ 0x1C0039BA8 (GreDrawStream.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048594 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0048830 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C025B464 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C025B528 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bPrepareTrgDcoWrap(DEVLOCKOBJ *this, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edx

  v4 = 1;
  if ( !a2 )
    goto LABEL_2;
  v6 = *a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v7 = *(_QWORD *)(v6 + 48);
  XDCOBJ::vLock((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)v6);
  v8 = *((_QWORD *)this + 4);
  v9 = *(_QWORD *)(v7 + 1440);
  if ( !v8 )
  {
LABEL_13:
    v4 = 0;
LABEL_2:
    *((_QWORD *)this + 4) = 0LL;
    return v4;
  }
  v10 = *(_DWORD *)(*a2 + 36);
  if ( (v10 & 1) != 0 && (v10 & 0x4000) == 0 && v9 && !*((_QWORD *)this + 10) )
  {
    *(_DWORD *)(v8 + 36) |= 0x4000u;
    *(_QWORD *)(*((_QWORD *)this + 4) + 512LL) = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    *((_DWORD *)this + 6) |= 0x10u;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && !(unsigned int)DEVLOCKOBJ::bMapTrgSurfaceView(this) )
  {
    DEVLOCKOBJ::vClearRenderState(this);
    XDCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    goto LABEL_13;
  }
  return v4;
}
