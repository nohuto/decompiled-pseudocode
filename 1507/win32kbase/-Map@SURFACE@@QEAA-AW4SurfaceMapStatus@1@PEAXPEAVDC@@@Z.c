/*
 * XREFs of ?Map@SURFACE@@QEAA?AW4SurfaceMapStatus@1@PEAXPEAVDC@@@Z @ 0x1C0039BC0
 * Callers:
 *     ?bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z @ 0x1C0024170 (-bMap@SURFREFVIEW@@QEAAHPEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z @ 0x1C0013A1C (-MapKernelSectionForUserMapping@@YAJPEAXPEAU_EPROCESS@@_KPEAPEAX@Z.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C00242B8 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ @ 0x1C0024360 (-vUnlockSingleThread@W32PIDLOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C0085820 (--1SEMOBJ@@QEAA@XZ.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall SURFACE::Map(__int64 a1)
{
  unsigned int *v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  void *v22; // rdi
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  char *v31; // rdx
  __int64 v32; // r8
  bool v33; // zf
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-28h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-28h]
  PLARGE_INTEGER Timeoutb; // [rsp+20h] [rbp-28h]
  __int64 v37; // [rsp+28h] [rbp-20h]
  __int64 v38; // [rsp+28h] [rbp-20h]
  __int64 v39; // [rsp+28h] [rbp-20h]
  HSEMAPHORE v40; // [rsp+50h] [rbp+8h] BYREF
  void *v41; // [rsp+68h] [rbp+20h] BYREF

  v41 = 0LL;
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
  v10 = (struct _ERESOURCE *)ghsemMapRot;
  v40 = ghsemMapRot;
  if ( ghsemMapRot )
  {
    PsEnterPriorityRegion(v7);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
  }
  v11 = *(_QWORD *)(a1 + 256);
  if ( v11 != PsGetCurrentProcessWin32Process(v7, v6, v8, v9, Timeout, v37) )
  {
    if ( *(_QWORD *)(a1 + 256) )
    {
      v18 = (_QWORD *)(a1 + 440);
      v19 = *(_QWORD *)(a1 + 440);
      v13 = *(_QWORD **)(a1 + 448);
      if ( *(_QWORD *)(v19 + 8) != a1 + 440 || (_QWORD *)*v13 != v18 )
        __fastfail(3u);
      *v13 = v19;
      *(_QWORD *)(v19 + 8) = v13;
      *(_QWORD *)(a1 + 448) = a1 + 440;
      *v18 = v18;
      v12 = *(_QWORD *)(a1 + 72);
      if ( v12 )
        MmUnmapViewOfSection(**(_QWORD **)(a1 + 256), v12);
    }
    v20 = *(_DWORD *)(a1 + 116) & 1;
    if ( !v20 )
    {
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    *(_QWORD *)(a1 + 256) = 0LL;
    *(_QWORD *)(a1 + 248) = 0LL;
    if ( !v20 )
    {
      v21 = *(_DWORD *)(a1 + 64);
      v22 = *(void **)(a1 + 240);
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v13, v12);
      MapKernelSectionForUserMapping(v22, CurrentProcess, v21, &v41);
      if ( !v41 )
      {
        SEMOBJ::vUnlock((SEMOBJ *)&v40, v12, v14);
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(a1 + 264));
        W32PIDLOCK::vUnlockSimple((W32PIDLOCK *)(a1 + 264));
        SEMOBJ::~SEMOBJ((SEMOBJ *)&v40);
        return 2LL;
      }
    }
    v24 = a1 + 440;
    v25 = (__int64 *)(PsGetCurrentProcessWin32Process(v13, v12, v14, v15, Timeouta, v38) + 224);
    v26 = *v25;
    *(_QWORD *)(a1 + 440) = *v25;
    *(_QWORD *)(a1 + 448) = v25;
    if ( *(__int64 **)(v26 + 8) != v25 )
      __fastfail(3u);
    *(_QWORD *)(v26 + 8) = v24;
    *v25 = v24;
    *(_QWORD *)(a1 + 248) = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)(a1 + 256) = PsGetCurrentProcessWin32Process(v28, v27, v29, v30, Timeoutb, v39);
    if ( (*(_DWORD *)(a1 + 116) & 1) == 0 )
    {
      v33 = (*(_BYTE *)(a1 + 102) & 1) == 0;
      v31 = (char *)v41;
      *(_QWORD *)(a1 + 72) = v41;
      if ( v33 )
        *(_QWORD *)(a1 + 80) = &v31[*(_DWORD *)(a1 + 64) + *(_DWORD *)(a1 + 88)];
      else
        *(_QWORD *)(a1 + 80) = v31;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v40, (__int64)v31, v32);
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v40);
    return 0LL;
  }
  if ( v10 )
  {
    if ( gbLockEtw )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        Template_pz(v13, &LockRelease, v14, v10);
    }
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion(v16);
    v40 = 0LL;
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v40);
  return 1LL;
}
