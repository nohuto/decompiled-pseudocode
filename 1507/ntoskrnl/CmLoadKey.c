/*
 * XREFs of CmLoadKey @ 0x1404EC054
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     UNLOCK_HIVE_LOAD @ 0x140446020 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     LOCK_HIVE_LOAD @ 0x14044626C (LOCK_HIVE_LOAD.c)
 *     CmpCmdHiveOpen @ 0x14044A564 (CmpCmdHiveOpen.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmpUnlockKcb @ 0x1404C53F0 (CmpUnlockKcb.c)
 *     CmRmIsKCBDeleted @ 0x1404C69A0 (CmRmIsKCBDeleted.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlock @ 0x1404CBD60 (CmpReferenceKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x1404CCB10 (CmpLockKcbExclusive.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1404EC358 (CmpQueryHiveRedirectionFileList.c)
 *     ObReferenceObjectByNameEx @ 0x1404EC8E0 (ObReferenceObjectByNameEx.c)
 *     CmpRecordUnloadEventForHive @ 0x1404ED934 (CmpRecordUnloadEventForHive.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140656890 (CmpIsHiveAlreadyLoaded.c)
 */

__int64 __fastcall CmLoadKey(
        _QWORD *a1,
        UNICODE_STRING *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  PVOID v8; // r12
  _WORD *v12; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  wchar_t *PoolWithTag; // rax
  wchar_t *v17; // r13
  UNICODE_STRING *v18; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v20; // rtt
  int KeyCommon; // ebx
  unsigned __int64 v22; // rtt
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  unsigned __int64 v26; // rtt
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  UNICODE_STRING *p_Destination; // rax
  struct _KTHREAD *v30; // rcx
  __int16 v31; // ax
  NTSTATUS v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // sf
  __int64 v38; // r14
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rsi
  __int64 v44; // r9
  _QWORD *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r9
  signed __int8 v49; // cf
  __int64 v50; // rsi
  __int64 v51; // rcx
  _QWORD *v52; // rax
  signed __int64 v53; // rcx
  ULONG_PTR v54; // rtt
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r9
  __int64 v58; // rsi
  __int64 v59; // r14
  _QWORD *v60; // rax
  signed __int64 v61; // rcx
  ULONG_PTR v62; // rtt
  __int64 v63; // rdx
  __int64 v64; // rcx
  bool v65; // zf
  int v66; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+70h] [rbp-98h] BYREF
  PVOID v69; // [rsp+78h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR v71; // [rsp+88h] [rbp-80h] BYREF
  PVOID Object; // [rsp+90h] [rbp-78h] BYREF
  int v73[4]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v74[36]; // [rsp+A8h] [rbp-60h] BYREF
  char v75; // [rsp+168h] [rbp+60h] BYREF

  v8 = 0LL;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  v12 = (_WORD *)a1[2];
  v71 = 0LL;
  v75 = 0;
  Destination.Length = 0;
  if ( *v12 >= 2u )
  {
    for ( LODWORD(v14) = (unsigned __int16)*v12 >> 1; (_DWORD)v14; *(_WORD *)v15 -= 2 )
    {
      v15 = a1[2];
      v14 = (unsigned int)(v14 - 1);
      if ( *(_WORD *)(*(_QWORD *)(v15 + 8) + 2 * v14) != 92 )
        break;
    }
  }
  if ( *(_WORD *)a1[2] < 2u )
    return 3221225485LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x62534D43u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  v18 = (UNICODE_STRING *)a1[2];
  *(_DWORD *)&Destination.Length = 17039360;
  Destination.Buffer = PoolWithTag;
  if ( (unsigned __int8)CmpQueryHiveRedirectionFileList(v18, &Destination) )
  {
    p_Destination = &Destination;
    if ( Destination.Length == 2 )
      p_Destination = a2;
    a2 = p_Destination;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v20 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    LOBYTE(v66) = 1;
    KeyCommon = CmpCmdHiveOpen(
                  a2,
                  1u,
                  (__int64)&v66,
                  (__int64)&v71,
                  ((a3 & 0x20) << 21) | ((a3 & 0x80) << 20) | ((a3 & 0x200) << 19) | ((a3 & 4) << 27) | ((a3 & 0x400) << 20) | ((a3 & 0xFFFFF000) << 19) | 0x1090001,
                  0,
                  a6,
                  (__int64)&v75);
    if ( KeyCommon >= 0 )
    {
      KeyCommon = CmpLoadKeyCommon(v71, a1, a3, a4, a5, a8, v66, v75);
      _m_prefetchw(&CmpShutdownRundown);
      v22 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v22 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v23 = KeGetCurrentThread();
      v24 = v23->KernelApcDisable + 1;
      v23->KernelApcDisable = v24;
      if ( v24 || ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink == &v23->152 )
        goto LABEL_12;
      v65 = v23->SpecialApcDisable == 0;
LABEL_86:
      if ( v65 )
        KiCheckForKernelApcDelivery();
LABEL_12:
      ExFreePoolWithTag(v17, 0);
      return (unsigned int)KeyCommon;
    }
    v68 = 0LL;
    memset(v74, 0, 136);
    v69 = 0LL;
    if ( KeyCommon != -1073741757
      || (int)ObReferenceObjectByNameEx((_DWORD)a1, 0, 131097, (_DWORD)CmKeyObjectType, 0, (__int64)v74, (__int64)&v69) < 0 )
    {
LABEL_15:
      _m_prefetchw(&CmpShutdownRundown);
      v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v26 != _InterlockedCompareExchange64(
                    (volatile signed __int64 *)&CmpShutdownRundown,
                    (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                    CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
        ExfReleaseRundownProtection(&CmpShutdownRundown);
      v27 = KeGetCurrentThread();
      v28 = v27->KernelApcDisable + 1;
      v27->KernelApcDisable = v28;
      if ( v28 || ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink == &v27->152 )
        goto LABEL_12;
      v65 = v27->SpecialApcDisable == 0;
      goto LABEL_86;
    }
    if ( (int)CmpOpenHiveFile(a2, 0, &Handle, v73, 8, (void *)a6, 0LL, 0LL, 0LL) < 0 )
    {
      KeyCommon = -1073741757;
LABEL_78:
      if ( v69 )
        ObfDereferenceObject(v69);
      if ( v8 )
        ObfDereferenceObject(v8);
      goto LABEL_15;
    }
    v32 = ObReferenceObjectByHandle(Handle, 0, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
    v8 = Object;
    ZwClose(Handle);
    v37 = v32 < 0;
    KeyCommon = -1073741757;
    if ( v37 )
      goto LABEL_78;
    v38 = 0LL;
    LOCK_HIVE_LOAD(v34, v33, v35, v36);
    CmpLockRegistryFreezeAware(1);
    if ( a4 )
    {
      if ( CmRmIsKCBDeleted(*(_QWORD *)(a4 + 8), 0LL) )
      {
        KeyCommon = -1073741444;
LABEL_77:
        CmpUnlockRegistry();
        UNLOCK_HIVE_LOAD(v64, v63);
        goto LABEL_78;
      }
      v38 = *(_QWORD *)(*(_QWORD *)(a4 + 8) + 32LL);
      if ( v38 && (*(_DWORD *)(v38 + 5360) & 1) == 0 )
      {
        KeyCommon = -1073741811;
        goto LABEL_77;
      }
    }
    v39 = v69;
    if ( (unsigned __int8)CmpIsHiveAlreadyLoaded((_DWORD)v69, (_DWORD)v8, a3, (unsigned int)&v68, a7) )
    {
      KeyCommon = 0;
      CmpLockKcbExclusive(v39[1], v40, v41, v42);
      if ( (a3 & 0x800) != 0 )
      {
        CmpReferenceKeyControlBlock(v39[1]);
        *a8 = v39[1];
      }
      v43 = v68;
      if ( a5 )
        KeyCommon = CmpRecordUnloadEventForHive(v68, a5);
      CmpUnlockKcb((char *)v39[1]);
      if ( KeyCommon >= 0 && v38 )
      {
        v45 = (_QWORD *)(v43 + 5368);
        if ( (_QWORD *)*v45 != v45 )
        {
          v46 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v44);
          v49 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
          v50 = v46;
          if ( v49 )
            ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v46, (ULONG_PTR)&CmpHiveListHeadLock, v48);
          if ( v50 )
            *(_BYTE *)(v50 + 26) |= 1u;
          v51 = *v45;
          v52 = (_QWORD *)v45[1];
          if ( *(_QWORD **)(*v45 + 8LL) != v45 || (_QWORD *)*v52 != v45 )
            __fastfail(3u);
          *v52 = v51;
          *(_QWORD *)(v51 + 8) = v52;
          _m_prefetchw(&CmpHiveListHeadLock);
          if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v53 = 0LL;
          else
            v53 = CmpHiveListHeadLock - 16;
          if ( (CmpHiveListHeadLock & 2) != 0
            || (v54 = CmpHiveListHeadLock,
                v54 != _InterlockedCompareExchange64(
                         (volatile signed __int64 *)&CmpHiveListHeadLock,
                         v53,
                         CmpHiveListHeadLock)) )
          {
            ExfReleasePushLock(&CmpHiveListHeadLock, v47);
          }
          KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        }
        v55 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v44);
        v49 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
        v58 = v55;
        if ( v49 )
          ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v55, (ULONG_PTR)&CmpHiveListHeadLock, v57);
        if ( v58 )
          *(_BYTE *)(v58 + 26) |= 1u;
        v59 = v38 + 5368;
        v60 = *(_QWORD **)(v59 + 8);
        *v45 = v59;
        v45[1] = v60;
        if ( *v60 != v59 )
          __fastfail(3u);
        *v60 = v45;
        *(_QWORD *)(v59 + 8) = v45;
        _m_prefetchw(&CmpHiveListHeadLock);
        if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v61 = 0LL;
        else
          v61 = CmpHiveListHeadLock - 16;
        if ( (CmpHiveListHeadLock & 2) != 0
          || (v62 = CmpHiveListHeadLock,
              v62 != _InterlockedCompareExchange64(
                       (volatile signed __int64 *)&CmpHiveListHeadLock,
                       v61,
                       CmpHiveListHeadLock)) )
        {
          ExfReleasePushLock(&CmpHiveListHeadLock, v56);
        }
        KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
        *(_DWORD *)(v68 + 5360) |= 1u;
      }
    }
    goto LABEL_77;
  }
  v30 = KeGetCurrentThread();
  v31 = v30->KernelApcDisable + 1;
  v30->KernelApcDisable = v31;
  if ( !v31
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
    && !v30->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221225865LL;
}
