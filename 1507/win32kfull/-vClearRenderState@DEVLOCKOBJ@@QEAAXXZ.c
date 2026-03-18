/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C01121D4
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0016820 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0019040 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0019700 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     NtGdiGetPixel @ 0x1C0020EF0 (NtGdiGetPixel.c)
 *     NtGdiGetDCObject @ 0x1C00D3E90 (NtGdiGetDCObject.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C001D740 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00DF1D4 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0112294 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  DCVISRGNSHARELOCK *v3; // rcx
  __int64 ThreadWin32Thread; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x200) != 0 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v5);
    if ( !*((_QWORD *)this + 10) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      if ( ThreadWin32Thread )
        *(_BYTE *)(ThreadWin32Thread + 328) = 0;
    }
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v3);
  }
}
