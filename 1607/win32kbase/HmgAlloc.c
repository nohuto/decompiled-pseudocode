/*
 * XREFs of HmgAlloc @ 0x1C00300B0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@KHH@Z @ 0x1C002ED98 (--0DCMEMOBJ@@QEAA@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C002F030 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     IsWin32AllocateFromPagedLookasideListImplSupported_0 @ 0x1C0002C38 (IsWin32AllocateFromPagedLookasideListImplSupported_0.c)
 *     Win32AllocateFromPagedLookasideListImpl_0 @ 0x1C0002C40 (Win32AllocateFromPagedLookasideListImpl_0.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z @ 0x1C002B1B0 (-_IsEntryInUse@GdiHandleEntryTable@@AEAA_NI@Z.c)
 *     ?AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z @ 0x1C002B1E0 (-AcquireEntryIndex@GdiHandleEntryTable@@QEAA_NPEAI@Z.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     HmgDecProcessHandleCount @ 0x1C0036468 (HmgDecProcessHandleCount.c)
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0079944 (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00C0798 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00CC378 (Template_pqz.c)
 *     Template_pz @ 0x1C00CC434 (Template_pz.c)
 */

unsigned __int64 __fastcall HmgAlloc(unsigned int a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v3; // r15d
  signed int v4; // r13d
  char v5; // r12
  unsigned int v6; // ebx
  int v7; // edi
  int v8; // esi
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // r14
  __int64 v11; // r14
  unsigned int v12; // esi
  __int64 *ThreadWin32Thread; // rax
  int v14; // edx
  __int64 v15; // rcx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  struct _ERESOURCE *v19; // rbx
  int v20; // edi
  __int64 v21; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 ProcessWin32Process; // rax
  __int64 v27; // rdx
  int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rcx
  PVOID DeferredContext; // r14
  __int64 v33; // rbx
  __int64 v34; // rsi
  __int64 v35; // rdi
  int v36; // ecx
  __int64 *v37; // r15
  __int64 v38; // r12
  _QWORD *v39; // rdx
  __int64 v40; // rax
  _QWORD *v41; // rcx
  unsigned int v42; // edi
  GdiHandleEntryTable *v43; // rsi
  char v44; // bp
  unsigned int v45; // eax
  __int64 v46; // rsi
  __int64 v47; // r10
  unsigned int v48; // edx
  signed int v49; // ecx
  GdiHandleEntryTable *v50; // r10
  __int64 v51; // r9
  void *v52; // rax
  _QWORD *v53; // rbp
  unsigned int v54; // esi
  __int64 v55; // r9
  unsigned int v56; // edx
  signed int v57; // ecx
  GdiHandleEntryTable *v58; // r9
  __int64 v59; // r14
  __int64 v60; // rax
  __int64 v61; // rsi
  int v62; // ebx
  unsigned int v63; // ebx
  unsigned __int64 *v64; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v66; // rsi
  _QWORD *v67; // rbp
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rcx
  signed __int32 v73[8]; // [rsp+0h] [rbp-98h] BYREF
  const wchar_t *v74; // [rsp+20h] [rbp-78h]
  unsigned int v75; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 *v76; // [rsp+38h] [rbp-60h]
  PEPROCESS Process; // [rsp+40h] [rbp-58h] BYREF
  __int64 v78; // [rsp+48h] [rbp-50h]
  __int16 v79; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v80; // [rsp+A8h] [rbp+10h]
  unsigned int v82; // [rsp+B8h] [rbp+20h]

  LOBYTE(v80) = a2;
  v3 = a2;
  v82 = a2;
  v4 = 0;
  v5 = a3;
  v6 = a1;
  v7 = ((unsigned __int8)~(_BYTE)a3 >> 2) & 1;
  if ( LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) && a2 == LODWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    v8 = 1;
    v6 = a1 + 160;
  }
  else
  {
    v8 = 0;
  }
  if ( *((_DWORD *)&laSize + a2) >= v6 && (int)IsWin32AllocateFromPagedLookasideListImplSupported_0() >= 0 )
  {
    v9 = (unsigned __int64 *)Win32AllocateFromPagedLookasideListImpl_0();
    v76 = v9;
    v10 = v9;
    if ( v9 )
    {
      if ( v7 )
      {
        memset(v9, 0, v6);
      }
      else
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[2] = 0LL;
      }
      if ( v8 )
        RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)((char *)v10 + v6 - 160), 0LL);
      *((_WORD *)v10 + 7) = 0x8000;
      goto LABEL_21;
    }
  }
  if ( v7 )
  {
    v11 = PALLOCMEM2(v6);
    v76 = (unsigned __int64 *)v11;
  }
  else
  {
    v76 = (unsigned __int64 *)PALLOCMEM2(v6);
    v11 = (__int64)v76;
    if ( !v76 )
    {
LABEL_158:
      EngSetLastError(8u);
      return 0LL;
    }
    *v76 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = 0LL;
  }
  if ( !v11 )
    goto LABEL_158;
  if ( v8 )
    RtlCaptureStackBackTrace(0, 0x14u, (PVOID *)(v11 + v6 - 160LL), 0LL);
LABEL_21:
  v12 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  v78 = v12;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v17 = *ThreadWin32Thread;
    if ( v17 )
    {
      if ( (v5 & 0x10) == 0 )
      {
        v18 = *(_QWORD *)(v17 + 72);
        if ( v18 )
        {
          v12 = *(_DWORD *)(v18 + 8);
          v78 = v12;
        }
      }
    }
  }
  v19 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v15);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v19);
    v19 = ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    Template_pqz(v15, v14, v16, (_DWORD)v19, 16, (__int64)L"ghsemHmgr");
    v19 = ghsemHmgr;
  }
  v79 = v5 & 8;
  if ( (v5 & 8) == 0 )
  {
    v20 = 1;
    if ( v12 )
    {
      if ( v12 != -2147483630 )
      {
        if ( v19 )
        {
          PsEnterPriorityRegion(v15);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v19);
          LODWORD(v19) = (_DWORD)ghsemHmgr;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pqz(v15, v14, v16, (_DWORD)v19, 16, (__int64)L"ghsemHmgr");
        if ( v12 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v21);
          v24 = CurrentProcessWin32Process;
          if ( CurrentProcessWin32Process )
          {
            v23 = *(unsigned int *)(CurrentProcessWin32Process + 60);
            if ( (int)v23 < gProcessHandleQuota )
            {
              v23 = (unsigned int)(v23 + 1);
              *(_DWORD *)(CurrentProcessWin32Process + 60) = v23;
              v25 = *(_DWORD *)(CurrentProcessWin32Process + 64);
              if ( (unsigned int)v23 > v25 )
                v25 = v23;
              *(_DWORD *)(v24 + 64) = v25;
            }
            else
            {
              v20 = 0;
            }
          }
        }
        else if ( PsLookupProcessByProcessId((HANDLE)(int)v12, &Process) >= 0 )
        {
          ProcessWin32Process = PsGetProcessWin32Process(Process);
          v27 = ProcessWin32Process;
          if ( ProcessWin32Process )
          {
            v28 = *(_DWORD *)(ProcessWin32Process + 60);
            if ( v28 < gProcessHandleQuota )
            {
              v29 = v28 + 1;
              *(_DWORD *)(ProcessWin32Process + 60) = v29;
              v30 = *(_DWORD *)(ProcessWin32Process + 64);
              if ( v29 > v30 )
                v30 = v29;
              *(_DWORD *)(v27 + 64) = v30;
            }
            else
            {
              v20 = 0;
            }
          }
          ObfDereferenceObject(Process);
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        {
          v74 = L"ghsemHmgr";
          Template_pz(v23, &LockRelease);
        }
        v15 = (__int64)ghsemHmgr;
        if ( ghsemHmgr )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
          PsLeavePriorityRegion(v31);
        }
        if ( !v20 )
          goto LABEL_157;
      }
    }
  }
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( *((_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 1) >= *((_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 2) )
  {
LABEL_155:
    if ( !v79 )
      HmgDecProcessHandleCount((unsigned int)v78);
LABEL_157:
    GreReleaseHmgrSemaphore(v15);
    FreeObject(v76, v3);
    return 0LL;
  }
  while ( 1 )
  {
    v33 = *((_QWORD *)DeferredContext + 2);
    if ( *(_BYTE *)v33 )
      goto LABEL_154;
    v34 = *(_QWORD *)(v33 + 8);
    v75 = 0;
    if ( *(_DWORD *)(v34 + 16) >= *(_DWORD *)(v34 + 8) )
      goto LABEL_68;
    v35 = *(unsigned int *)(v34 + 12);
    if ( (_DWORD)v35 != -1 )
    {
      v36 = *(_DWORD *)(*(_QWORD *)v34 + 24 * v35);
      ++*(_DWORD *)(v34 + 16);
      *(_DWORD *)(v34 + 12) = v36;
      goto LABEL_76;
    }
    LODWORD(v35) = *(_DWORD *)(v34 + 20);
    v37 = *(__int64 **)(v34 + 24);
    v38 = 8LL * ((unsigned int)v35 >> 8);
    v39 = (_QWORD *)(v38 + *v37);
    if ( *v39
      || (v40 = Win32AllocPool(4096LL, 1668048199LL),
          v15 = *v37,
          *(_QWORD *)(v38 + *v37) = v40,
          v39 = (_QWORD *)(v38 + *v37),
          *v39) )
    {
      v41 = (_QWORD *)(*v39 + 16LL * (unsigned __int8)v35);
      *v41 = 0LL;
      v41[1] = 0LL;
      _InterlockedOr(v73, 0);
      ++*(_DWORD *)(v34 + 20);
      ++*(_DWORD *)(v34 + 16);
    }
    else
    {
LABEL_68:
      v42 = 1;
      if ( *(_WORD *)(v33 + 2) <= 1u )
      {
LABEL_72:
        if ( *(_WORD *)(v33 + 2) == 256 )
        {
          *(_BYTE *)v33 = 1;
LABEL_154:
          v3 = v82;
          goto LABEL_155;
        }
        *(_QWORD *)(v33 + 8LL * *(unsigned __int16 *)(v33 + 2) + 8) = GdiHandleEntryTable::_Create(0x10000u, 1);
        v15 = *(_QWORD *)(v33 + 8LL * *(unsigned __int16 *)(v33 + 2) + 8);
        if ( !v15 )
          goto LABEL_154;
        GdiHandleEntryTable::AcquireEntryIndex((GdiHandleEntryTable *)v15, &v75);
        v42 = *(unsigned __int16 *)(v33 + 2);
        *(_WORD *)(v33 + 2) = v42 + 1;
      }
      else
      {
        while ( 1 )
        {
          v43 = *(GdiHandleEntryTable **)(v33 + 8LL * v42 + 8);
          if ( GdiHandleEntryTable::AcquireEntryIndex(v43, &v75) )
            break;
          if ( *((_DWORD *)v43 + 4) != *((_DWORD *)v43 + 2) )
            goto LABEL_154;
          if ( ++v42 >= *(unsigned __int16 *)(v33 + 2) )
            goto LABEL_72;
        }
      }
      LODWORD(v35) = v75 + *(_DWORD *)(v33 + 2056) + ((v42 - 1) << 16);
    }
LABEL_76:
    ++*((_DWORD *)DeferredContext + 1);
    v44 = 0;
    v45 = *((_DWORD *)DeferredContext + 1);
    if ( v45 > *(_DWORD *)DeferredContext )
    {
      *(_DWORD *)DeferredContext = v45;
      v44 = 1;
      gcMaxHmgr = v45;
    }
    v46 = (unsigned __int16)v35;
    v47 = *((_QWORD *)DeferredContext + 2);
    v48 = *(_DWORD *)(v47 + 2056);
    if ( (unsigned __int16)v35 >= v48 + ((*(unsigned __int16 *)(v47 + 2) - 1) << 16) )
    {
LABEL_87:
      v51 = 0LL;
      goto LABEL_88;
    }
    if ( (unsigned __int16)v35 >= v48 )
    {
      v49 = (((unsigned __int16)v35 - v48) >> 16) + 1;
      if ( ((unsigned __int16)v35 - v48) >> 16 == -2 )
        goto LABEL_87;
    }
    else
    {
      v49 = 0;
    }
    v50 = *(GdiHandleEntryTable **)(v47 + 8LL * v49 + 8);
    if ( v49 )
      v46 = (unsigned __int16)v35 - ((v49 - 1) << 16) - v48;
    if ( (unsigned int)v46 < *((_DWORD *)v50 + 5) || GdiHandleEntryTable::_IsEntryInUse(v50, v46) )
      v51 = *(_QWORD *)v50 + 24 * v46;
LABEL_88:
    if ( (unsigned int)v35 < 0x10000 )
      break;
    if ( *(unsigned __int8 *)(v51 + 13) != WORD1(v35) )
      goto LABEL_100;
    if ( *((_QWORD *)DeferredContext + 3) )
      goto LABEL_93;
    v52 = (void *)Win32AllocPool(0x40000LL, 1668114503LL);
    *((_QWORD *)DeferredContext + 3) = v52;
    if ( v52 )
    {
      memset(v52, 0, 0x40000uLL);
LABEL_93:
      v15 = (unsigned __int16)v35;
      *(_DWORD *)(*((_QWORD *)DeferredContext + 3) + 4LL * (unsigned __int16)v35) = v35;
    }
    if ( *((_DWORD *)DeferredContext + 1) >= *((_DWORD *)DeferredContext + 2) )
      goto LABEL_154;
  }
  if ( v44 || *(_DWORD *)DeferredContext > 0x10000u )
    *(_BYTE *)(v51 + 13) = 0;
  else
    LODWORD(v35) = ((unsigned __int8)++*(_BYTE *)(v51 + 13) << 16) + v35;
LABEL_100:
  v53 = WPP_MAIN_CB.Dpc.DeferredContext;
  v54 = v35;
  if ( (unsigned int)v35 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v35,
                                  1)
           + 13) == WORD1(v35) )
        v54 = (unsigned __int16)v35;
    }
    else
    {
      v54 = (unsigned __int16)v35;
    }
  }
  v55 = v53[2];
  v56 = *(_DWORD *)(v55 + 2056);
  if ( v54 >= v56 + ((*(unsigned __int16 *)(v55 + 2) - 1) << 16) )
    goto LABEL_114;
  if ( v54 < v56 )
  {
    v57 = 0;
    goto LABEL_109;
  }
  v57 = ((v54 - v56) >> 16) + 1;
  if ( (v54 - v56) >> 16 == -2 )
  {
LABEL_114:
    v59 = 0LL;
  }
  else
  {
LABEL_109:
    v58 = *(GdiHandleEntryTable **)(v55 + 8LL * v57 + 8);
    if ( v57 )
      v54 = v54 - ((v57 - 1) << 16) - v56;
    v59 = 0LL;
    if ( v54 < *((_DWORD *)v58 + 5) || GdiHandleEntryTable::_IsEntryInUse(v58, v54) )
      v59 = *(_QWORD *)v58 + 24LL * v54;
  }
  v60 = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v60 && *(_QWORD *)v60 && (a3 & 0x10) == 0 )
    v61 = *(_QWORD *)(*(_QWORD *)v60 + 72LL);
  else
    v61 = 0LL;
  v62 = *(_DWORD *)(v59 + 8);
  *(_BYTE *)(v59 + 14) = v80;
  *(_BYTE *)(v59 + 15) = 0;
  *(_QWORD *)(v59 + 16) = 0LL;
  if ( v79 )
  {
    v63 = v62 & 1;
  }
  else if ( v61 )
  {
    v63 = *(_DWORD *)(v61 + 8) ^ (*(_DWORD *)(v61 + 8) ^ v62) & 1;
  }
  else
  {
    v63 = v62 & 1 | (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  v64 = v76;
  if ( (a3 & 1) != 0 )
  {
    if ( v61 )
      CurrentThread = *(struct _KTHREAD **)v61;
    else
      CurrentThread = KeGetCurrentThread();
    v76[2] = (unsigned __int64)CurrentThread;
  }
  *((_WORD *)v64 + 6) = a3 & 1;
  *((_DWORD *)v64 + 2) = (a3 >> 1) & 1;
  *(_QWORD *)v59 = v35 | 0xFFFFFFFFFF000000uLL;
  HIBYTE(v80) = BYTE2(v35);
  *(_QWORD *)(v59 + 16) = 0LL;
  v66 = (unsigned __int16)v35 | (unsigned __int64)(v80 << 16);
  *(_DWORD *)(v59 + 8) = v63;
  *(_WORD *)(v59 + 12) = v80;
  *v64 = v66;
  _InterlockedOr(v73, 0);
  v67 = WPP_MAIN_CB.Dpc.DeferredContext;
  if ( (unsigned int)v35 >= 0x10000 )
  {
    if ( *(_DWORD *)WPP_MAIN_CB.Dpc.DeferredContext > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext + 2),
                                  (unsigned __int16)v35,
                                  1)
           + 13) == WORD1(v35) )
        LODWORD(v35) = (unsigned __int16)v35;
    }
    else
    {
      LODWORD(v35) = (unsigned __int16)v35;
    }
  }
  v68 = v67[2];
  v69 = *(unsigned int *)(v68 + 2056);
  if ( (unsigned int)v35 < (unsigned int)v69 + ((*(unsigned __int16 *)(v68 + 2) - 1) << 16) )
  {
    if ( (unsigned int)v35 < (unsigned int)v69
      || (v4 = ((unsigned int)(v35 - v69) >> 16) + 1, (unsigned int)(v35 - v69) >> 16 != -2) )
    {
      v70 = *(_QWORD *)(v68 + 8LL * v4 + 8);
      if ( v4 )
        LODWORD(v35) = v35 - ((v4 - 1) << 16) - v69;
      if ( (unsigned int)v35 < *(_DWORD *)(v70 + 20) )
      {
        v69 = 2LL * (unsigned __int8)v35;
        *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v70 + 24) + 8 * ((unsigned __int64)(unsigned int)v35 >> 8))
                  + 16LL * (unsigned __int8)v35
                  + 8) = v64;
      }
    }
  }
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) && gpentHmgrStacks )
    RECSTACKBACKTRACE((unsigned __int16)v66 | ((unsigned int)v66 >> 8) & 0xFF0000);
  if ( (a3 & 3) != 0 )
    v66 = (unsigned __int64)v64;
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    v74 = L"ghsemHmgr";
    Template_pz(v69, &LockRelease);
  }
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v71);
  }
  return v66;
}
