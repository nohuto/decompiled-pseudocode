/*
 * XREFs of CmpLoadHiveVolatile @ 0x14060D390
 * Callers:
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLockRegistryExclusive @ 0x1403FC8A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14040362C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404382D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpCopyCompressedName @ 0x14043EFB0 (CmpCopyCompressedName.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmpAddToHiveFileList @ 0x1404CD0D8 (CmpAddToHiveFileList.c)
 *     CmpCopyKeyPartial @ 0x1404CDE74 (CmpCopyKeyPartial.c)
 *     CmpUuidCreate @ 0x1405179A4 (CmpUuidCreate.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpDestroyTemporaryHive @ 0x14060D354 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v11; // ebx
  __int64 v12; // r14
  int v13; // eax
  int v14; // eax
  ULONG_PTR v15; // rsi
  char IsKeyDeletedForKeyBody; // al
  ULONG_PTR v17; // rdi
  unsigned int v18; // ebx
  __int64 v19; // rbx
  UNICODE_STRING *v20; // rax
  __int16 v21; // r14
  unsigned __int16 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int16 v26; // cx
  int v27; // r14d
  _BYTE *v28; // rax
  signed __int8 v29; // cf
  _BYTE *v30; // rbx
  _QWORD *v31; // rcx
  _QWORD *v32; // rax
  signed __int64 v33; // rcx
  ULONG_PTR v34; // rtt
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // [rsp+28h] [rbp-D8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  int v41[2]; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v42; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v44[5]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v45[44]; // [rsp+C0h] [rbp-40h] BYREF
  UUID v46; // [rsp+220h] [rbp+120h] BYREF
  UUID Uuid; // [rsp+230h] [rbp+130h] BYREF

  v40[0] = -1;
  v40[1] = 0;
  v4 = 0LL;
  memset(v45, 0, sizeof(v45));
  CurrentThread = KeGetCurrentThread();
  v6 = *(_QWORD *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    return 3221225865LL;
  }
  v11 = CmpUuidCreate(&Uuid);
  if ( v11 < 0 )
    goto LABEL_26;
  v11 = CmpUuidCreate(&v46);
  if ( v11 < 0 )
    goto LABEL_26;
  v12 = *(_QWORD *)(v6 + 24);
  if ( v12 != CmpMasterHive )
  {
    v11 = -1073741811;
LABEL_26:
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
    return (unsigned int)v11;
  }
  memset(v44, 0, 0x20uLL);
  v44[0] = a2;
  v13 = CmpInitializeHive(&v42, 2u, 0, 0, 0LL, (__int64)v44, 0LL, 17367041, 0LL, 0LL, 0LL, v45);
  if ( v13 < 0 )
  {
    v11 = v13;
    goto LABEL_26;
  }
  v14 = CmpInitializeHive((ULONG_PTR *)v41, 0, 1, 0, 0LL, 0LL, 0LL, 16908288, (__int64)&Uuid, (__int64)&v46, 0LL, v45);
  v15 = v42;
  v11 = v14;
  if ( v14 < 0 )
  {
LABEL_24:
    CmpDestroyTemporaryHive(v15);
    if ( v4 )
      CmpFreeTransientPoolWithTag(v4, 0x624E4D43u);
    goto LABEL_26;
  }
  CmpLockRegistryExclusive();
  IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(a1, 0LL);
  v17 = *(_QWORD *)v41;
  if ( IsKeyDeletedForKeyBody )
  {
    v11 = -1073741444;
LABEL_23:
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v17);
    goto LABEL_24;
  }
  if ( *(_BYTE *)(v12 + 4112) == 1 )
  {
    v11 = -1073741431;
    goto LABEL_23;
  }
  v18 = CmpCopyKeyPartial(
          v15,
          *(unsigned int *)(*(_QWORD *)(v15 + 64) + 36LL),
          *(ULONG_PTR *)v41,
          0xFFFFFFFF,
          2,
          v38,
          1u);
  if ( v18 == -1
    || (*(_DWORD *)(*(_QWORD *)(v17 + 64) + 36LL) = v18,
        !CmpCopySyncTree(v15, *(_DWORD *)(*(_QWORD *)(v15 + 64) + 36LL), v17, v18, 2, 0))
    || (v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, v18, v40)) == 0 )
  {
LABEL_22:
    v11 = -1073741670;
    goto LABEL_23;
  }
  v20 = (UNICODE_STRING *)CmpConstructName(v6);
  v4 = v20;
  if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
    v21 = 2 * *(_WORD *)(v19 + 72);
  else
    v21 = *(_WORD *)(v19 + 72);
  v22 = v20->Length + v21 + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x20204D43u);
  if ( !DestinationString.Buffer )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v17 + 16))(v17, v40);
    goto LABEL_22;
  }
  DestinationString.MaximumLength = v22;
  DestinationString.Length = v22;
  RtlCopyUnicodeString(&DestinationString, v4);
  RtlAppendUnicodeToString(&DestinationString, L"\\");
  if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
  {
    CmpCopyCompressedName(
      &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
      DestinationString.MaximumLength - DestinationString.Length,
      (unsigned __int8 *)(v19 + 76),
      (unsigned __int16)(2 * *(_WORD *)(v19 + 72)));
    if ( (*(_BYTE *)(v19 + 2) & 0x20) != 0 )
      v26 = 2 * *(_WORD *)(v19 + 72);
    else
      v26 = *(_WORD *)(v19 + 72);
    DestinationString.Length += v26;
  }
  else
  {
    Source.Buffer = (wchar_t *)(v19 + 76);
    Source.MaximumLength = *(_WORD *)(v19 + 72);
    Source.Length = Source.MaximumLength;
    RtlAppendUnicodeStringToString(&DestinationString, &Source);
  }
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v17 + 16))(v17, v40);
  v27 = CmpLinkHiveToMaster((__int64)&DestinationString, 0LL, v17, 0, 0x200u, 0, 0LL, 0LL, 0LL, 0LL, 1);
  if ( v27 >= 0 )
  {
    CmpAddToHiveFileList((HANDLE)v17);
    v28 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0);
    v29 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
    v30 = v28;
    if ( v29 )
      ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v28, (ULONG_PTR)&CmpHiveListHeadLock);
    if ( v30 )
      v30[26] |= 1u;
    v31 = (_QWORD *)qword_140747E38;
    v32 = (_QWORD *)(*(_QWORD *)v41 + 2728LL);
    if ( *(__int64 **)qword_140747E38 != &CmpHiveListHead )
      __fastfail(3u);
    *v32 = &CmpHiveListHead;
    v32[1] = v31;
    *v31 = v32;
    qword_140747E38 = (__int64)v32;
    _m_prefetchw(&CmpHiveListHeadLock);
    v33 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v33 = 0LL;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v34 = CmpHiveListHeadLock,
          v34 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpHiveListHeadLock,
                   v33,
                   CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    v15 = v42;
    v17 = *(_QWORD *)v41;
    if ( !BYTE5(NlsMbCodePageTag) )
    {
      CmpGlobalQuotaAllowed = CmpGlobalQuota;
      BYTE5(NlsMbCodePageTag) = 1;
    }
  }
  CmpUnlockRegistry();
  if ( v27 < 0 )
    CmpDestroyTemporaryHive(v17);
  CmpDestroyTemporaryHive(v15);
  ExFreePoolWithTag(DestinationString.Buffer, 0);
  ExFreePoolWithTag(v4, 0x624E4D43u);
  ExReleaseRundownProtection(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v35, v36, v37);
  return (unsigned int)v27;
}
