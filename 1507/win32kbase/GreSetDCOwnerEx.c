/*
 * XREFs of GreSetDCOwnerEx @ 0x1C0035D30
 * Callers:
 *     ReleaseCacheDC @ 0x1C00357B0 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     CreateCacheDC @ 0x1C0054910 (CreateCacheDC.c)
 *     DestroyCacheDC @ 0x1C005B4A0 (DestroyCacheDC.c)
 *     ?DestroyDC@@YAXPEAPEAUHDC__@@@Z @ 0x1C006D43C (-DestroyDC@@YAXPEAPEAUHDC__@@@Z.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00BF750 (GreCleanDCAndSetOwnerEx.c)
 * Callees:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C000CAC8 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     GreIncQuotaCount @ 0x1C000FD20 (GreIncQuotaCount.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ??B?$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ @ 0x1C0035640 (--B-$HmgLockResultBase@VDRVOBJ@@@@QEBA_NXZ.c)
 *     GreSetBrushOwner @ 0x1C00367D0 (GreSetBrushOwner.c)
 *     HmgDecProcessHandleCount @ 0x1C00386E0 (HmgDecProcessHandleCount.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00398C0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003A9F0 (GreReleaseHmgrSemaphore.c)
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C003C470 (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0040180 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     HmgIncProcessHandleCount @ 0x1C004AE80 (HmgIncProcessHandleCount.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ??0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z @ 0x1C00AF5E0 (--0AcquireDcVisRgnExclusive@@QEAA@PEAVDC@@@Z.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00B2E04 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 *     ?RECSTACKBACKTRACE@@YAXI@Z @ 0x1C00B31EC (-RECSTACKBACKTRACE@@YAXI@Z.c)
 *     ??0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z @ 0x1C00B3D94 (--0AcquireDcVisRgnShared@@QEAA@PEAVDC@@@Z.c)
 *     ??1AcquireDcVisRgnShared@@QEAA@XZ @ 0x1C00B3DB8 (--1AcquireDcVisRgnShared@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00BE150 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 *     Template_pqz @ 0x1C00BEC08 (Template_pqz.c)
 *     Template_pz @ 0x1C00BECC4 (Template_pz.c)
 */

__int64 __fastcall GreSetDCOwnerEx(int a1, unsigned int a2, int a3, int a4)
{
  __int16 v5; // ebx^2
  unsigned int v6; // r15d
  _OWORD *v7; // rsi
  __int64 v8; // r12
  _BOOL8 v9; // rcx
  struct _ERESOURCE *v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 CurrentProcessWin32Process; // rdi
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 *v23; // rcx
  int v24; // eax
  __int64 *v25; // rdx
  __int64 **v26; // rax
  unsigned __int64 v27; // rdi
  volatile signed __int32 *v28; // rdx
  signed __int32 v29; // eax
  _BYTE *v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rsi
  bool v34; // bl
  unsigned __int64 v35; // rbx
  unsigned int v36; // eax
  int v37; // r14d
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _OWORD *v43; // rdx
  _OWORD *v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebx
  _OWORD *v47; // rcx
  _OWORD *v48; // rax
  __int64 v49; // rdx
  unsigned int CurrentProcessId; // eax
  unsigned int v51; // eax
  BOOL v52; // eax
  unsigned int v53; // ebx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  int v61; // edx
  __int64 v62; // rcx
  __int64 v63; // rdi
  __int64 v64; // r8
  struct _ERESOURCE *v65; // rbx
  __int64 *v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int64 v69; // rcx
  const wchar_t *v71; // [rsp+20h] [rbp-C8h]
  __int64 v72; // [rsp+28h] [rbp-C0h]
  _OWORD *v73; // [rsp+30h] [rbp-B8h]
  __int64 v74; // [rsp+38h] [rbp-B0h] BYREF
  int v75; // [rsp+40h] [rbp-A8h]
  unsigned int v76; // [rsp+44h] [rbp-A4h]
  int v77; // [rsp+48h] [rbp-A0h]
  unsigned int v78; // [rsp+4Ch] [rbp-9Ch]
  int v79; // [rsp+50h] [rbp-98h]
  BOOL v80; // [rsp+54h] [rbp-94h]
  __int64 v81; // [rsp+58h] [rbp-90h]
  unsigned int v82; // [rsp+60h] [rbp-88h]
  __int64 v83; // [rsp+68h] [rbp-80h]
  __int64 v84; // [rsp+70h] [rbp-78h] BYREF
  char v85[8]; // [rsp+78h] [rbp-70h] BYREF
  char v86[8]; // [rsp+80h] [rbp-68h] BYREF
  void *v87; // [rsp+88h] [rbp-60h] BYREF
  char v88[8]; // [rsp+90h] [rbp-58h] BYREF
  struct _RECTL v89; // [rsp+98h] [rbp-50h] BYREF
  BOOL v90; // [rsp+F0h] [rbp+8h]

  v5 = HIWORD(a1);
  v6 = 0;
  v7 = 0LL;
  v73 = 0LL;
  v8 = (unsigned __int16)a1;
  v9 = a3 == 0;
  v90 = a3 == 0;
  v80 = v90;
  if ( (unsigned int)v8 >= gcMaxHmgr )
    goto LABEL_120;
  v10 = ghsemHmgr;
  if ( ghsemHmgr )
  {
    PsEnterPriorityRegion(v9);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v10);
    LODWORD(v10) = (_DWORD)ghsemHmgr;
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    Template_pqz(v9, a2, a3, (_DWORD)v10, 16, (__int64)L"ghsemHmgr");
  v11 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v8;
  v81 = v11;
  if ( a2 == -2147483646 && !a3 )
  {
    v12 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    v73 = 0LL;
    if ( !*(_QWORD *)(v12 + 24) )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14, v16, v17, v71, v72);
      GreAcquireHmgrSemaphore();
      if ( !*(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v19 = (char *)HmgAllocateSecureUserMemory(&v87);
        if ( v19 )
        {
          v20 = PALLOCMEM2(0x60uLL);
          if ( !v20 )
          {
            HmgFreeAllocateSecureUserMemory(v19, v87);
            GreReleaseHmgrSemaphore();
            v73 = 0LL;
            goto LABEL_30;
          }
          v21 = *(_QWORD *)(CurrentProcessWin32Process + 192);
          *(_QWORD *)v20 = v21;
          *(_QWORD *)(v20 + 8) = CurrentProcessWin32Process + 192;
          if ( *(_QWORD *)(v21 + 8) != CurrentProcessWin32Process + 192 )
            __fastfail(3u);
          *(_QWORD *)(v21 + 8) = v20;
          *(_QWORD *)(CurrentProcessWin32Process + 192) = v20;
          *(_DWORD *)(v20 + 16) = 9;
          *(_QWORD *)(CurrentProcessWin32Process + 40) = v19 + 3328;
          *(_QWORD *)(v20 + 24) = v19;
          *(_QWORD *)(v20 + 32) = v19 + 416;
          *(_QWORD *)(v20 + 40) = v19 + 832;
          *(_QWORD *)(v20 + 48) = v19 + 1248;
          *(_QWORD *)(v20 + 56) = v19 + 1664;
          *(_QWORD *)(v20 + 64) = v19 + 2080;
          *(_QWORD *)(v20 + 72) = v19 + 2496;
          *(_QWORD *)(v20 + 80) = v19 + 2912;
          *(_QWORD *)(v20 + 88) = v19 + 3328;
        }
      }
      if ( *(_QWORD *)(CurrentProcessWin32Process + 40) )
      {
        v22 = CurrentProcessWin32Process + 192;
        v23 = *(__int64 **)(CurrentProcessWin32Process + 192);
        v73 = *(_OWORD **)(CurrentProcessWin32Process + 40);
        v24 = *((_DWORD *)v23 + 4) - 1;
        *((_DWORD *)v23 + 4) = v24;
        if ( v24 )
        {
          *(_QWORD *)(CurrentProcessWin32Process + 40) = v23[(unsigned int)(v24 - 1) + 3];
        }
        else
        {
          v25 = (__int64 *)*v23;
          v26 = (__int64 **)v23[1];
          if ( *(__int64 **)(*v23 + 8) != v23 || *v26 != v23 )
            __fastfail(3u);
          *v26 = v25;
          v25[1] = (__int64)v26;
          Win32FreePool();
          if ( *(_QWORD *)v22 == v22 )
            *(_QWORD *)(CurrentProcessWin32Process + 40) = 0LL;
          else
            *(_QWORD *)(CurrentProcessWin32Process + 40) = *(_QWORD *)(*(_QWORD *)v22
                                                                     + 8LL
                                                                     * (unsigned int)(*(_DWORD *)(*(_QWORD *)v22 + 16LL)
                                                                                    - 1)
                                                                     + 24);
        }
      }
      GreReleaseHmgrSemaphore();
      goto LABEL_30;
    }
    v73 = *(_OWORD **)(v12 + 24);
    *(_QWORD *)(v12 + 24) = 0LL;
  }
LABEL_30:
  PsGetCurrentThreadWin32ThreadAndEnterCriticalRegion(v88);
  v75 = 1;
  v27 = v11;
  v74 = v11;
  v78 = v8;
LABEL_31:
  while ( 1 )
  {
    v28 = (volatile signed __int32 *)(v27 + 8);
    _m_prefetchw((const void *)(v27 + 8));
    v29 = *(_DWORD *)(v27 + 8);
    v76 = v29;
    v30 = (_BYTE *)(v27 + 15);
    if ( (*(_BYTE *)(v27 + 15) & 0x20) != 0 )
      break;
    while ( 1 )
    {
      if ( (*v30 & 0x40) != 0 )
      {
        ExAcquirePushLockExclusiveEx((char *)gpentPushLock + 8 * v78, 0LL);
        goto LABEL_35;
      }
      if ( (v29 & 1) != 0 )
      {
        KeDelayExecutionThread(0, 0, gpLockShortDelay);
        goto LABEL_31;
      }
      v77 = v29 | 1;
      if ( v29 != _InterlockedCompareExchange(v28, v29 | 1, v29) || (*v30 & 0x40) != 0 )
        break;
      *((_QWORD *)gpentPushLock + v78) = 0LL;
      *v30 |= 0x40u;
      _m_prefetchw((const void *)v28);
      v76 = *v28 & 0xFFFFFFFE;
      _InterlockedExchange(v28, v76);
      v29 = v76;
      v27 = v74;
    }
    v27 = v74;
  }
  v75 = 0;
  v27 = 0LL;
  v74 = 0LL;
  KeLeaveCriticalRegion();
LABEL_35:
  if ( !v75 || !v27 )
    goto LABEL_101;
  v33 = *(_QWORD *)v11;
  v83 = *(_QWORD *)v11;
  if ( *(_BYTE *)(v11 + 14) == 1 && *(_WORD *)(v11 + 12) == v5 )
  {
    if ( !*(_WORD *)(v33 + 12) || (v27 = v74, *(struct _KTHREAD **)(v33 + 16) == KeGetCurrentThread()) )
    {
      v82 = a2;
      if ( a2 != -2147483630 )
      {
        if ( (*(_DWORD *)(v27 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          AcquireDcVisRgnShared::AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v86, (struct DC *)v33);
          v34 = GrepValidateVisRgn((struct DC *)v33, *(struct REGION **)(v33 + 1536), (struct ERECTL *)&v89);
          AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v86);
          if ( !v34 )
          {
            AcquireDcVisRgnExclusive::AcquireDcVisRgnExclusive((AcquireDcVisRgnExclusive *)v85, (struct DC *)v33);
            v84 = *(_QWORD *)(v33 + 1536);
            if ( HmgLockResultBase<DRVOBJ>::operator bool(&v84) )
              RGNOBJ::vSet((RGNOBJ *)&v84, &v89);
            AcquireDcVisRgnShared::~AcquireDcVisRgnShared((AcquireDcVisRgnShared *)v85);
          }
        }
        if ( a2 )
        {
          if ( a2 == -2147483646 )
          {
            v35 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
            v36 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
            if ( v36 == (_DWORD)v35 || v36 == -2147483630 || !v36 )
            {
              v37 = 0;
              LODWORD(v81) = 0;
              v6 = 1;
              v79 = 1;
              if ( v36 != (_DWORD)v35 && a4 )
              {
                v6 = HmgIncProcessHandleCount((unsigned int)v35);
                v79 = v6;
                if ( v6 )
                {
                  v37 = 1;
                  LODWORD(v81) = 1;
                }
                else if ( a3 )
                {
                  v42 = PsGetCurrentProcessWin32Process(v39, v38, v40, v41, v71, v72);
                  GreIncQuotaCount(v42);
                  v37 = 1;
                  LODWORD(v81) = 1;
                  v6 = 1;
                  v79 = 1;
LABEL_59:
                  if ( *(_QWORD *)(v11 + 16) )
                    goto LABEL_66;
                  v43 = v73;
                  if ( v73 )
                  {
                    *(_QWORD *)(v33 + 80) = v73;
                    *(_QWORD *)(v11 + 16) = v73;
                    v44 = (_OWORD *)(v33 + 536);
                    v45 = 3LL;
                    do
                    {
                      *v43 = *v44;
                      v43[1] = v44[1];
                      v43[2] = v44[2];
                      v43[3] = v44[3];
                      v43[4] = v44[4];
                      v43[5] = v44[5];
                      v43[6] = v44[6];
                      v43 += 8;
                      *(v43 - 1) = v44[7];
                      v44 += 8;
                      --v45;
                    }
                    while ( v45 );
                    *v43 = *v44;
                    v43[1] = v44[1];
                    v73 = 0LL;
LABEL_66:
                    *(_DWORD *)(v27 + 8) = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)*(_DWORD *)(v27 + 8)) & 1;
                    if ( v27 >= *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
                      && LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink)
                      && gpentHmgrStacks )
                    {
                      RECSTACKBACKTRACE((unsigned __int16)((__int64)(v27 - *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement)
                                                         / 24));
                    }
                    goto LABEL_91;
                  }
                  if ( a3 )
                    goto LABEL_66;
                  v6 = 0;
LABEL_70:
                  if ( v37 )
                    HmgDecProcessHandleCount((unsigned int)v35);
                  goto LABEL_91;
                }
              }
              if ( !v6 )
                goto LABEL_70;
              goto LABEL_59;
            }
          }
LABEL_91:
          v52 = v90;
          goto LABEL_92;
        }
      }
      v46 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
      if ( v46 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
      {
        v47 = *(_OWORD **)(v33 + 80);
        v48 = (_OWORD *)(v33 + 536);
        if ( v47 != (_OWORD *)(v33 + 536) )
        {
          v49 = 3LL;
          do
          {
            *v48 = *v47;
            v48[1] = v47[1];
            v48[2] = v47[2];
            v48[3] = v47[3];
            v48[4] = v47[4];
            v48[5] = v47[5];
            v48[6] = v47[6];
            v48 += 8;
            *(v48 - 1) = v47[7];
            v47 += 8;
            --v49;
          }
          while ( v49 );
          *v48 = *v47;
          v48[1] = v47[1];
          v73 = *(_OWORD **)(v33 + 80);
          if ( v73 == (_OWORD *)(v33 + 960) )
            v73 = *(_OWORD **)(v33 + 952);
          *(_QWORD *)(v33 + 80) = v33 + 536;
          *(_QWORD *)(v11 + 16) = 0LL;
        }
        *(_DWORD *)(v27 + 8) = a2 ^ ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(v27 + 8)) & 1;
        if ( v27 >= *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement
          && LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink)
          && gpentHmgrStacks )
        {
          RECSTACKBACKTRACE((unsigned __int16)((__int64)(v27 - *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement) / 24));
        }
        if ( a4 )
        {
          CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
          HmgDecProcessHandleCount(CurrentProcessId & 0xFFFFFFFC);
        }
      }
      else
      {
        v51 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
        if ( v51 != -2147483630 )
        {
          if ( !v51 && !a2 )
          {
            v6 = 1;
            v52 = 0;
LABEL_92:
            v53 = v82;
            if ( v82 != -2147483630 && v6 && v52 && (unsigned int)GreSetBrushOwner(**(HBRUSH **)(v33 + 144), v82) )
              GreSetBrushOwner(**(HBRUSH **)(v33 + 152), v53);
            goto LABEL_97;
          }
          goto LABEL_91;
        }
        HANDLELOCK::Pid((HANDLELOCK *)&v74, a2);
      }
      v6 = 1;
      goto LABEL_91;
    }
  }
LABEL_97:
  if ( (*(_BYTE *)(v27 + 15) & 0x40) != 0 )
  {
    ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v78, 0LL);
  }
  else
  {
    _m_prefetchw((const void *)(v27 + 8));
    v76 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
    _InterlockedExchange((volatile __int32 *)(v27 + 8), v76);
  }
  v75 = 0;
  v27 = 0LL;
  v74 = 0LL;
  KeLeaveCriticalRegion();
LABEL_101:
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
  {
    v71 = L"ghsemHmgr";
    Template_pz(v31, &LockRelease, v32, ghsemHmgr);
  }
  if ( ghsemHmgr )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
    PsLeavePriorityRegion(v54);
  }
  if ( v75 )
  {
    if ( v27 )
    {
      if ( (*(_BYTE *)(v27 + 15) & 0x40) != 0 )
      {
        ExReleasePushLockExclusiveEx((char *)gpentPushLock + 8 * v78, 0LL);
      }
      else
      {
        _m_prefetchw((const void *)(v27 + 8));
        v76 = *(_DWORD *)(v27 + 8) & 0xFFFFFFFE;
        _InterlockedExchange((volatile __int32 *)(v27 + 8), v76);
      }
    }
    KeLeaveCriticalRegion();
  }
  v7 = v73;
LABEL_120:
  if ( v7 )
  {
    v55 = 0LL;
    v56 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v56 )
      v55 = *v56;
    if ( v55 )
    {
      if ( *(_QWORD *)(v55 + 24) )
      {
        v63 = PsGetCurrentProcessWin32Process(v58, v57, v59, v60, v71, v72);
        if ( v63 )
        {
          v65 = ghsemHmgr;
          if ( ghsemHmgr )
          {
            PsEnterPriorityRegion(v62);
            ExEnterCriticalRegionAndAcquireResourceExclusive(v65);
            LODWORD(v65) = (_DWORD)ghsemHmgr;
          }
          if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            Template_pqz(v62, v61, v64, (_DWORD)v65, 16, (__int64)L"ghsemHmgr");
          v66 = (__int64 *)(v63 + 192);
          if ( (__int64 *)*v66 == v66 || (v67 = *v66, *(_DWORD *)(*v66 + 16) == 9) )
          {
            v67 = PALLOCMEM2(0x60uLL);
            if ( !v67 )
            {
              GreReleaseHmgrSemaphore();
              return v6;
            }
            v68 = *v66;
            *(_QWORD *)v67 = *v66;
            *(_QWORD *)(v67 + 8) = v66;
            if ( *(__int64 **)(v68 + 8) != v66 )
              __fastfail(3u);
            *(_QWORD *)(v68 + 8) = v67;
            *v66 = v67;
            *(_DWORD *)(v67 + 16) = 0;
          }
          *(_QWORD *)(v67 + 8LL * (unsigned int)(*(_DWORD *)(v67 + 16))++ + 24) = v7;
          *(_QWORD *)(v63 + 40) = v7;
          if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
            Template_pz(v62, &LockRelease, v64, ghsemHmgr);
          if ( ghsemHmgr )
          {
            ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
            PsLeavePriorityRegion(v69);
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
