/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144
 * Callers:
 *     GreGetClipBox @ 0x1C0014B60 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C0046DA0 (GreGetNearestColor.c)
 *     pConvertDfbSurfaceToDibInternal @ 0x1C005B1A0 (pConvertDfbSurfaceToDibInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C00B3CF0 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00B4824 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C00BE85C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C00BF800 (GreIntersectVisRect.c)
 * Callees:
 *     UntrapAppContainerRenderingWrap_0 @ 0x1C0001110 (UntrapAppContainerRenderingWrap_0.c)
 *     IsUntrapAppContainerRenderingSupported_0 @ 0x1C0001118 (IsUntrapAppContainerRenderingSupported_0.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap_0 @ 0x1C0001120 (DEVLOCKOBJ_bDisposeTrgDcoWrap_0.c)
 *     IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0 @ 0x1C0001128 (IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r9
  struct _ERESOURCE *v13; // rcx

  if ( (int)IsDEVLOCKOBJ_bDisposeTrgDcoSupported_0() >= 0 )
    DEVLOCKOBJ_bDisposeTrgDcoWrap_0();
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v2, v4);
    if ( ThreadWin32Thread )
    {
      v8 = *ThreadWin32Thread;
      if ( v8 )
        --*(_DWORD *)(v8 + 104);
    }
    *((_DWORD *)this + 6) &= ~0x1000u;
    v9 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v6, v7);
    if ( v9 )
    {
      v10 = *v9;
      if ( v10 )
      {
        *(_QWORD *)(v10 + 320) = 0LL;
        *(_QWORD *)(v10 + 312) = 0LL;
      }
    }
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v11 = *((_DWORD *)this + 6);
  if ( (v11 & 8) != 0 )
    *((_DWORD *)this + 6) = v11 & 0xFFFFFFF7;
  v12 = *((_QWORD *)this + 1);
  if ( v12 )
  {
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v3, &LockRelease, v4, v12, L"hsemDMC");
    v13 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion();
    }
  }
  if ( (int)IsUntrapAppContainerRenderingSupported_0() >= 0 )
    UntrapAppContainerRenderingWrap_0();
}
