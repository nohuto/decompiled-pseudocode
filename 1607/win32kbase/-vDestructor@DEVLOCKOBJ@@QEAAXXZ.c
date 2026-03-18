/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetClipBox @ 0x1C0045240 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C005B330 (GreGetNearestColor.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C006B5F0 (pConvertDfbSurfaceToDibInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00BE240 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00BEDE4 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00CA4B8 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 * Callees:
 *     UntrapAppContainerRenderingWrap_0 @ 0x1C0001110 (UntrapAppContainerRenderingWrap_0.c)
 *     IsUntrapAppContainerRenderingSupported_0 @ 0x1C0001118 (IsUntrapAppContainerRenderingSupported_0.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap_0 @ 0x1C0001120 (DEVLOCKOBJ_bDisposeTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0 @ 0x1C0001128 (IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0026BF0 (GreReleaseSemaphoreInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreDecLockCount @ 0x1C0074B40 (GreDecLockCount.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  int v2; // eax
  __int64 ThreadWin32Thread; // rax

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap_0();
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)this);
  }
  v2 = *((_DWORD *)this + 6);
  if ( (v2 & 8) != 0 )
    *((_DWORD *)this + 6) = v2 & 0xFFFFFFF7;
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((struct _ERESOURCE **)this + 1));
  }
  if ( (int)IsUntrapAppContainerRenderingSupported_0() >= 0 )
    UntrapAppContainerRenderingWrap_0();
}
