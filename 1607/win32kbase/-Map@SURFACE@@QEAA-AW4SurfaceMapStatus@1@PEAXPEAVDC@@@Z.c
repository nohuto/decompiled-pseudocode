/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0025DA0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0075800 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C000D7B8 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vLockSimple@W32PIDLOCK@@QEAAXK@Z @ 0x1C000D828 (-vLockSimple@W32PIDLOCK@@QEAAXK@Z.c)
 *     ?vLockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C000D8C0 (-vLockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C000D8F0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C007A5EC (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0089A60 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int v2; // ebp
  unsigned int CurrentProcessId; // eax
  __int64 v4; // rcx
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  unsigned int v12; // ebx
  void *v13; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  char *v20; // rdx
  HSEMAPHORE v21; // [rsp+40h] [rbp+8h] BYREF
  void *v22; // [rsp+58h] [rbp+20h] BYREF

  v22 = 0LL;
  v2 = 1;
  if ( (*(_QWORD *)(a1 + 248) || (*(_DWORD *)(a1 + 116) & 1) != 0) && (*(_WORD *)(a1 + 102) & 0x800) != 0 )
  {
    CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
    W32PIDLOCK::vLockSimple((W32PIDLOCK *)(a1 + 272), CurrentProcessId & 0xFFFFFFFC);
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(a1 + 272));
    v5 = (struct _ERESOURCE *)ghsemMapRot;
    v21 = ghsemMapRot;
    if ( ghsemMapRot )
    {
      PsEnterPriorityRegion(v4);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
    }
    v6 = *(_QWORD *)(a1 + 264);
    if ( v6 == PsGetCurrentProcessWin32Process(v4) )
    {
      if ( v5 )
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem");
        ExReleaseResourceAndLeaveCriticalRegion(v5);
        PsLeavePriorityRegion(v8);
        v21 = 0LL;
      }
      goto LABEL_19;
    }
    if ( *(_QWORD *)(a1 + 264) )
    {
      v9 = (_QWORD *)(a1 + 448);
      v10 = *(_QWORD *)(a1 + 448);
      v7 = *(_QWORD **)(a1 + 456);
      if ( *(_QWORD *)(v10 + 8) != a1 + 448 || (_QWORD *)*v7 != v9 )
        __fastfail(3u);
      *v7 = v10;
      *(_QWORD *)(v10 + 8) = v7;
      *(_QWORD *)(a1 + 456) = a1 + 448;
      *v9 = v9;
      if ( *(_QWORD *)(a1 + 72) )
        MmUnmapViewOfSection(**(_QWORD **)(a1 + 264));
    }
    v11 = *(_DWORD *)(a1 + 116) & 1;
    if ( !v11 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 264) = 0LL;
    *(_QWORD *)(a1 + 256) = 0LL;
    if ( !v11 )
    {
      v12 = *(_DWORD *)(a1 + 64);
      v13 = *(void **)(a1 + 248);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v7);
      MapKernelSectionForUserMapping(v13, CurrentProcess, v12, &v22);
      if ( !v22 )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v21);
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(a1 + 272));
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 272));
        v2 = 2;
LABEL_19:
        SEMOBJ::~SEMOBJ((SEMOBJ *)&v21);
        return v2;
      }
    }
    v16 = (_QWORD *)(a1 + 448);
    v17 = PsGetCurrentProcessWin32Process(v7) + 224;
    v18 = *(_QWORD *)v17;
    if ( *(_QWORD *)(*(_QWORD *)v17 + 8LL) != v17 )
      __fastfail(3u);
    *v16 = v18;
    *(_QWORD *)(a1 + 456) = v17;
    *(_QWORD *)(v18 + 8) = v16;
    *(_QWORD *)v17 = v16;
    *(_QWORD *)(a1 + 256) = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(a1 + 264) = PsGetCurrentProcessWin32Process(v19);
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v20 = (char *)v22;
      *(_QWORD *)(a1 + 72) = v22;
      if ( (*(_BYTE *)(a1 + 102) & 1) != 0 )
        *(_QWORD *)(a1 + 80) = v20;
      else
        *(_QWORD *)(a1 + 80) = &v20[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v21);
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v21);
  }
  return 0LL;
}
