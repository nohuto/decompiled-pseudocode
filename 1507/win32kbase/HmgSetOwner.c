/*
 * XREFs of HmgSetOwner @ 0x1C0042E90
 * Callers:
 *     GreSetPaletteOwner @ 0x1C000C180 (GreSetPaletteOwner.c)
 *     GreSetRegionOwner @ 0x1C0011B80 (GreSetRegionOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0042050 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetBitmapOwner @ 0x1C0044330 (GreSetBitmapOwner.c)
 *     GreSetBitmapOwnerEx @ 0x1C00447D8 (GreSetBitmapOwnerEx.c)
 *     CreateEmptyRgnPublic @ 0x1C0045250 (CreateEmptyRgnPublic.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C005BC00 (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 *     GreMakeBitmapNonStock @ 0x1C006A000 (GreMakeBitmapNonStock.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C007BC34 (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     bInitBMOBJ @ 0x1C0137ECC (bInitBMOBJ.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01381D0 (bInitPALOBJ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     HmgIsGarbageCollectibleType @ 0x1C00B3420 (HmgIsGarbageCollectibleType.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall HmgSetOwner(__int64 a1, int a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // r12
  __int16 v5; // ebp^2
  unsigned int v6; // r14d
  int v7; // r13d
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  bool v11; // zf
  signed __int32 v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 ThreadWin32Thread; // rax
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  signed int v23; // ebp
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v35; // rdx
  int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  struct _ERESOURCE *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rcx
  __int16 v49; // ax
  __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  char v52[20]; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v53; // [rsp+4Ch] [rbp-5Ch]
  int v54; // [rsp+50h] [rbp-58h]
  PEPROCESS Process; // [rsp+B0h] [rbp+8h] BYREF
  int v56; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v57; // [rsp+C0h] [rbp+18h]
  PEPROCESS v58; // [rsp+C8h] [rbp+20h] BYREF

  v57 = a3;
  v3 = (unsigned __int16)a1;
  v56 = 0;
  LODWORD(v4) = a2;
  v5 = WORD1(a1);
  v6 = 0;
  v7 = 0;
  if ( a2 == -2147483646 )
    v4 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  if ( (unsigned int)v3 >= gcMaxHmgr )
    return v6;
  v8 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(a1);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
    LODWORD(v8) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v8, 16, (__int64)L"ghsemHmgr");
  v9 = v3;
  v10 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v3;
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v52);
  _m_prefetchw((const void *)(v10 + 8));
  v11 = (*(_BYTE *)(v10 + 15) & 0x20) == 0;
  v12 = *(_DWORD *)(v10 + 8);
  v53 = v12;
  if ( !v11 )
    goto LABEL_17;
  while ( (*(_BYTE *)(v10 + 15) & 0x40) == 0 )
  {
    if ( (v12 & 1) != 0 )
    {
      KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_16:
      _m_prefetchw((const void *)(v10 + 8));
      v11 = (*(_BYTE *)(v10 + 15) & 0x20) == 0;
      v12 = *(_DWORD *)(v10 + 8);
      v53 = v12;
      if ( !v11 )
        goto LABEL_17;
    }
    else
    {
      v54 = v12 | 1;
      if ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v12 | 1, v12)
        || (*(_BYTE *)(v10 + 15) & 0x40) != 0 )
      {
        goto LABEL_16;
      }
      *((_QWORD *)gpentPushLock + v9) = 0LL;
      *(_BYTE *)(v10 + 15) |= 0x40u;
      _m_prefetchw((const void *)(v10 + 8));
      v53 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
      _InterlockedExchange((volatile __int32 *)(v10 + 8), v53);
      v12 = v53;
    }
  }
  v17 = 8 * v9;
  ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v9, 0LL);
  if ( *(_BYTE *)(v10 + 14) == v57 && *(_WORD *)(v10 + 12) == v5 )
  {
    v18 = *(_QWORD *)v10;
    ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread());
    v21 = 1;
    if ( ThreadWin32Thread && *(_QWORD *)ThreadWin32Thread )
    {
      v22 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 72LL);
      if ( v22 && (_DWORD)v4 )
        v7 = 1;
    }
    else
    {
      v22 = 0LL;
    }
    if ( *(_WORD *)(v18 + 12) && *(struct _KTHREAD **)(v18 + 16) != KeGetCurrentThread() && !v7 )
      goto LABEL_88;
    v23 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
    if ( v7 )
      LODWORD(v4) = *(_DWORD *)(v22 + 8);
    if ( v23 == (_DWORD)v4 )
    {
      v6 = 1;
      goto LABEL_90;
    }
    v56 = 1;
    v24 = 1;
    if ( (_DWORD)v4 && (_DWORD)v4 != -2147483630 )
    {
      GreAcquireHmgrSemaphore(v22, 1, v20);
      if ( (_DWORD)v4 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26, v25, v27, v28, v50, v51);
        v32 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
        {
          v30 = *(unsigned int *)(CurrentProcessWin32Process + 60);
          if ( (int)v30 < gProcessHandleQuota )
          {
            v30 = (unsigned int)(v30 + 1);
            *(_DWORD *)(CurrentProcessWin32Process + 60) = v30;
            v33 = *(_DWORD *)(CurrentProcessWin32Process + 64);
            if ( (unsigned int)v30 > v33 )
              v33 = v30;
            *(_DWORD *)(v32 + 64) = v33;
          }
          else
          {
            v24 = 0;
            v56 = 0;
          }
        }
      }
      else if ( PsLookupProcessByProcessId((HANDLE)(int)v4, &Process) >= 0 )
      {
        ProcessWin32Process = PsGetProcessWin32Process(Process);
        v35 = ProcessWin32Process;
        if ( ProcessWin32Process )
        {
          v36 = *(_DWORD *)(ProcessWin32Process + 60);
          if ( v36 < gProcessHandleQuota )
          {
            v37 = v36 + 1;
            *(_DWORD *)(ProcessWin32Process + 60) = v37;
            v38 = *(_DWORD *)(ProcessWin32Process + 64);
            if ( v37 > v38 )
              v38 = v37;
            *(_DWORD *)(v35 + 64) = v38;
          }
          else
          {
            v24 = 0;
            v56 = 0;
          }
        }
        ObfDereferenceObject(Process);
      }
      GreReleaseHmgrSemaphore(v30, v32, v31);
    }
    if ( v24 )
    {
      if ( v23 && v23 != -2147483630 )
      {
        v39 = ghsemHmgr;
        if ( ghsemHmgr )
        {
          PsEnterPriorityRegion(v22);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v39);
          LODWORD(v39) = (_DWORD)ghsemHmgr;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pqz(v22, v21, (_BYTE)v20, (_DWORD)v39, 16, (__int64)L"ghsemHmgr");
        if ( v23 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          v44 = PsGetCurrentProcessWin32Process(v41, v40, v42, v43, v50, v51);
          if ( v44 )
            --*(_DWORD *)(v44 + 60);
        }
        else if ( PsLookupProcessByProcessId((HANDLE)v23, &v58) >= 0 )
        {
          v47 = PsGetProcessWin32Process(v58);
          if ( v47 )
            --*(_DWORD *)(v47 + 60);
          ObfDereferenceObject(v58);
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(v45, &LockRelease, v46, ghsemHmgr);
        if ( ghsemHmgr )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
          PsLeavePriorityRegion(v48);
        }
      }
      *(_DWORD *)(v10 + 8) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)*(_DWORD *)(v10 + 8)) & 1;
      if ( v10 >= *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
        && LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink)
        && gpentHmgrStacks )
      {
        RECSTACKBACKTRACE((unsigned __int16)((__int64)(v10 - *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement) / 24));
      }
      if ( (_DWORD)v4
        && (_DWORD)v4 != -2147483630
        && (unsigned int)HmgIsGarbageCollectibleType(v57)
        && (*(_WORD *)(v18 + 12) || *(_DWORD *)(v18 + 8)) )
      {
        v49 = *(_WORD *)(v18 + 14);
        if ( (v49 & 0x4000) == 0 )
          *(_WORD *)(v18 + 14) = v49 | 0x4000;
      }
      v6 = v56;
    }
    else
    {
LABEL_88:
      v6 = v56;
    }
  }
LABEL_90:
  if ( (*(_BYTE *)(v10 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + v17, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v10 + 8));
    v53 = *(_DWORD *)(v10 + 8) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)(v10 + 8), v53);
  }
LABEL_17:
  KeLeaveCriticalRegion();
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v13, &LockRelease, v14, ghsemHmgr);
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v15);
  }
  return v6;
}
