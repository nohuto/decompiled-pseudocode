/*
 * XREFs of ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048594
 * Callers:
 *     NtGdiGetPixel @ 0x1C0040650 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0048550 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0048990 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0048D60 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C004BFB0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C004A9B8 (-vClearRendering@DC@@QEAAXXZ.c)
 */

void __fastcall DEVLOCKOBJ::vClearRenderState(DEVLOCKOBJ *this)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rax

  v1 = *((_QWORD *)this + 4);
  if ( v1 && (*(_DWORD *)(v1 + 36) & 0x200) != 0 && (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    if ( !*((_QWORD *)this + 10) )
      DC::vClearRendering(*((DC **)this + 4));
    if ( (*(_DWORD *)(*((_QWORD *)this + 4) + 36LL) & 0x4000) == 0 )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v3, v4, v5);
      if ( ThreadWin32Thread )
      {
        v7 = *ThreadWin32Thread;
        if ( v7 )
          *(_BYTE *)(v7 + 328) = 0;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
}
