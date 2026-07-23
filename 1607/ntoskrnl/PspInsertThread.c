/*
 * XREFs of PspInsertThread @ 0x1404F9B40
 * Callers:
 *     PspCreateThread @ 0x140457BE8 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140459A10 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x140681894 (PspCreatePicoThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ObReferenceObjectExWithTag @ 0x140095D40 (ObReferenceObjectExWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeSuspendThread @ 0x1400C7748 (KeSuspendThread.c)
 *     KeForceResumeThread @ 0x1400C9214 (KeForceResumeThread.c)
 *     MmDeleteKernelStack @ 0x1400EF9D0 (MmDeleteKernelStack.c)
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     KeReadyThread @ 0x1400F0DBC (KeReadyThread.c)
 *     KeRaiseUserException @ 0x1401D3654 (KeRaiseUserException.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     PspCallProcessNotifyRoutines @ 0x140427CF4 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140427FE0 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x1404597E4 (EtwTraceThread.c)
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     MmDeleteTeb @ 0x1404B2E50 (MmDeleteTeb.c)
 *     SeCreateAccessStateEx @ 0x1404B6E3C (SeCreateAccessStateEx.c)
 *     PspDeleteUserStack @ 0x1404CF9AC (PspDeleteUserStack.c)
 *     PspTerminateThreadByPointer @ 0x1404EC9C0 (PspTerminateThreadByPointer.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     PspCreateObjectHandle @ 0x1404FA2C4 (PspCreateObjectHandle.c)
 *     KeSetUmsThreadKernelLock @ 0x140650708 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1406507C8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14067F418 (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        char *Object,
        ULONG_PTR a2,
        __int64 a3,
        _DWORD *a4,
        ACCESS_MASK a5,
        _BYTE *a6,
        unsigned __int8 *a7,
        __int64 a8,
        struct _SECURITY_SUBJECT_CONTEXT *AccessState,
        _QWORD *a10,
        _OWORD *a11)
{
  _DWORD *v11; // r14
  char v14; // di
  unsigned int *v15; // r13
  unsigned __int8 *v16; // r12
  int v17; // eax
  _BYTE *v18; // rax
  _BYTE *v19; // rbx
  __int64 v20; // rbx
  int SecureThread; // ecx
  unsigned int v22; // eax
  _BYTE *v23; // rax
  _BYTE *v24; // rbx
  _QWORD *v25; // rcx
  _QWORD *v26; // rdx
  _DWORD *v27; // rcx
  char v28; // r12
  struct _KPROCESS *v29; // rdx
  signed int inserted; // r14d
  __int64 v31; // rdx
  _SINGLE_LIST_ENTRY *v32; // r8
  __int64 v33; // r9
  _BYTE *v34; // r12
  int v35; // ebx
  unsigned __int8 *v36; // rdi
  KPROCESSOR_MODE v37; // cl
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 *v42; // [rsp+48h] [rbp-70h]
  __int64 v43; // [rsp+50h] [rbp-68h]
  struct _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v11 = a4;
  v14 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v43 = *((_QWORD *)Object + 30);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v42 = (__int64 *)*((_QWORD *)a7 + 3);
    v17 = *((_DWORD *)a7 + 1);
    if ( (v17 & 0x4000) != 0 )
      v15 = (unsigned int *)(a7 + 244);
    if ( (v17 & 0x1000) != 0 )
      v16 = a7 + 312;
  }
  else
  {
    v42 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
  {
    v18 = (_BYTE *)KeAbPreAcquire(a2 + 728, 0LL, 0);
    v19 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 728), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 728), v18, a2 + 728);
    v11 = a4;
    if ( v19 )
      v19[26] |= 1u;
  }
  v20 = *(_QWORD *)(a2 + 944);
  if ( v20 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v20 + 56), 1u);
    if ( v16 )
    {
      if ( (*(_DWORD *)(v20 + 848) & 0x10) != 0 )
      {
        v41 = *(_QWORD *)(v20 + 8LL * *((unsigned __int16 *)v16 + 4) + 624);
        if ( !v41 || (v41 & *(_QWORD *)v16) != *(_QWORD *)v16 )
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
    goto LABEL_82;
  }
  SecureThread = 0;
  if ( *(_QWORD *)(a2 + 720) )
    SecureThread = PspCreateSecureThread(Object);
  if ( SecureThread < 0 )
  {
LABEL_82:
    if ( v20 )
      ExReleaseResourceLite((PERESOURCE)(v20 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
    KeAbPostRelease(a2 + 728);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)Object + 214);
    KeAbPostRelease((ULONG_PTR)(Object + 1712));
    MmDeleteKernelStack(*((_QWORD *)Object + 7), 4u, v39, v40);
    *((_QWORD *)Object + 5) = 0LL;
    if ( a6 )
    {
      if ( v43 )
        MmDeleteTeb((_KPROCESS *)a2, v43);
      if ( *a6 )
        PspDeleteUserStack((_KPROCESS *)a2, a3, a6);
    }
    if ( (*(_DWORD *)(a2 + 772) & 0x40000008) != 0 )
      return 3221225738LL;
    else
      return 3221225473LL;
  }
  KeStartThread((__int64)Object, (unsigned __int64 *)v16, v15);
  if ( v20 )
    ExReleaseResourceLite((PERESOURCE)(v20 + 56));
  if ( (*v11 & 2) != 0 && (*(_DWORD *)(a2 + 772) & 0x40000000) != 0 )
    *((_DWORD *)Object + 433) |= 0x40u;
  v22 = (((*(_DWORD *)(a2 + 772) >> 27) & 7) << 9) | *((_DWORD *)Object + 432) & 0xFFFFF1FF;
  *((_DWORD *)Object + 432) = v22;
  *((_DWORD *)Object + 432) = (((*(_DWORD *)(a2 + 768) >> 12) & 7) << 12) | v22 & 0xFFFF8FFF;
  if ( ++*(_DWORD *)(a2 + 1176) > *(_DWORD *)(a2 + 1704) )
    *(_DWORD *)(a2 + 1704) = *(_DWORD *)(a2 + 1176);
  if ( *(_DWORD *)(a2 + 1176) == 1 )
  {
    v14 |= 1u;
  }
  else if ( *(_DWORD *)(a2 + 1176) == 2 && (*(_DWORD *)(a2 + 768) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a2 + 768), 0xFu);
  }
  v23 = (_BYTE *)KeAbPreAcquire(a2 + 1712, 0LL, 0);
  v24 = v23;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 1712), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 1712), v23, a2 + 1712);
  if ( v24 )
    v24[26] |= 1u;
  v25 = Object + 1688;
  v26 = *(_QWORD **)(a2 + 1168);
  if ( *v26 != a2 + 1160 )
    __fastfail(3u);
  *v25 = a2 + 1160;
  *((_QWORD *)Object + 212) = v26;
  *v26 = v25;
  *(_QWORD *)(a2 + 1168) = v25;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1712), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1712));
  KeAbPostRelease(a2 + 1712);
  if ( *(_QWORD *)(a2 + 712) )
    _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 728), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 728));
  KeAbPostRelease(a2 + 728);
  ObReferenceObjectExWithTag((__int64)Object, 2);
  *((_DWORD *)Object + 472) = 1;
  v27 = a4;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread((__int64)Object);
    if ( (*((_DWORD *)Object + 432) & 1) != 0 )
      KeForceResumeThread((__int64)Object);
    v27 = a4;
  }
  v28 = 0;
  if ( !BYTE4(AccessState[12].ClientToken) || (*v27 & 0x10) != 0 )
  {
    v29 = (struct _KPROCESS *)a2;
    v28 = 1;
  }
  else
  {
    v29 = Process;
  }
  inserted = SeCreateAccessStateEx(
               0LL,
               v29,
               AccessState,
               &AccessState[5].ClientToken,
               a5,
               (GENERIC_MAPPING *)((char *)PsThreadType + 76));
  if ( inserted < 0 )
  {
    ObfDereferenceObject(Object);
  }
  else
  {
    inserted = ObInsertObjectEx(Object, AccessState, a5, 0, v28, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      ObfDereferenceObject(Object);
      if ( v42 )
        *v42 = v43;
      if ( a11 )
        *a11 = *((_OWORD *)Object + 99);
    }
    if ( inserted >= 0 )
    {
      _InterlockedOr((volatile signed __int32 *)Object + 432, 2u);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)Object + 214);
      KeAbPostRelease((ULONG_PTR)(Object + 1712));
      v34 = a6;
      goto LABEL_53;
    }
    SeDeleteAccessState(AccessState);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 214);
  KeAbPostRelease((ULONG_PTR)(Object + 1712));
  if ( (*a4 & 1) != 0 )
    KeForceResumeThread((__int64)Object);
  v34 = a6;
  if ( a6 && *a6 )
    PspDeleteUserStack((_KPROCESS *)a2, a3, a6);
LABEL_53:
  v35 = 0;
  if ( (v14 & 1) == 0 )
    goto LABEL_54;
  if ( (PerfGlobalGroupMask & 1) != 0 )
    EtwTraceProcess(a2, 769);
  if ( (*(_DWORD *)(a2 + 1740) & 1) == 0 || *(_QWORD *)(a2 + 1808) )
  {
    v36 = a7;
    v35 = PspCallProcessNotifyRoutines((_QWORD *)a2, (__int64)a7, 1);
  }
  else
  {
LABEL_54:
    v36 = a7;
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v32) = 1;
    EtwTraceThread((__int64)Object, a3, (__int64)v32);
  }
  if ( (*(_DWORD *)(a2 + 1740) & 1) == 0 )
    PspCallThreadNotifyRoutines((__int64)Object, 1u, 0);
  if ( inserted < 0 )
    goto LABEL_69;
  if ( v35 < 0 )
    inserted = v35;
  else
    inserted = PspCreateObjectHandle(Object, AccessState, PsThreadType);
  SeDeleteAccessState(AccessState);
  if ( inserted >= 0 )
  {
    if ( v36 )
    {
      v31 = *((_QWORD *)v36 + 47);
      if ( v31 )
        inserted = PspAssignProcessToJobList(a2, v31, *((unsigned int *)v36 + 97), *v36);
    }
    if ( inserted >= 0 )
      *a10 = *(_QWORD *)&AccessState[12].ImpersonationLevel;
    v37 = 1;
    if ( inserted >= 0 )
      goto LABEL_69;
    if ( ((__int64)AccessState[12].ClientToken & 0x200) != 0 || Process == PsInitialSystemProcess )
      v37 = 0;
    ObCloseHandle(*(HANDLE *)&AccessState[12].ImpersonationLevel, v37);
    if ( v34 && (*v34 & 1) != 0 )
      KeRaiseUserException(inserted);
  }
  if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)Object + 432, 0);
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread((__int64)Object);
  }
  else
  {
    PspTerminateThreadByPointer((__int64)Object, inserted, 0);
  }
LABEL_69:
  if ( (Object[3] & 0x40) != 0 && inserted < 0 )
  {
    KeSetUmsThreadKernelLock(**((_QWORD **)Object + 62), 0LL);
    KeUpdateUmsThreadState(**((_QWORD **)Object + 62), 2LL, 0LL);
    ObfDereferenceObject(*(PVOID *)(*((_QWORD *)Object + 62) + 16LL));
    KeUnInitializeUmsThread(Object);
  }
  KeReadyThread((__int64)Object, v31, v32, v33);
  return (unsigned int)inserted;
}
