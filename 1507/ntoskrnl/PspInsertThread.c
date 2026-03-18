/*
 * XREFs of PspInsertThread @ 0x140423090
 * Callers:
 *     PspCreateThread @ 0x140450CE0 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1406C5D94 (PspCreatePicoThread.c)
 * Callees:
 *     KeSuspendThread @ 0x14000C978 (KeSuspendThread.c)
 *     KeForceResumeThread @ 0x14000E584 (KeForceResumeThread.c)
 *     KeStartThread @ 0x14000F67C (KeStartThread.c)
 *     KeReadyThread @ 0x14000FB8C (KeReadyThread.c)
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     ExGetCallBackBlockRoutine @ 0x1400101E0 (ExGetCallBackBlockRoutine.c)
 *     ExGetCallBackBlockContext @ 0x1400101E8 (ExGetCallBackBlockContext.c)
 *     MmDeleteKernelStack @ 0x140022520 (MmDeleteKernelStack.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 *     KeRaiseUserException @ 0x1402008EC (KeRaiseUserException.c)
 *     PspTerminateThreadByPointer @ 0x1404205B0 (PspTerminateThreadByPointer.c)
 *     PspCreateObjectHandle @ 0x140421204 (PspCreateObjectHandle.c)
 *     PsReferenceProcessFilePointer @ 0x1404676D0 (PsReferenceProcessFilePointer.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     EtwTraceThread @ 0x14053C038 (EtwTraceThread.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     SeCreateAccessStateEx @ 0x14053E638 (SeCreateAccessStateEx.c)
 *     PsTerminateProcess @ 0x1405579A8 (PsTerminateProcess.c)
 *     KeSetUmsThreadKernelLock @ 0x140699E24 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x140699F10 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140699F78 (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x1406C34A8 (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        unsigned __int8 *a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        _OWORD *a11)
{
  __int64 v11; // r8
  ULONG_PTR v12; // rsi
  char v13; // di
  int *v14; // r15
  unsigned __int8 *v15; // r14
  _QWORD *v16; // r12
  int v17; // eax
  unsigned __int64 *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rbx
  _DWORD *v23; // rsi
  int SecureThread; // ecx
  __int64 v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rbx
  ULONG_PTR v30; // rcx
  ULONG_PTR *v31; // rdx
  _DWORD *v32; // rdx
  __int64 v33; // rdx
  char v34; // r14
  int v35; // edx
  signed int AccessState; // r15d
  __int64 v37; // r14
  __int64 v38; // r12
  __int64 v39; // r8
  __int64 v40; // rdx
  signed __int64 *v41; // rbx
  __int64 v42; // rdi
  struct _EX_RUNDOWN_REF *v43; // rax
  struct _EX_RUNDOWN_REF *v44; // rsi
  KPROCESSOR_MODE v45; // cl
  __int64 v47; // rcx
  void (__fastcall *v48)(_QWORD, _QWORD, __int64); // rax
  __int64 v49; // r8
  unsigned __int8 *v50; // r12
  unsigned __int8 *v51; // rax
  __int64 v52; // rax
  __int64 *v53; // r14
  __int64 v54; // rbx
  struct _EX_RUNDOWN_REF *v55; // rax
  struct _EX_RUNDOWN_REF *v56; // rdi
  __int64 v57; // rcx
  void (__fastcall *v58)(_QWORD, _QWORD, __int64); // rax
  __int64 v59; // r8
  void (__fastcall *v60)(__int64, _QWORD, __int64 *); // rax
  ULONG_PTR v61; // rdi
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdx
  char v67; // [rsp+48h] [rbp-1D0h]
  bool v68; // [rsp+49h] [rbp-1CFh]
  unsigned int v69; // [rsp+4Ch] [rbp-1CCh]
  _QWORD v72[2]; // [rsp+98h] [rbp-180h] BYREF
  void *v73; // [rsp+A8h] [rbp-170h]
  _QWORD *v74; // [rsp+B0h] [rbp-168h]
  struct _KPROCESS *Process; // [rsp+B8h] [rbp-160h]
  _QWORD *v76; // [rsp+C0h] [rbp-158h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp-150h] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp-148h] BYREF
  ULONG_PTR v79; // [rsp+D8h] [rbp-140h] BYREF
  ULONG_PTR v80; // [rsp+E0h] [rbp-138h] BYREF
  ULONG_PTR v81; // [rsp+E8h] [rbp-130h] BYREF
  PVOID v82; // [rsp+F0h] [rbp-128h] BYREF
  PVOID v83[2]; // [rsp+100h] [rbp-118h] BYREF
  PVOID v84; // [rsp+110h] [rbp-108h] BYREF
  __int64 v85; // [rsp+120h] [rbp-F8h] BYREF
  int v86; // [rsp+128h] [rbp-F0h]
  __int64 v87; // [rsp+130h] [rbp-E8h]
  __int128 v88; // [rsp+138h] [rbp-E0h]
  char *v89; // [rsp+148h] [rbp-D0h]
  unsigned __int8 *v90; // [rsp+150h] [rbp-C8h]
  __int64 v91; // [rsp+158h] [rbp-C0h]
  int v92; // [rsp+160h] [rbp-B8h]
  _BYTE v93[48]; // [rsp+178h] [rbp-A0h] BYREF
  _BYTE v94[48]; // [rsp+1A8h] [rbp-70h] BYREF

  v11 = a2;
  v12 = a1;
  v72[1] = a3;
  v76 = a10;
  v13 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v73 = *(void **)(a1 + 240);
  v83[1] = v73;
  v14 = 0LL;
  v15 = 0LL;
  if ( a7 )
  {
    v16 = (_QWORD *)*((_QWORD *)a7 + 3);
    v74 = v16;
    v17 = *((_DWORD *)a7 + 1);
    if ( (v17 & 0x4000) != 0 )
      v14 = (int *)(a7 + 244);
    if ( (v17 & 0x1000) != 0 )
      v15 = a7 + 312;
  }
  else
  {
    v16 = 0LL;
    v74 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
  {
    v18 = (unsigned __int64 *)(a2 + 728);
    v19 = KeAbPreAcquire(a2 + 728, 0LL, 0LL, (__int64)a4);
    v21 = v19;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx(v18, v19, (ULONG_PTR)v18, v20);
    v12 = a1;
    v11 = a2;
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
  }
  v22 = *(_QWORD *)(v11 + 944);
  if ( v22 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v22 + 56), 1u);
    if ( v15 )
    {
      if ( (*(_DWORD *)(v22 + 856) & 0x10) != 0 )
      {
        v63 = *(_QWORD *)(v22 + 8LL * *((unsigned __int16 *)v15 + 4) + 624);
        if ( !v63 || (v63 & *(_QWORD *)v15) != *(_QWORD *)v15 )
          v13 = 2;
      }
    }
    v11 = a2;
  }
  if ( (v13 & 2) != 0 || (*(_DWORD *)(v11 + 772) & 0x4000008) != 0x4000000 )
    goto LABEL_113;
  if ( (*(_DWORD *)(v11 + 772) & 0x40000000) != 0 )
  {
    v62 = *(_DWORD *)(v12 + 116);
    v23 = a4;
    if ( (v62 & 0x400) == 0 && (*a4 & 2) == 0 )
      goto LABEL_113;
  }
  else
  {
    v23 = a4;
  }
  SecureThread = 0;
  if ( *(_QWORD *)(v11 + 720) )
  {
    SecureThread = PspCreateSecureThread((PVOID)a1);
    v11 = a2;
  }
  if ( SecureThread >= 0 )
  {
    KeStartThread(a1, (__int64 *)v15, v14);
    if ( v22 )
      ExReleaseResourceLite((PERESOURCE)(v22 + 56));
    if ( (*v23 & 2) != 0 && (*(_DWORD *)(a2 + 772) & 0x40000000) != 0 )
      *(_DWORD *)(a1 + 1728) |= 0x10u;
    v26 = (((*(_DWORD *)(a2 + 772) >> 27) & 7) << 9) | *(_DWORD *)(a1 + 1724) & 0xFFFFF1FF;
    *(_DWORD *)(a1 + 1724) = v26;
    *(_DWORD *)(a1 + 1724) = (((*(_DWORD *)(a2 + 768) >> 12) & 7) << 12) | v26 & 0xFFFF8FFF;
    if ( ++*(_DWORD *)(a2 + 1168) > *(_DWORD *)(a2 + 1680) )
      *(_DWORD *)(a2 + 1680) = *(_DWORD *)(a2 + 1168);
    if ( *(_DWORD *)(a2 + 1168) == 1 )
    {
      v13 |= 1u;
    }
    else if ( *(_DWORD *)(a2 + 1168) == 2 && (*(_DWORD *)(a2 + 768) & 0x8000) == 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 768), 0xFu);
    }
    v27 = KeAbPreAcquire(a2 + 1688, 0LL, 0LL, v25);
    v29 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 1688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1688), v27, a2 + 1688, v28);
    if ( v29 )
      *(_BYTE *)(v29 + 26) |= 1u;
    v30 = a1 + 1680;
    v31 = *(ULONG_PTR **)(a2 + 1160);
    *(_QWORD *)(a1 + 1680) = a2 + 1152;
    *(_QWORD *)(a1 + 1688) = v31;
    if ( *v31 != a2 + 1152 )
      __fastfail(3u);
    *v31 = v30;
    *(_QWORD *)(a2 + 1160) = v30;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1688));
    KeAbPostRelease(a2 + 1688);
    if ( *(_QWORD *)(a2 + 712) )
      _interlockedbittestandset((volatile signed __int32 *)a1, 0x19u);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
    ObReferenceObjectExWithTag(a1, 2);
    *(_DWORD *)(a1 + 1880) = 1;
    v32 = a4;
    if ( (*a4 & 1) != 0 )
    {
      KeSuspendThread(a1);
      if ( (*(_DWORD *)(a1 + 1724) & 1) != 0 )
        KeForceResumeThread(a1, v33, 1LL);
      v32 = a4;
    }
    v34 = 0;
    if ( !*(_BYTE *)(a9 + 388) || (*v32 & 0x10) != 0 )
    {
      v35 = a2;
      v34 = 1;
    }
    else
    {
      v35 = (int)Process;
    }
    AccessState = SeCreateAccessStateEx(0, v35, a9, (int)a9 + 160, a5, (__int64)PsThreadType + 76);
    if ( AccessState < 0 )
    {
      ObfDereferenceObject((PVOID)a1);
      v37 = a2;
      v38 = a3;
    }
    else
    {
      AccessState = ObInsertObjectEx((PVOID)a1, v34, 0LL, 0LL);
      if ( AccessState < 0 )
        goto LABEL_112;
      ObfDereferenceObject((PVOID)a1);
      if ( v16 )
        *v16 = v73;
      if ( a11 )
      {
        *a11 = *(_OWORD *)(a1 + 1576);
        v37 = a2;
        v38 = a3;
      }
      else
      {
LABEL_112:
        v37 = a2;
        v38 = a3;
      }
      if ( AccessState >= 0 )
      {
        _InterlockedOr((volatile signed __int32 *)(a1 + 1724), 2u);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1704));
        KeAbPostRelease(a1 + 1704);
        goto LABEL_54;
      }
      SeDeleteAccessState(a9);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1704));
    KeAbPostRelease(a1 + 1704);
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread(a1, v64, v39);
    if ( a6 && *a6 )
    {
      KiStackAttachProcess((_KPROCESS *)v37, 0, (__int64)v94);
      if ( (*a6 & 2) != 0 )
      {
        v84 = *(PVOID *)(v38 + 32);
        v79 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v84, &v79, 0x8000u);
      }
      if ( (*a6 & 4) != 0 )
      {
        v83[0] = *(PVOID *)(v38 + 56);
        v81 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v83, &v81, 0x8000u);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v94, 0);
    }
LABEL_54:
    v40 = 0LL;
    v69 = 0;
    if ( (*(_DWORD *)(v37 + 1716) & 1) == 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        if ( (PerfGlobalGroupMask & 1) != 0 )
          EtwTraceProcess((PEPROCESS)v37);
        v69 = 0;
        v68 = (PspNotifyEnableMask & 4) != 0;
        if ( (PspNotifyEnableMask & 2) != 0 || (PspNotifyEnableMask & 4) != 0 )
        {
          v50 = 0LL;
          v72[0] = 0LL;
          v67 = 0;
          if ( (PspNotifyEnableMask & 4) != 0 )
          {
            v85 = 72LL;
            v86 = 0;
            v87 = *(_QWORD *)(v37 + 992);
            v88 = *(_OWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
            v92 = 0;
            if ( a7 && (v50 = (unsigned __int8 *)*((_QWORD *)a7 + 21)) != 0LL )
            {
              v72[0] = *((_QWORD *)a7 + 21);
            }
            else
            {
              v67 = 1;
              PsReferenceProcessFilePointer(v37, v72);
              v50 = (unsigned __int8 *)v72[0];
            }
            v89 = (char *)v50;
            if ( a7 && (*((_DWORD *)a7 + 1) & 0x20) != 0 )
            {
              v51 = a7 + 224;
              v86 |= 1u;
            }
            else
            {
              v51 = v50 + 88;
            }
            v90 = v51;
            if ( a7 && (v52 = *((_QWORD *)a7 + 25)) != 0 )
              v91 = v52 + 112;
            else
              v91 = 0LL;
            v53 = &v85;
          }
          else
          {
            v53 = 0LL;
          }
          v54 = 0LL;
          while ( 1 )
          {
            v55 = ExReferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v54);
            v56 = v55;
            if ( v55 )
            {
              if ( ExGetCallBackBlockContext((__int64)v55) )
              {
                if ( v68 )
                {
                  v60 = (void (__fastcall *)(__int64, _QWORD, __int64 *))ExGetCallBackBlockRoutine(v57);
                  v60(a2, *(_QWORD *)(a2 + 744), v53);
                }
              }
              else
              {
                v58 = (void (__fastcall *)(_QWORD, _QWORD, __int64))ExGetCallBackBlockRoutine(v57);
                LOBYTE(v59) = 1;
                v58(*(_QWORD *)(a2 + 992), *(_QWORD *)(a2 + 744), v59);
              }
              ExDereferenceCallBackBlock((signed __int64 *)&PspCreateProcessNotifyRoutine.Ptr + v54, v56);
              if ( v53 )
              {
                if ( *((int *)v53 + 16) < 0 )
                  break;
              }
            }
            v54 = (unsigned int)(v54 + 1);
            if ( (unsigned int)v54 >= 0x40 )
            {
              v37 = a2;
              goto LABEL_102;
            }
          }
          v65 = *((unsigned int *)v53 + 16);
          v69 = *((_DWORD *)v53 + 16);
          v37 = a2;
          PsTerminateProcess(a2, v65);
LABEL_102:
          if ( v67 )
            ObfDereferenceObject(v50);
        }
      }
      if ( (PerfGlobalGroupMask & 2) != 0 )
      {
        LOBYTE(v39) = 1;
        EtwTraceThread(a1, a3, v39);
      }
      if ( (PspNotifyEnableMask & 8) != 0 )
      {
        v41 = (signed __int64 *)&PspCreateThreadNotifyRoutine;
        v42 = 64LL;
        do
        {
          v43 = ExReferenceCallBackBlock(v41);
          v44 = v43;
          if ( v43 )
          {
            if ( !ExGetCallBackBlockContext((__int64)v43) )
            {
              v48 = (void (__fastcall *)(_QWORD, _QWORD, __int64))ExGetCallBackBlockRoutine(v47);
              LOBYTE(v49) = 1;
              v48(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 744LL), *(_QWORD *)(a1 + 1584), v49);
            }
            ExDereferenceCallBackBlock(v41, v44);
          }
          ++v41;
          --v42;
        }
        while ( v42 );
      }
      v40 = v69;
    }
    if ( AccessState < 0 )
      goto LABEL_73;
    if ( (int)v40 < 0 )
      AccessState = v40;
    else
      AccessState = PspCreateObjectHandle((void *)a1, a9, (struct _OBJECT_TYPE *)PsThreadType);
    SeDeleteAccessState(a9);
    if ( AccessState >= 0 )
    {
      if ( a7 )
      {
        v40 = *((_QWORD *)a7 + 47);
        if ( v40 )
          AccessState = PspAssignProcessToJobList(v37, v40, *((unsigned int *)a7 + 96), *a7);
      }
      if ( AccessState >= 0 )
        *v76 = *(_QWORD *)(a9 + 392);
      v45 = 1;
      if ( AccessState >= 0 )
        goto LABEL_73;
      if ( (*(_DWORD *)(a9 + 384) & 0x200) != 0 || Process == PsInitialSystemProcess )
        v45 = 0;
      ObCloseHandle(*(HANDLE *)(a9 + 392), v45);
      if ( a6 && (*a6 & 1) != 0 )
        KeRaiseUserException(AccessState);
    }
    if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 1724), 0);
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread(a1, v40, v39);
    }
    else
    {
      PspTerminateThreadByPointer(a1, AccessState, 0);
    }
LABEL_73:
    if ( (*(_BYTE *)(a1 + 3) & 0x40) != 0 && AccessState < 0 )
    {
      KeSetUmsThreadKernelLock(**(_QWORD **)(a1 + 496), 0LL);
      KeUpdateUmsThreadState(**(_QWORD **)(a1 + 496), 2LL, 0LL);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(a1 + 496) + 16LL));
      KeUnInitializeUmsThread(a1);
    }
    KeReadyThread(a1, v40, v39);
    return (unsigned int)AccessState;
  }
LABEL_113:
  if ( v22 )
  {
    ExReleaseResourceLite((PERESOURCE)(v22 + 56));
    v11 = a2;
  }
  v61 = v11 + 728;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 728));
  KeAbPostRelease(v61);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1704));
  KeAbPostRelease(a1 + 1704);
  MmDeleteKernelStack(*(_QWORD *)(a1 + 56), 4uLL);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( a6 )
  {
    if ( v73 )
      MmDeleteTeb(a2, v73);
    if ( *a6 )
    {
      KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v93);
      if ( (*a6 & 2) != 0 )
      {
        BaseAddress = *(PVOID *)(a3 + 32);
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      }
      if ( (*a6 & 4) != 0 )
      {
        v82 = *(PVOID *)(a3 + 56);
        v80 = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v82, &v80, 0x8000u);
      }
      KiUnstackDetachProcess((struct _KTHREAD *)v93, 0);
    }
  }
  if ( (*(_DWORD *)(a2 + 772) & 0x40000008) != 0 )
    return 3221225738LL;
  else
    return 3221225473LL;
}
