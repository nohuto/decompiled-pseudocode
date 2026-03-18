/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C014B6AC
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C0029D40 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C002C650 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C002CC90 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     NtGdiGetPixel @ 0x1C002CF70 (NtGdiGetPixel.c)
 *     NtGdiGetDCObject @ 0x1C0040C40 (NtGdiGetDCObject.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0027E60 (-vClearRendering@DC@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00E4674 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C014B76C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
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
    if ( !*((_QWORD *)this + 6) )
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
