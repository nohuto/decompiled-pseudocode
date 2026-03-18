/*
 * XREFs of PspInsertThread @ 0x1403EF330
 * Callers:
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeReadyThread @ 0x1400287E0 (KeReadyThread.c)
 *     KeStartThread @ 0x140028824 (KeStartThread.c)
 *     KeForceResumeThread @ 0x140028C4C (KeForceResumeThread.c)
 *     MmDeleteKernelStack @ 0x14002CF40 (MmDeleteKernelStack.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeSuspendThread @ 0x140030E48 (KeSuspendThread.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ObReferenceObjectExWithTag @ 0x1400D5D80 (ObReferenceObjectExWithTag.c)
 *     KeRaiseUserException @ 0x1401C4670 (KeRaiseUserException.c)
 *     PspCreateObjectHandle @ 0x1403EFA94 (PspCreateObjectHandle.c)
 *     PspTerminateThreadByPointer @ 0x1403F2F24 (PspTerminateThreadByPointer.c)
 *     PspCallProcessNotifyRoutines @ 0x1403F6564 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1403F6880 (PspCallThreadNotifyRoutines.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeDeleteAccessState @ 0x140435480 (SeDeleteAccessState.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     SeCreateAccessStateEx @ 0x14046E4F4 (SeCreateAccessStateEx.c)
 *     MmDeleteTeb @ 0x1404A92F8 (MmDeleteTeb.c)
 *     PspDeleteUserStack @ 0x1404C073C (PspDeleteUserStack.c)
 *     EtwTraceThread @ 0x140502700 (EtwTraceThread.c)
 *     KeSetUmsThreadKernelLock @ 0x14061B314 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x14061B3D4 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x14061B43C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x140640F38 (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        char *Object,
        ULONG_PTR a2,
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
  _DWORD *v11; // r14
  char v14; // di
  int *v15; // r13
  unsigned __int8 *v16; // r12
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rbx
  int SecureThread; // ecx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  char *v25; // rcx
  _QWORD *v26; // rdx
  _DWORD *v27; // rcx
  char v28; // r12
  int v29; // edx
  signed int AccessState; // r14d
  __int64 v31; // rdx
  __int64 v32; // r8
  _BYTE *v33; // r12
  int v34; // ebx
  unsigned __int8 *v35; // rdi
  __int64 v36; // rdx
  KPROCESSOR_MODE v37; // cl
  __int64 v39; // rdx
  _QWORD *v40; // [rsp+48h] [rbp-70h]
  __int64 v41; // [rsp+50h] [rbp-68h]
  struct _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v11 = a4;
  v14 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v41 = *((_QWORD *)Object + 30);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v40 = (_QWORD *)*((_QWORD *)a7 + 3);
    v17 = *((_DWORD *)a7 + 1);
    if ( (v17 & 0x4000) != 0 )
      v15 = (int *)(a7 + 244);
    if ( (v17 & 0x1000) != 0 )
      v16 = a7 + 312;
  }
  else
  {
    v40 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
  {
    v18 = KeAbPreAcquire(a2 + 728, 0LL, 0LL);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 728), v18, a2 + 728);
    v11 = a4;
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
  }
  v20 = *(_QWORD *)(a2 + 944);
  if ( v20 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v20 + 56), 1u);
    if ( v16 )
    {
      if ( (*(_DWORD *)(v20 + 856) & 0x10) != 0 )
      {
        v39 = *(_QWORD *)(v20 + 8LL * *((unsigned __int16 *)v16 + 4) + 624);
        if ( !v39 || (v39 & *(_QWORD *)v16) != *(_QWORD *)v16 )
          v14 = 2;
      }
    }
  }
  if ( (v14 & 2) != 0
    || (*(_DWORD *)(a2 + 772) & 0x4000008) != 0x4000000
    || (*(_DWORD *)(a2 + 772) & 0x40000000) != 0
    && !_bittest((const signed __int32 *)Object + 29, 0xAu)
    && (*v11 & 2) == 0 )
  {
    goto LABEL_81;
  }
  SecureThread = 0;
  if ( *(_QWORD *)(a2 + 720) )
    SecureThread = PspCreateSecureThread(Object);
  if ( SecureThread < 0 )
  {
LABEL_81:
    if ( v20 )
      ExReleaseResourceLite((PERESOURCE)(v20 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 213, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 213);
    KeAbPostRelease((ULONG_PTR)(Object + 1704));
    MmDeleteKernelStack(*((_QWORD *)Object + 7), 4u);
    *((_QWORD *)Object + 5) = 0LL;
    if ( a6 )
    {
      if ( v41 )
        MmDeleteTeb(a2, v41);
      if ( *a6 )
        PspDeleteUserStack(a2, a3, a6);
    }
    if ( (*(_DWORD *)(a2 + 772) & 0x40000008) != 0 )
      return 3221225738LL;
    else
      return 3221225473LL;
  }
  KeStartThread((__int64)Object, (__int64 *)v16, v15);
  if ( v20 )
    ExReleaseResourceLite((PERESOURCE)(v20 + 56));
  if ( (*v11 & 2) != 0 && (*(_DWORD *)(a2 + 772) & 0x40000000) != 0 )
    *((_DWORD *)Object + 432) |= 0x20u;
  v22 = (((*(_DWORD *)(a2 + 772) >> 27) & 7) << 9) | *((_DWORD *)Object + 431) & 0xFFFFF1FF;
  *((_DWORD *)Object + 431) = v22;
  *((_DWORD *)Object + 431) = (((*(_DWORD *)(a2 + 768) >> 12) & 7) << 12) | v22 & 0xFFFF8FFF;
  if ( ++*(_DWORD *)(a2 + 1176) > *(_DWORD *)(a2 + 1688) )
    *(_DWORD *)(a2 + 1688) = *(_DWORD *)(a2 + 1176);
  if ( *(_DWORD *)(a2 + 1176) == 1 )
  {
    v14 |= 1u;
  }
  else if ( *(_DWORD *)(a2 + 1176) == 2 && (*(_DWORD *)(a2 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 768), 0xFu);
  }
  v23 = KeAbPreAcquire(a2 + 1696, 0LL, 0LL);
  v24 = v23;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 1696), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1696), v23, a2 + 1696);
  if ( v24 )
    *(_BYTE *)(v24 + 26) |= 1u;
  v25 = Object + 1680;
  v26 = *(_QWORD **)(a2 + 1168);
  *((_QWORD *)Object + 210) = a2 + 1160;
  *((_QWORD *)Object + 211) = v26;
  if ( *v26 != a2 + 1160 )
    __fastfail(3u);
  *v26 = v25;
  *(_QWORD *)(a2 + 1168) = v25;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1696), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1696));
  KeAbPostRelease(a2 + 1696);
  if ( *(_QWORD *)(a2 + 712) )
    _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
  KeAbPostRelease(a2 + 728);
  ObReferenceObjectExWithTag((__int64)Object, 2);
  *((_DWORD *)Object + 470) = 1;
  v27 = a4;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread((__int64)Object);
    if ( (*((_DWORD *)Object + 431) & 1) != 0 )
      KeForceResumeThread((__int64)Object);
    v27 = a4;
  }
  v28 = 0;
  if ( !*(_BYTE *)(a9 + 388) || (*v27 & 0x10) != 0 )
  {
    v29 = a2;
    v28 = 1;
  }
  else
  {
    v29 = (int)Process;
  }
  AccessState = SeCreateAccessStateEx(0, v29, a9, (int)a9 + 160, a5, (__int64)PsThreadType + 76);
  if ( AccessState < 0 )
  {
    ObfDereferenceObject(Object);
  }
  else
  {
    AccessState = ObInsertObjectEx(Object, v28, 0LL, 0LL);
    if ( AccessState >= 0 )
    {
      ObfDereferenceObject(Object);
      if ( v40 )
        *v40 = v41;
      if ( a11 )
        *a11 = *(_OWORD *)(Object + 1576);
    }
    if ( AccessState >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)Object + 431, 2u);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 213, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Object + 213);
      KeAbPostRelease((ULONG_PTR)(Object + 1704));
      v33 = a6;
      goto LABEL_54;
    }
    SeDeleteAccessState(a9);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 213, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 213);
  KeAbPostRelease((ULONG_PTR)(Object + 1704));
  if ( (*a4 & 1) != 0 )
    KeForceResumeThread((__int64)Object);
  v33 = a6;
  if ( a6 && *a6 )
    PspDeleteUserStack(a2, a3, a6);
LABEL_54:
  v34 = 0;
  if ( (v14 & 1) != 0 && ((*(_DWORD *)(a2 + 1724) & 1) == 0 || *(_QWORD *)(a2 + 1792)) )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(a2);
    LOBYTE(v32) = 1;
    v35 = a7;
    v34 = PspCallProcessNotifyRoutines(a2, a7, v32);
  }
  else
  {
    v35 = a7;
  }
  if ( (*(_DWORD *)(a2 + 1724) & 1) == 0 )
  {
    if ( (PerfGlobalGroupMask & 2) != 0 )
    {
      LOBYTE(v32) = 1;
      EtwTraceThread(Object, a3, v32);
    }
    LOBYTE(v31) = 1;
    PspCallThreadNotifyRoutines(Object, v31, 0LL);
  }
  if ( AccessState < 0 )
    goto LABEL_70;
  if ( v34 < 0 )
    AccessState = v34;
  else
    AccessState = PspCreateObjectHandle(Object, a9, PsThreadType);
  SeDeleteAccessState(a9);
  if ( AccessState >= 0 )
  {
    if ( v35 )
    {
      v36 = *((_QWORD *)v35 + 47);
      if ( v36 )
        AccessState = PspAssignProcessToJobList(a2, v36, *((unsigned int *)v35 + 97), *v35);
    }
    if ( AccessState >= 0 )
      *a10 = *(_QWORD *)(a9 + 392);
    v37 = 1;
    if ( AccessState >= 0 )
      goto LABEL_70;
    if ( (*(_DWORD *)(a9 + 384) & 0x200) != 0 || Process == PsInitialSystemProcess )
      v37 = 0;
    ObCloseHandle(*(HANDLE *)(a9 + 392), v37);
    if ( v33 && (*v33 & 1) != 0 )
      KeRaiseUserException(AccessState);
  }
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)Object + 431, 0);
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)Object);
  }
  else
  {
    PspTerminateThreadByPointer((ULONG_PTR)Object);
  }
LABEL_70:
  if ( (Object[3] & 0x40) != 0 && AccessState < 0 )
  {
    KeSetUmsThreadKernelLock(**((_QWORD **)Object + 62), 0LL);
    KeUpdateUmsThreadState(**((_QWORD **)Object + 62), 2LL, 0LL);
    ObfDereferenceObject(*(PVOID *)(*((_QWORD *)Object + 62) + 16LL));
    KeUnInitializeUmsThread(Object);
  }
  KeReadyThread((__int64)Object);
  return (unsigned int)AccessState;
}
