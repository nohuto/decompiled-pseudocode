/*
 * XREFs of ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0018630
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C0018878 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C0018A98 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(DEVLOCKBLTOBJ *this)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  SURFACE *v4; // rcx

  v2 = 1;
  v3 = *((_QWORD *)this + 21);
  if ( v3 && (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(v3 + 44) & 1) == 0 )
    {
      v4 = *(SURFACE **)(v3 + 512);
      if ( v4 )
        v2 = SURFACE::bUnMap(v4, this, 0LL);
    }
    *(_DWORD *)(*((_QWORD *)this + 21) + 44LL) &= ~1u;
  }
  return v2;
}
