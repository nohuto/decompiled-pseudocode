/*
 * XREFs of HmgSetOwner @ 0x1C0023D60
 * Callers:
 *     CreateEmptyRgnPublic @ 0x1C0022340 (CreateEmptyRgnPublic.c)
 *     GreCreateBitmap @ 0x1C00227F0 (GreCreateBitmap.c)
 *     GreSetBitmapOwnerEx @ 0x1C00229D8 (GreSetBitmapOwnerEx.c)
 *     GreSetBitmapOwner @ 0x1C0023A30 (GreSetBitmapOwner.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0026470 (SetOrCreateRectRgnIndirectPublic.c)
 *     GreSetPaletteOwner @ 0x1C005CFA0 (GreSetPaletteOwner.c)
 *     ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x1C005D1AC (-vGlobal@BRUSHMEMOBJ@@QEAAXXZ.c)
 *     GreMakeBitmapNonStock @ 0x1C005DB10 (GreMakeBitmapNonStock.c)
 *     GreSetRegionOwner @ 0x1C00697B0 (GreSetRegionOwner.c)
 *     ?DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z @ 0x1C006C134 (-DestroyBitmap@@YAXPEAPEAUHBITMAP__@@@Z.c)
 *     bInitICM @ 0x1C013A470 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 *     bInitBMOBJ @ 0x1C013AE60 (bInitBMOBJ.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5CC0 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall HmgSetOwner(int a1, int a2, char a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rdi
  int v5; // r13d
  unsigned __int64 v7; // r15
  __int16 v8; // esi^2
  struct _ERESOURCE *v9; // rbx
  __int64 v10; // r14
  char *v11; // rdi
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 ThreadWin32Thread; // rax
  char v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  signed int v24; // ebp
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned int v29; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v31; // rdx
  int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  struct _ERESOURCE *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rax
  char v41[20]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v42; // [rsp+4Ch] [rbp-4Ch]
  int v43; // [rsp+50h] [rbp-48h]
  PEPROCESS Process; // [rsp+A0h] [rbp+8h] BYREF
  PEPROCESS v45; // [rsp+B8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned __int16)a1;
  v5 = 0;
  LODWORD(v7) = a2;
  v8 = HIWORD(a1);
  if ( a2 == -2147483646 )
    v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  if ( (unsigned int)v4 < gcMaxHmgr )
  {
    v9 = ghsemHmgr;
    if ( ghsemHmgr )
    {
      ((void (*)(void))PsEnterPriorityRegion)();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
      LODWORD(v9) = (_DWORD)ghsemHmgr;
    }
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v9, 16, (__int64)L"ghsemHmgr");
    v10 = v4;
    v11 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v4;
    PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v41);
    _m_prefetchw(v11 + 8);
    v12 = (v11[15] & 0x20) == 0;
    v13 = *((_DWORD *)v11 + 2);
    v42 = v13;
    if ( v12 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          if ( (v11[15] & 0x40) != 0 )
          {
            ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v10, 0LL);
            if ( v11[14] == a3 && *((_WORD *)v11 + 6) == v8 )
            {
              v19 = *(_QWORD *)v11;
              ThreadWin32Thread = PsGetThreadWin32Thread(KeGetCurrentThread(), v17, v18);
              v22 = 1LL;
              if ( ThreadWin32Thread && *(_QWORD *)ThreadWin32Thread )
              {
                v23 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 72LL);
                if ( v23 && (_DWORD)v7 )
                  v5 = 1;
              }
              else
              {
                v23 = 0LL;
              }
              if ( !*(_WORD *)(v19 + 12) || *(struct _KTHREAD **)(v19 + 16) == KeGetCurrentThread() || v5 )
              {
                v3 = 1;
                v24 = *((_DWORD *)v11 + 2) & 0xFFFFFFFE;
                if ( v5 )
                  LODWORD(v7) = *(_DWORD *)(v23 + 8);
                if ( v24 != (_DWORD)v7 )
                {
                  if ( (_DWORD)v7 && (_DWORD)v7 != -2147483630 )
                  {
                    GreAcquireHmgrSemaphore(v23, 1LL);
                    if ( (_DWORD)v7 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                    {
                      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
                      v28 = CurrentProcessWin32Process;
                      if ( CurrentProcessWin32Process )
                      {
                        v27 = *(unsigned int *)(CurrentProcessWin32Process + 60);
                        if ( (int)v27 < gProcessHandleQuota )
                        {
                          v27 = (unsigned int)(v27 + 1);
                          *(_DWORD *)(CurrentProcessWin32Process + 60) = v27;
                          v29 = *(_DWORD *)(CurrentProcessWin32Process + 64);
                          if ( (unsigned int)v27 > v29 )
                            v29 = v27;
                          *(_DWORD *)(v28 + 64) = v29;
                        }
                        else
                        {
                          v3 = 0;
                        }
                      }
                    }
                    else if ( PsLookupProcessByProcessId((HANDLE)(int)v7, &Process) >= 0 )
                    {
                      ProcessWin32Process = PsGetProcessWin32Process(Process);
                      v31 = ProcessWin32Process;
                      if ( ProcessWin32Process )
                      {
                        v32 = *(_DWORD *)(ProcessWin32Process + 60);
                        if ( v32 < gProcessHandleQuota )
                        {
                          v33 = v32 + 1;
                          *(_DWORD *)(ProcessWin32Process + 60) = v33;
                          v34 = *(_DWORD *)(ProcessWin32Process + 64);
                          if ( v33 > v34 )
                            v34 = v33;
                          *(_DWORD *)(v31 + 64) = v34;
                        }
                        else
                        {
                          v3 = 0;
                        }
                      }
                      ObfDereferenceObject(Process);
                    }
                    GreReleaseHmgrSemaphore(v27, v28);
                  }
                  if ( v3 )
                  {
                    if ( v24 && v24 != -2147483630 )
                    {
                      v35 = ghsemHmgr;
                      if ( ghsemHmgr )
                      {
                        PsEnterPriorityRegion(v23, v22);
                        ExEnterCriticalRegionAndAcquireResourceExclusive(v35);
                        LODWORD(v35) = (_DWORD)ghsemHmgr;
                      }
                      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                        Template_pqz(v23, v22, v21, (_DWORD)v35, 16, (__int64)L"ghsemHmgr");
                      if ( v24 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                      {
                        v37 = PsGetCurrentProcessWin32Process(v36);
                        if ( v37 )
                          --*(_DWORD *)(v37 + 60);
                      }
                      else if ( PsLookupProcessByProcessId((HANDLE)v24, &v45) >= 0 )
                      {
                        v40 = PsGetProcessWin32Process(v45);
                        if ( v40 )
                          --*(_DWORD *)(v40 + 60);
                        ObfDereferenceObject(v45);
                      }
                      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                        Template_pz(v38, &LockRelease, v39, ghsemHmgr, L"ghsemHmgr");
                      if ( ghsemHmgr )
                      {
                        ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
                        PsLeavePriorityRegion();
                      }
                    }
                    *((_DWORD *)v11 + 2) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*((_DWORD *)v11 + 2)) & 1;
                    if ( v11 >= WPP_MAIN_CB.Dpc.SystemArgument2
                      && WPP_MAIN_CB.DeviceLock.Header.LockNV
                      && gpentHmgrStacks )
                    {
                      RECSTACKBACKTRACE((unsigned __int16)((v11 - (char *)WPP_MAIN_CB.Dpc.SystemArgument2) / 24));
                    }
                  }
                }
              }
            }
            if ( (v11[15] & 0x40) != 0 )
            {
              ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v10);
            }
            else
            {
              _m_prefetchw(v11 + 8);
              v42 = *((_DWORD *)v11 + 2) & 0xFFFFFFFE;
              _InterlockedExchange((volatile __int32 *)v11 + 2, v42);
            }
            goto LABEL_17;
          }
          if ( (v13 & 1) == 0 )
            break;
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
LABEL_16:
          _m_prefetchw(v11 + 8);
          v12 = (v11[15] & 0x20) == 0;
          v13 = *((_DWORD *)v11 + 2);
          v42 = v13;
          if ( !v12 )
            goto LABEL_17;
        }
        v43 = v13 | 1;
        if ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v11 + 2, v13 | 1, v13)
          || (v11[15] & 0x40) != 0 )
        {
          goto LABEL_16;
        }
        *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v10) = 0LL;
        v11[15] |= 0x40u;
        _m_prefetchw(v11 + 8);
        v42 = *((_DWORD *)v11 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v11 + 2, v42);
        v13 = v42;
      }
    }
LABEL_17:
    KeLeaveCriticalRegion();
    if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      Template_pz(v14, &LockRelease, v15, ghsemHmgr, L"ghsemHmgr");
    if ( ghsemHmgr )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
      PsLeavePriorityRegion();
    }
  }
  return v3;
}
