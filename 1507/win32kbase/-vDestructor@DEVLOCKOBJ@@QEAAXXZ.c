/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8
 * Callers:
 *     GreGetNearestColor @ 0x1C0025760 (GreGetNearestColor.c)
 *     GreGetClipBox @ 0x1C0026E80 (GreGetClipBox.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005DAF0 (pConvertDfbSurfaceToDibInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B02CC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B0E84 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00BD108 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00BE2A0 (GreIntersectVisRect.c)
 * Callees:
 *     UntrapAppContainerRenderingWrap_0 @ 0x1C0001110 (UntrapAppContainerRenderingWrap_0.c)
 *     IsUntrapAppContainerRenderingSupported_0 @ 0x1C0001118 (IsUntrapAppContainerRenderingSupported_0.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap_0 @ 0x1C0001120 (DEVLOCKOBJ_bDisposeTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0 @ 0x1C0001128 (IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap_0();
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v5 = *ThreadWin32Thread;
      if ( v5 )
        --*(_DWORD *)(v5 + 104);
    }
    *((_DWORD *)this + 6) &= ~0x1000u;
    v6 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v6 )
    {
      v7 = *v6;
      if ( v7 )
      {
        *(_QWORD *)(v7 + 320) = 0LL;
        *(_QWORD *)(v7 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemTrg", *(_QWORD *)this, v3);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v8 = *((_DWORD *)this + 6);
  if ( (v8 & 8) != 0 )
    *((_DWORD *)this + 6) = v8 & 0xFFFFFFF7;
  v9 = *((_QWORD *)this + 1);
  if ( v9 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v2, &LockRelease, v3, v9);
    v10 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v10 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v10);
      PsLeavePriorityRegion(v11);
    }
  }
  if ( (int)IsUntrapAppContainerRenderingSupported_0() >= 0 )
    UntrapAppContainerRenderingWrap_0();
}
