/*
 * XREFs of CmpLoadHiveVolatile @ 0x1405EA5F4
 * Callers:
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmpCopyCompressedName @ 0x1403D9A5C (CmpCopyCompressedName.c)
 *     CmpLockRegistryExclusive @ 0x1403DE874 (CmpLockRegistryExclusive.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     CmpUnlockRegistry @ 0x140423B00 (CmpUnlockRegistry.c)
 *     CmpUuidCreate @ 0x14048548C (CmpUuidCreate.c)
 *     CmpCopyKeyPartial @ 0x1404B3BE4 (CmpCopyKeyPartial.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     CmpDestroyTemporaryHive @ 0x1405EA4D8 (CmpDestroyTemporaryHive.c)
 */

__int64 __fastcall CmpLoadHiveVolatile(__int64 a1, __int64 a2)
{
  UNICODE_STRING *v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  __int64 v8; // r14
  int v9; // eax
  int v10; // eax
  ULONG_PTR v11; // rsi
  ULONG_PTR v12; // rdi
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int16 v15; // ax
  unsigned __int16 v16; // r14
  __int16 v17; // cx
  int v18; // r14d
  __int64 v19; // rax
  signed __int8 v20; // cf
  __int64 v21; // rbx
  __int64 **v22; // rcx
  ULONG_PTR v23; // rax
  signed __int64 v24; // rcx
  ULONG_PTR v25; // rtt
  char v26; // [rsp+28h] [rbp-D8h]
  ULONG_PTR v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v31; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING Source; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v33[5]; // [rsp+98h] [rbp-68h] BYREF
  ULONG_PTR v34[44]; // [rsp+C0h] [rbp-40h] BYREF
  UUID Uuid; // [rsp+220h] [rbp+120h] BYREF
  UUID v36; // [rsp+230h] [rbp+130h] BYREF

  v28 = -1;
  memset(v34, 0, sizeof(v34));
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return 3221225865LL;
  }
  v7 = CmpUuidCreate(&Uuid);
  if ( v7 < 0 )
    goto LABEL_27;
  v7 = CmpUuidCreate(&v36);
  if ( v7 < 0 )
    goto LABEL_27;
  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 != CmpMasterHive )
  {
    v7 = -1073741811;
LABEL_27:
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)v7;
  }
  memset(v33, 0, 0x20uLL);
  v33[0] = a2;
  v9 = CmpInitializeHive(&v31, 2u, 0, 0, 0LL, (__int64)v33, 0LL, 16777217, 0LL, 0LL, 0LL, v34);
  if ( v9 < 0 )
  {
    v7 = v9;
    goto LABEL_27;
  }
  v10 = CmpInitializeHive(
          &BugCheckParameter2,
          0,
          1,
          0,
          0LL,
          0LL,
          0LL,
          0x1000000,
          (__int64)&Uuid,
          (__int64)&v36,
          0LL,
          v34);
  v11 = v31;
  v7 = v10;
  if ( v10 < 0 )
  {
LABEL_25:
    CmpDestroyTemporaryHive(v11);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x624E4D43u);
    goto LABEL_27;
  }
  CmpLockRegistryExclusive();
  v12 = BugCheckParameter2;
  if ( (*(_DWORD *)(a1 + 4) & 0x20000) != 0 )
  {
    v7 = -1073741444;
LABEL_24:
    CmpUnlockRegistry();
    CmpDestroyTemporaryHive(v12);
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v8 + 4112) == 1 )
  {
    v7 = -1073741431;
    goto LABEL_24;
  }
  LODWORD(v27) = 1;
  v13 = CmpCopyKeyPartial(
          v11,
          *(unsigned int *)(*(_QWORD *)(v11 + 64) + 36LL),
          BugCheckParameter2,
          0xFFFFFFFF,
          2,
          v26,
          v27);
  if ( v13 == -1
    || (*(_DWORD *)(*(_QWORD *)(v12 + 64) + 36LL) = v13,
        !CmpCopySyncTree(v11, *(_DWORD *)(*(_QWORD *)(v11 + 64) + 36LL), v12, v13, 2, 0))
    || (v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(v12 + 8))(v12, v13, &v28)) == 0 )
  {
LABEL_23:
    v7 = -1073741670;
    goto LABEL_24;
  }
  v4 = (UNICODE_STRING *)CmpConstructName(a1);
  if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
    v15 = 2 * *(_WORD *)(v14 + 72);
  else
    v15 = *(_WORD *)(v14 + 72);
  v16 = v15 + v4->Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16, 0x20204D43u);
  if ( !DestinationString.Buffer )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v28);
    goto LABEL_23;
  }
  DestinationString.MaximumLength = v16;
  DestinationString.Length = v16;
  RtlCopyUnicodeString(&DestinationString, v4);
  RtlAppendUnicodeToString(&DestinationString, L"\\");
  if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
  {
    CmpCopyCompressedName(
      &DestinationString.Buffer[(unsigned __int64)DestinationString.Length >> 1],
      DestinationString.MaximumLength - DestinationString.Length,
      (unsigned __int8 *)(v14 + 76),
      (unsigned __int16)(2 * *(_WORD *)(v14 + 72)));
    if ( (*(_BYTE *)(v14 + 2) & 0x20) != 0 )
      v17 = 2 * *(_WORD *)(v14 + 72);
    else
      v17 = *(_WORD *)(v14 + 72);
    DestinationString.Length += v17;
  }
  else
  {
    Source.Buffer = (wchar_t *)(v14 + 76);
    Source.MaximumLength = *(_WORD *)(v14 + 72);
    Source.Length = Source.MaximumLength;
    RtlAppendUnicodeStringToString(&DestinationString, &Source);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(v12 + 16))(v12, &v28);
  v18 = CmpLinkHiveToMaster(&DestinationString, 0LL, v12, 0, 0x200u, 0, 0LL, 0LL, 1);
  if ( v18 >= 0 )
  {
    CmpAddToHiveFileList(v12);
    v19 = KeAbPreAcquire((ULONG_PTR)&CmpHiveListHeadLock, 0LL, 0LL);
    v20 = _interlockedbittestandset64((volatile signed __int32 *)&CmpHiveListHeadLock, 0LL);
    v21 = v19;
    if ( v20 )
      ExfAcquirePushLockExclusiveEx(&CmpHiveListHeadLock, v19, (ULONG_PTR)&CmpHiveListHeadLock);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v22 = (__int64 **)qword_1406FBD10;
    v23 = BugCheckParameter2 + 2728;
    *(_QWORD *)(BugCheckParameter2 + 2728) = &CmpHiveListHead;
    *(_QWORD *)(v23 + 8) = v22;
    if ( *v22 != &CmpHiveListHead )
      __fastfail(3u);
    *v22 = (__int64 *)v23;
    qword_1406FBD10 = v23;
    _m_prefetchw(&CmpHiveListHeadLock);
    v24 = CmpHiveListHeadLock - 16;
    if ( (CmpHiveListHeadLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v24 = 0LL;
    if ( (CmpHiveListHeadLock & 2) != 0
      || (v25 = CmpHiveListHeadLock,
          v25 != _InterlockedCompareExchange64(
                   (volatile signed __int64 *)&CmpHiveListHeadLock,
                   v24,
                   CmpHiveListHeadLock)) )
    {
      ExfReleasePushLock(&CmpHiveListHeadLock);
    }
    KeAbPostRelease((ULONG_PTR)&CmpHiveListHeadLock);
    v11 = v31;
    v12 = BugCheckParameter2;
    if ( !BYTE5(NlsMbCodePageTag) )
    {
      CmpGlobalQuotaAllowed = CmpGlobalQuota;
      BYTE5(NlsMbCodePageTag) = 1;
    }
  }
  CmpUnlockRegistry();
  if ( v18 < 0 )
    CmpDestroyTemporaryHive(v12);
  CmpDestroyTemporaryHive(v11);
  ExFreePoolWithTag(DestinationString.Buffer, 0);
  ExFreePoolWithTag(v4, 0x624E4D43u);
  ExReleaseRundownProtection_0(&CmpShutdownRundown);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v18;
}
