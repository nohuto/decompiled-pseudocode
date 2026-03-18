/*
 * XREFs of CmpLoadHiveVolatile @ 0x140661E7C
 * Callers:
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1400151B4 (RtlAppendUnicodeToString.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlAppendUnicodeStringToString @ 0x1400D1F10 (RtlAppendUnicodeStringToString.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpCopyCompressedName @ 0x14042B374 (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x140448470 (CmpLockRegistryExclusive.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x1404C6A10 (CmpUnlockRegistry.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpUuidCreate @ 0x1404EB848 (CmpUuidCreate.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmpCopyKeyPartial @ 0x1404F2C38 (CmpCopyKeyPartial.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpDestroyTemporaryHive @ 0x140661D60 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rtt
  struct _KTHREAD *v7; // rcx
  __int16 v8; // ax
  int v10; // ebx
  unsigned __int64 v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rsi
  unsigned __int64 v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  int v18; // eax
  ULONG_PTR v19; // r14
  ULONG_PTR v20; // rdi
  unsigned int v21; // ebx
  __int64 v22; // rbx
  UNICODE_STRING *v23; // rax
  __int16 v24; // si
  unsigned __int16 v25; // si
  unsigned __int64 v26; // rtt
  __int16 v27; // ax
  __int16 v28; // cx
  int v29; // esi
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // r9
  signed __int8 v33; // cf
  __int64 v34; // rbx
  __int64 **v35; // rcx
  ULONG_PTR v36; // rax
  signed __int64 v37; // rcx
  ULONG_PTR v38; // rtt
  unsigned __int64 v39; // rtt
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  char v42; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v47; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v49[4]; // [rsp+A0h] [rbp-60h] BYREF
  ULONG_PTR v50[44]; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+220h] [rbp+120h] BYREF
  UUID v52; // [rsp+230h] [rbp+130h] BYREF

  v44 = -1;
  memset(v50, 0, sizeof(v50));
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v6 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v6 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&CmpShutdownRundown) )
  {
    v7 = KeGetCurrentThread();
    v8 = v7->KernelApcDisable + 1;
    v7->KernelApcDisable = v8;
    if ( !v8
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
      && !v7->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225865LL;
  }
  v10 = CmpUuidCreate(&Uuid);
  if ( v10 < 0 )
    goto LABEL_9;
  v10 = CmpUuidCreate(&v52);
  if ( v10 < 0 )
    goto LABEL_9;
  v14 = *(_QWORD *)(a1 + 32);
  if ( v14 != CmpMasterHive )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v15 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v15 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225485LL;
  }
  memset(v49, 0, sizeof(v49));
  v49[0] = a2;
  v10 = CmpInitializeHive(&v47, 2u, 0, 0, 0LL, (__int64)v49, 0LL, 17367041, 0LL, 0LL, 0LL, v50);
  if ( v10 < 0 )
  {
LABEL_9:
    v11 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    _m_prefetchw(&CmpShutdownRundown);
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpShutdownRundown, v11 - 2, v11) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( v13 )
      return (unsigned int)v10;
LABEL_43:
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152 && !v12->SpecialApcDisable )
      KiCheckForKernelApcDelivery();
    return (unsigned int)v10;
  }
  v18 = CmpInitializeHive(
          &BugCheckParameter2,
          0,
          1,
          0,
          0LL,
          0LL,
          0LL,
          16908288,
          (__int64)&Uuid,
          (__int64)&v52,
          0LL,
          v50);
  v19 = v47;
  v10 = v18;
  if ( v18 < 0 )
  {
LABEL_38:
    CmpDestroyTemporaryHive(v19);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x624E4D43u);
    _m_prefetchw(&CmpShutdownRundown);
    v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v26 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v12 = KeGetCurrentThread();
    v27 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v27;
    if ( v27 )
      return (unsigned int)v10;
    goto LABEL_43;
  }
  CmpLockRegistryExclusive();
  v20 = BugCheckParameter2;
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 )
  {
    v10 = -1073741444;
LABEL_37:
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v20);
    goto LABEL_38;
  }
  if ( *(_BYTE *)(v14 + 4112) == 1 )
  {
    v10 = -1073741431;
    goto LABEL_37;
  }
  LODWORD(v43) = 1;
  v21 = CmpCopyKeyPartial(
          v19,
          *(unsigned int *)(*(_QWORD *)(v19 + 64) + 36LL),
          BugCheckParameter2,
          0xFFFFFFFF,
          2,
          v42,
          v43);
  if ( v21 == -1
    || (*(_DWORD *)(*(_QWORD *)(v20 + 64) + 36LL) = v21,
        !CmpCopySyncTree(v19, *(_DWORD *)(*(_QWORD *)(v19 + 64) + 36LL), v20, v21, 2, 0))
    || (v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v20 + 8))(v20, v21, &v44)) == 0 )
  {
LABEL_36:
    v10 = -1073741670;
    goto LABEL_37;
  }
  v23 = (UNICODE_STRING *)CmpConstructName(a1);
  v4 = v23;
  if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
    v24 = 2 * *(_WORD *)(v22 + 72);
  else
    v24 = *(_WORD *)(v22 + 72);
  v25 = v23->Length + v24 + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v25, 0x20204D43u);
  if ( !DestinationString.Buffer )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v20 + 16))(v20, &v44);
    goto LABEL_36;
  }
  DestinationString.MaximumLength = v25;
  DestinationString.Length = v25;
  RtlCopyUnicodeString(&DestinationString, v4);
  RtlAppendUnicodeToString(&DestinationString, L"\\");
  if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
  {
    CmpCopyCompressedName(
      &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
      DestinationString.MaximumLength - DestinationString.Length,
      (unsigned __int8 *)(v22 + 76),
      (unsigned __int16)(2 * *(_WORD *)(v22 + 72)));
    if ( (*(_BYTE *)(v22 + 2) & 0x20) != 0 )
      v28 = 2 * *(_WORD *)(v22 + 72);
    else
      v28 = *(_WORD *)(v22 + 72);
    DestinationString.Length += v28;
  }
  else
  {
    Source.Buffer = (wchar_t *)(v22 + 76);
    Source.MaximumLength = *(_WORD *)(v22 + 72);
    Source.Length = Source.MaximumLength;
    RtlAppendUnicodeStringToString(&DestinationString, &Source);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(v20 + 16))(v20, &v44);
  v29 = CmpLinkHiveToMaster(&DestinationString, 0LL, v20, 0, 0x200u, 0, 0LL, 0LL, 1);
  if ( v29 >= 0 )
  {
    CmpAddToHiveFileList(v20);
    v31 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL, v30);
    v33 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
    v34 = v31;
    if ( v33 )
      ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v31, (ULONG_PTR)&CmpHiveListHeadLock, v32);
    if ( v34 )
      *(_BYTE *)(v34 + 26) |= 1u;
    v35 = (__int64 **)qword_14077ED20;
    v36 = BugCheckParameter2 + 2728;
    *(_QWORD *)(BugCheckParameter2 + 2728) = &CmpHiveListHead;
    *(_QWORD *)(v36 + 8) = v35;
    if ( *v35 != &CmpHiveListHead )
      __fastfail(3u);
    *v35 = (__int64 *)v36;
    qword_14077ED20 = v36;
    _m_prefetchw(&CmpHiveListHeadLock);
    v37 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v37 = 0LL;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v38 = CmpHiveListHeadLock,
          v38 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpHiveListHeadLock,
                   v37,
                   CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock, (__int64)&CmpHiveListHead);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    v19 = v47;
    v20 = BugCheckParameter2;
    if ( !BYTE5(NlsMbCodePageTag) )
    {
      CmpGlobalQuotaAllowed = CmpGlobalQuota;
      BYTE5(NlsMbCodePageTag) = 1;
    }
  }
  CmpUnlockRegistry();
  if ( v29 < 0 )
    CmpDestroyTemporaryHive(v20);
  CmpDestroyTemporaryHive(v19);
  ExFreePoolWithTag(DestinationString.Buffer, 0);
  ExFreePoolWithTag(v4, 0x624E4D43u);
  _m_prefetchw(&CmpShutdownRundown);
  v39 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v39 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&CmpShutdownRundown);
  v40 = KeGetCurrentThread();
  v41 = v40->KernelApcDisable + 1;
  v40->KernelApcDisable = v41;
  if ( !v41
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152
    && !v40->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v29;
}
