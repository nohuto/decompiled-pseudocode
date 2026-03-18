/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0034DF0
 * Callers:
 *     _GetDCEx @ 0x1C002EFC0 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C0034430 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0043A70 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C00443D0 (CreateCacheDC.c)
 *     DestroyProcessInfo @ 0x1C00448B4 (DestroyProcessInfo.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C0069904 (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x1C006A65C (InitUserScreen.c)
 *     DestroyCacheDC @ 0x1C006BD80 (DestroyCacheDC.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0023B18 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCount @ 0x1C002A680 (HmgIncProcessHandleCount.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C0032050 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     GreSetBrushOwner @ 0x1C00357B0 (GreSetBrushOwner.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0037250 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00372A0 (GreAcquireHmgrSemaphore.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005D79C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreIncQuotaCount @ 0x1C0071BD0 (GreIncQuotaCount.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B5A24 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B5CC0 (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall GreSetDCOwnerEx(int a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  __int16 v5; // ebx^2
  unsigned int v6; // r14d
  _OWORD *v7; // rsi
  __int64 v8; // r13
  _BOOL8 v9; // rcx
  struct _ERESOURCE *v10; // rdi
  char *v11; // r12
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  char *v19; // rcx
  char *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rdx
  char **v28; // rax
  _BYTE *v29; // rdi
  volatile signed __int32 *v30; // rdx
  signed __int32 v31; // eax
  _BYTE *v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rsi
  _OWORD *v35; // rdx
  unsigned __int64 v36; // rbx
  int v37; // r8d
  unsigned int v38; // eax
  int v39; // r15d
  __int64 v40; // rcx
  __int64 v41; // rax
  _OWORD *v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // ebx
  _OWORD *v45; // rcx
  _OWORD *v46; // rax
  __int64 v47; // rdx
  unsigned int CurrentProcessId; // eax
  __int64 v49; // rdx
  int v50; // r8d
  unsigned int v51; // eax
  BOOL v52; // eax
  unsigned int v53; // ebx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdi
  __int64 v61; // rbx
  _QWORD *v62; // rcx
  __int64 v63; // rdx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  _OWORD *v67; // [rsp+30h] [rbp-88h]
  _BYTE *v68; // [rsp+38h] [rbp-80h] BYREF
  int v69; // [rsp+40h] [rbp-78h]
  unsigned int v70; // [rsp+44h] [rbp-74h]
  int v71; // [rsp+48h] [rbp-70h]
  unsigned int v72; // [rsp+4Ch] [rbp-6Ch]
  int v73; // [rsp+50h] [rbp-68h]
  char *v74; // [rsp+58h] [rbp-60h]
  BOOL v75; // [rsp+60h] [rbp-58h]
  unsigned int v76; // [rsp+64h] [rbp-54h]
  __int64 v77; // [rsp+68h] [rbp-50h]
  void *v78; // [rsp+70h] [rbp-48h] BYREF
  char v79[64]; // [rsp+78h] [rbp-40h] BYREF
  BOOL v80; // [rsp+C0h] [rbp+8h]
  int v81; // [rsp+D0h] [rbp+18h]

  v81 = a3;
  v4 = a2;
  v5 = HIWORD(a1);
  v6 = 0;
  v7 = 0LL;
  v67 = 0LL;
  v8 = (unsigned __int16)a1;
  v9 = (_DWORD)a3 == 0;
  v80 = a3 == 0;
  v75 = v80;
  if ( (unsigned int)v8 >= gcMaxHmgr )
    goto LABEL_117;
  v10 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v9, a2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
    LODWORD(v10) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(v9, a2, a3, (_DWORD)v10, 16, (__int64)L"ghsemHmgr");
  v11 = (char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * v8;
  v74 = v11;
  if ( v4 == -2147483646 && !v81 )
  {
    v12 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    v67 = 0LL;
    if ( !*(_QWORD *)(v12 + 24) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
      GreAcquireHmgrSemaphore(v17, v16);
      if ( !*(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v20 = (char *)HmgAllocateSecureUserMemory(&v78);
        if ( v20 )
        {
          v21 = PALLOCMEM2(0x60uLL, 1717789767LL, 0);
          v18 = v21;
          if ( !v21 )
          {
            HmgFreeAllocateSecureUserMemory(v20, v78);
            GreReleaseHmgrSemaphore(v23, v22);
            v67 = 0LL;
            goto LABEL_30;
          }
          v24 = *(_QWORD *)(CurrentProcessWin32Process + 192);
          *v21 = v24;
          v21[1] = CurrentProcessWin32Process + 192;
          if ( *(_QWORD *)(v24 + 8) != CurrentProcessWin32Process + 192 )
            __fastfail(3u);
          *(_QWORD *)(v24 + 8) = v21;
          *(_QWORD *)(CurrentProcessWin32Process + 192) = v21;
          *((_DWORD *)v21 + 4) = 9;
          v19 = v20 + 3328;
          *(_QWORD *)(CurrentProcessWin32Process + 40) = v20 + 3328;
          v21[3] = v20;
          v21[4] = v20 + 416;
          v21[5] = v20 + 832;
          v21[6] = v20 + 1248;
          v21[7] = v20 + 1664;
          v21[8] = v20 + 2080;
          v21[9] = v20 + 2496;
          v21[10] = v20 + 2912;
          v21[11] = v20 + 3328;
        }
      }
      if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v25 = CurrentProcessWin32Process + 192;
        v19 = *(char **)(CurrentProcessWin32Process + 192);
        v67 = *(_OWORD **)(CurrentProcessWin32Process + 40);
        v26 = *((_DWORD *)v19 + 4) - 1;
        *((_DWORD *)v19 + 4) = v26;
        if ( v26 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = *(_QWORD *)&v19[8 * (v26 - 1) + 24];
        }
        else
        {
          v27 = *(_QWORD *)v19;
          v28 = (char **)*((_QWORD *)v19 + 1);
          if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 || *v28 != v19 )
            __fastfail(3u);
          *v28 = (char *)v27;
          *(_QWORD *)(v27 + 8) = v28;
          Win32FreePool();
          if ( *(_QWORD *)v25 == v25 )
          {
            *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          }
          else
          {
            v19 = *(char **)(*(_QWORD *)v25 + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)v25 + 16LL) - 1) + 24);
            *(_QWORD *)(CurrentProcessWin32Process + 40) = v19;
          }
        }
      }
      GreReleaseHmgrSemaphore(v19, v18);
      goto LABEL_30;
    }
    v67 = *(_OWORD **)(v12 + 24);
    *(_QWORD *)(v12 + 24) = 0LL;
  }
LABEL_30:
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v79);
  v69 = 1;
  v29 = v11;
  v68 = v11;
  v72 = v8;
LABEL_31:
  while ( 1 )
  {
    v30 = (volatile signed __int32 *)(v29 + 8);
    _m_prefetchw(v29 + 8);
    v31 = *((_DWORD *)v29 + 2);
    v70 = v31;
    v32 = v29 + 15;
    if ( (v29[15] & 0x20) != 0 )
      break;
    while ( 1 )
    {
      if ( (*v32 & 0x40) != 0 )
      {
        ExAcquirePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v72, 0LL);
        goto LABEL_35;
      }
      if ( (v31 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_31;
      }
      v71 = v31 | 1;
      if ( v31 != _InterlockedCompareExchange(v30, v31 | 1, v31) || (*v32 & 0x40) != 0 )
        break;
      *((_QWORD *)WPP_MAIN_CB.Dpc.DpcData + v72) = 0LL;
      *v32 |= 0x40u;
      _m_prefetchw((const void *)v30);
      v70 = *v30 & 0xFFFFFFFE;
      _InterlockedExchange(v30, v70);
      v31 = v70;
      v29 = v68;
    }
    v29 = v68;
  }
  v69 = 0;
  v29 = 0LL;
  v68 = 0LL;
  KeLeaveCriticalRegion();
LABEL_35:
  if ( !v69 || !v29 )
    goto LABEL_98;
  v34 = *(_QWORD *)v11;
  v77 = *(_QWORD *)v11;
  if ( v11[14] == 1 && *((_WORD *)v11 + 6) == v5 )
  {
    if ( !*(_WORD *)(v34 + 12) || (v29 = v68, *(struct _KTHREAD **)(v34 + 16) == KeGetCurrentThread()) )
    {
      v76 = v4;
      if ( v4 != -2147483630 )
      {
        if ( (*((_DWORD *)v29 + 2) & 0xFFFFFFFE) == 0x80000012 )
          GrepValidateVisRgn((struct DC *)v34, *(struct REGION **)(v34 + 1512));
        if ( v4 )
        {
          if ( v4 == -2147483646 )
          {
            v36 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v38 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
            if ( v38 == (_DWORD)v36 || v38 == -2147483630 || !v38 )
            {
              v39 = 0;
              LODWORD(v74) = 0;
              v6 = 1;
              v73 = 1;
              if ( v38 != (_DWORD)v36 && a4 )
              {
                v6 = HmgIncProcessHandleCount((unsigned int)v36, (__int64)v35, v37);
                v73 = v6;
                if ( v6 )
                {
                  v39 = 1;
                  LODWORD(v74) = 1;
                }
                else if ( v81 )
                {
                  v41 = PsGetCurrentProcessWin32Process(v40);
                  GreIncQuotaCount(v41);
                  v39 = 1;
                  LODWORD(v74) = 1;
                  v6 = 1;
                  v73 = 1;
LABEL_56:
                  if ( *((_QWORD *)v11 + 2) )
                    goto LABEL_63;
                  v35 = v67;
                  if ( v67 )
                  {
                    *(_QWORD *)(v34 + 80) = v67;
                    *((_QWORD *)v11 + 2) = v67;
                    v42 = (_OWORD *)(v34 + 536);
                    v43 = 3LL;
                    do
                    {
                      *v35 = *v42;
                      v35[1] = v42[1];
                      v35[2] = v42[2];
                      v35[3] = v42[3];
                      v35[4] = v42[4];
                      v35[5] = v42[5];
                      v35[6] = v42[6];
                      v35 += 8;
                      *(v35 - 1) = v42[7];
                      v42 += 8;
                      --v43;
                    }
                    while ( v43 );
                    *v35 = *v42;
                    v35[1] = v42[1];
                    v67 = 0LL;
LABEL_63:
                    *((_DWORD *)v29 + 2) = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)*((_DWORD *)v29 + 2)) & 1;
                    if ( v29 >= WPP_MAIN_CB.Dpc.SystemArgument2
                      && WPP_MAIN_CB.DeviceLock.Header.LockNV
                      && gpentHmgrStacks )
                    {
                      RECSTACKBACKTRACE((unsigned __int16)((v29 - (char *)WPP_MAIN_CB.Dpc.SystemArgument2) / 24));
                    }
                    goto LABEL_88;
                  }
                  if ( v81 )
                    goto LABEL_63;
                  v6 = 0;
LABEL_67:
                  if ( v39 )
                    HmgDecProcessHandleCount((unsigned int)v36, (__int64)v35, v37);
                  goto LABEL_88;
                }
              }
              if ( !v6 )
                goto LABEL_67;
              goto LABEL_56;
            }
          }
LABEL_88:
          v52 = v80;
          goto LABEL_89;
        }
      }
      v44 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
      if ( v44 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v45 = *(_OWORD **)(v34 + 80);
        v46 = (_OWORD *)(v34 + 536);
        if ( v45 != (_OWORD *)(v34 + 536) )
        {
          v47 = 3LL;
          do
          {
            *v46 = *v45;
            v46[1] = v45[1];
            v46[2] = v45[2];
            v46[3] = v45[3];
            v46[4] = v45[4];
            v46[5] = v45[5];
            v46[6] = v45[6];
            v46 += 8;
            *(v46 - 1) = v45[7];
            v45 += 8;
            --v47;
          }
          while ( v47 );
          *v46 = *v45;
          v46[1] = v45[1];
          v67 = *(_OWORD **)(v34 + 80);
          if ( v67 == (_OWORD *)(v34 + 960) )
            v67 = *(_OWORD **)(v34 + 952);
          *(_QWORD *)(v34 + 80) = v34 + 536;
          *((_QWORD *)v11 + 2) = 0LL;
        }
        *((_DWORD *)v29 + 2) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)*((_DWORD *)v29 + 2)) & 1;
        if ( v29 >= WPP_MAIN_CB.Dpc.SystemArgument2 && WPP_MAIN_CB.DeviceLock.Header.LockNV && gpentHmgrStacks )
          RECSTACKBACKTRACE((unsigned __int16)((v29 - (char *)WPP_MAIN_CB.Dpc.SystemArgument2) / 24));
        if ( a4 )
        {
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC, v49, v50);
        }
      }
      else
      {
        v51 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
        if ( v51 != -2147483630 )
        {
          if ( !v51 && !v4 )
          {
            v6 = 1;
            v52 = 0;
LABEL_89:
            v53 = v76;
            if ( v76 != -2147483630 && v6 && v52 && (unsigned int)GreSetBrushOwner(**(HBRUSH **)(v34 + 144), v76) )
              GreSetBrushOwner(**(HBRUSH **)(v34 + 152), v53);
            goto LABEL_94;
          }
          goto LABEL_88;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v68, v4);
      }
      v6 = 1;
      goto LABEL_88;
    }
  }
LABEL_94:
  if ( (v29[15] & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v72);
  }
  else
  {
    _m_prefetchw(v29 + 8);
    v70 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)v29 + 2, v70);
  }
  v69 = 0;
  v29 = 0LL;
  v68 = 0LL;
  KeLeaveCriticalRegion();
LABEL_98:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pz(v33, &LockRelease, a3, ghsemHmgr, L"ghsemHmgr");
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v54);
  }
  if ( v69 )
  {
    if ( v29 )
    {
      if ( (v29[15] & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)WPP_MAIN_CB.Dpc.DpcData + 8 * v72);
      }
      else
      {
        _m_prefetchw(v29 + 8);
        v70 = *((_DWORD *)v29 + 2) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)v29 + 2, v70);
      }
    }
    KeLeaveCriticalRegion();
  }
  v7 = v67;
LABEL_117:
  if ( v7 )
  {
    v55 = 0LL;
    v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), a2, a3);
    if ( v56 )
      v55 = *v56;
    if ( v55 )
    {
      if ( *(_QWORD *)(v55 + 24) )
      {
        v60 = PsGetCurrentProcessWin32Process(v57);
        if ( v60 )
        {
          GreAcquireHmgrSemaphore(v59, v58);
          v61 = v60 + 192;
          if ( *(_QWORD *)v61 == v61 || (v62 = *(_QWORD **)v61, *(_DWORD *)(*(_QWORD *)v61 + 16LL) == 9) )
          {
            v62 = PALLOCMEM2(0x60uLL, 1717789767LL, 0);
            if ( !v62 )
            {
              GreReleaseHmgrSemaphore(0LL, v63);
              return v6;
            }
            v64 = *(_QWORD **)v61;
            *v62 = *(_QWORD *)v61;
            v62[1] = v61;
            if ( v64[1] != v61 )
              __fastfail(3u);
            v64[1] = v62;
            *(_QWORD *)v61 = v62;
            *((_DWORD *)v62 + 4) = 0;
          }
          v62[(unsigned int)(*((_DWORD *)v62 + 4))++ + 3] = v7;
          *(_QWORD *)(v60 + 40) = v7;
          EtwTraceGreLockReleaseSemaphore(L"ghsemHmgr");
          if ( ghsemHmgr )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
            PsLeavePriorityRegion(v65);
          }
        }
      }
      else
      {
        *(_QWORD *)(v55 + 24) = v7;
      }
    }
  }
  return v6;
}
