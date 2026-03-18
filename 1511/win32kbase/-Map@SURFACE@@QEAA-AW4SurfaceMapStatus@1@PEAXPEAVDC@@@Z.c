/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0035D30
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0036F00 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0012238 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C00122E0 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0076988 (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0088A64 (--1SEMOBJ@@QEAA@XZ.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  bool v27; // zf
  char *v28; // rdx
  HSEMAPHORE v29; // [rsp+50h] [rbp+8h] BYREF
  void *v30; // [rsp+68h] [rbp+20h] BYREF

  v30 = 0LL;
  if ( !*(_QWORD *)(a1 + 240) && (*(_DWORD *)(a1 + 116) & 1) == 0 || (*(_WORD *)(a1 + 102) & 0x800) == 0 )
    return 0LL;
  v2 = (unsigned int *)(a1 + 264);
  v3 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 304) + 64LL), UserRequest, 0, 0, 0LL);
  if ( *(_DWORD *)(a1 + 264) )
  {
    do
    {
      if ( *v2 == v3 )
        break;
      v4 = *(_QWORD *)(a1 + 304);
      ++*(_DWORD *)(a1 + 268);
      KeReleaseMutex((PRKMUTEX)(v4 + 64), 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 304), UserRequest, 0, 0, 0LL);
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 304) + 64LL), UserRequest, 0, 0, 0LL);
    }
    while ( *v2 );
  }
  v5 = ++*(_DWORD *)(a1 + 272);
  *v2 = v3;
  if ( v5 > *(_DWORD *)(a1 + 276) )
    *(_DWORD *)(a1 + 276) = v5;
  KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 304) + 64LL), 0);
  KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 304) + 64LL), UserRequest, 0, 0, 0LL);
  v8 = (struct _ERESOURCE *)ghsemMapRot;
  v29 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion(v7, v6);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
  }
  v9 = *(_QWORD *)(a1 + 256);
  if ( v9 != PsGetCurrentProcessWin32Process(v7) )
  {
    if ( *(_QWORD *)(a1 + 256) )
    {
      v15 = (_QWORD *)(a1 + 440);
      v16 = *(_QWORD *)(a1 + 440);
      v11 = *(_QWORD **)(a1 + 448);
      if ( *(_QWORD *)(v16 + 8) != a1 + 440 || (_QWORD *)*v11 != v15 )
        __fastfail(3u);
      *v11 = v16;
      *(_QWORD *)(v16 + 8) = v11;
      *(_QWORD *)(a1 + 448) = a1 + 440;
      *v15 = v15;
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
        MmUnmapViewOfSection(**(_QWORD **)(a1 + 256), v10);
    }
    v17 = *(_DWORD *)(a1 + 116) & 1;
    if ( !v17 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( !v17 )
    {
      v18 = *(_DWORD *)(a1 + 64);
      v19 = *(void **)(a1 + 240);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v11, v10);
      MapKernelSectionForUserMapping(v19, CurrentProcess, v18, &v30);
      if ( !v30 )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v29);
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(a1 + 264));
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 264));
        SEMOBJ::~SEMOBJ((SEMOBJ *)&v29);
        return 2LL;
      }
    }
    v21 = a1 + 440;
    v22 = (__int64 *)(PsGetCurrentProcessWin32Process(v11) + 224);
    v25 = *v22;
    *(_QWORD *)(a1 + 440) = *v22;
    *(_QWORD *)(a1 + 448) = v22;
    if ( *(__int64 **)(v25 + 8) != v22 )
      __fastfail(3u);
    *(_QWORD *)(v25 + 8) = v21;
    *v22 = v21;
    *(_QWORD *)(a1 + 248) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
    *(_QWORD *)(a1 + 256) = PsGetCurrentProcessWin32Process(v26);
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v27 = (*(_BYTE *)(a1 + 102) & 1) == 0;
      v28 = (char *)v30;
      *(_QWORD *)(a1 + 72) = v30;
      if ( v27 )
        *(_QWORD *)(a1 + 80) = &v28[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
      else
        *(_QWORD *)(a1 + 80) = v28;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v29);
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v29);
    return 0LL;
  }
  if ( v8 )
  {
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v11, &LockRelease, v12, v8, L"hsem");
    }
    ExReleaseResourceAndLeaveCriticalRegion(v8);
    PsLeavePriorityRegion(v13);
    v29 = 0LL;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v29);
  return 1LL;
}
