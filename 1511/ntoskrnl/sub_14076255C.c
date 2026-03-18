/*
 * XREFs of sub_14076255C @ 0x14076255C
 * Callers:
 *     sub_1407621B8 @ 0x1407621B8 (sub_1407621B8.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 *     NtDeleteValueKey @ 0x1403D4700 (NtDeleteValueKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     NtOpenKey @ 0x1404A5C10 (NtOpenKey.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     sub_14054598C @ 0x14054598C (sub_14054598C.c)
 *     sub_14066A098 @ 0x14066A098 (sub_14066A098.c)
 *     ExpTriggerFastCacheReeval @ 0x14066A550 (ExpTriggerFastCacheReeval.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 */

int sub_14076255C()
{
  char v0; // r14
  NTSTATUS v1; // eax
  HANDLE v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  unsigned int v7; // r12d
  int *v8; // rsi
  NTSTATUS v9; // eax
  HANDLE v10; // rdi
  NTSTATUS v11; // eax
  unsigned __int8 *v12; // r9
  __int64 v13; // r10
  unsigned int v14; // r8d
  unsigned int v15; // edx
  int v16; // ecx
  __int64 v17; // r14
  PVOID *v18; // rdi
  struct _KTHREAD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  int result; // eax
  __int64 v23; // r13
  HANDLE v24; // rdi
  __int64 *v25; // r9
  unsigned int v26; // edx
  __int64 v27; // r10
  unsigned int v28; // r8d
  int v29; // ecx
  ULONG v30; // ecx
  char *PoolWithTag; // rax
  char *v32; // r15
  char *v33; // r14
  unsigned __int8 *v34; // r9
  __int64 v35; // r10
  unsigned int v36; // r8d
  unsigned int v37; // edx
  int v38; // ecx
  _DWORD *v39; // rdi
  UNICODE_STRING *v40; // rsi
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  char v44; // [rsp+38h] [rbp-79h]
  ULONG ResultLength; // [rsp+3Ch] [rbp-75h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v47; // [rsp+48h] [rbp-69h]
  unsigned __int64 v48; // [rsp+50h] [rbp-61h]
  unsigned __int64 v49; // [rsp+58h] [rbp-59h]
  unsigned __int64 v50; // [rsp+60h] [rbp-51h]
  __int64 v51; // [rsp+68h] [rbp-49h] BYREF
  __int64 v52; // [rsp+70h] [rbp-41h]
  __int64 v53; // [rsp+78h] [rbp-39h]
  __int64 v54; // [rsp+80h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp+7h] BYREF
  int v57; // [rsp+BCh] [rbp+Bh]
  int v58; // [rsp+C0h] [rbp+Fh]
  __int64 v59; // [rsp+C4h] [rbp+13h]
  __int64 v60; // [rsp+CCh] [rbp+1Bh]
  __int64 v61; // [rsp+D4h] [rbp+23h]

  v44 = 1;
  ExpFastCacheLock = 0LL;
  ExpFastCacheUpdateLock = 0LL;
  v0 = 1;
  if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1406A26C8) >= 0 )
  {
    v24 = KeyHandle;
    if ( NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1407895F0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v57 == 4
      && v58 == 4 )
    {
      ExpPackagesTableMaximumSize = v59;
      if ( (unsigned int)v59 < 0x400 )
        ExpPackagesTableMaximumSize = 1024;
    }
    if ( NtQueryValueKey(
           v24,
           (PUNICODE_STRING)&stru_140789600,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v57 == 4
      && v58 == 4 )
    {
      ExpProductLicensesTableMaximumSize = v59;
      if ( (unsigned int)v59 < 0x400 )
        ExpProductLicensesTableMaximumSize = 1024;
    }
    if ( NtQueryValueKey(
           v24,
           (PUNICODE_STRING)&stru_140789620,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v57 == 4
      && v58 == 4 )
    {
      ExpFeatureLicensesTableMaximumSize = v59;
      if ( (unsigned int)v59 < 0x400 )
        ExpFeatureLicensesTableMaximumSize = 1024;
    }
    NtClose(v24);
  }
  if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1406A26F8) >= 0 )
  {
    if ( NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_140789610,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v57 == 4
      && v58 == 4 )
    {
      dword_1406FB058 = v59;
      if ( (unsigned int)v59 > 0xA8 )
        dword_1406FB058 = 168;
    }
    NtClose(KeyHandle);
  }
  v1 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1406A2728);
  v52 = 0LL;
  v53 = 0LL;
  v47 = 0LL;
  if ( v1 < 0 )
    goto LABEL_6;
  v2 = KeyHandle;
  if ( NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_1406A18F0,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x28u,
         &ResultLength) >= 0
    && v57 == 3
    && v58 == 24 )
  {
    v0 = 0;
    v54 = v59;
    v52 = v60;
    _InterlockedExchange64(&qword_1406FBAD8, v59);
    v44 = 0;
    v53 = v61;
    if ( (unsigned __int64)_InterlockedCompareExchange64(&qword_1406FBAD8, 0LL, 0LL) > 0x7FFFFFFFFFFFFFFFLL )
      _InterlockedExchange64(&qword_1406FBAD8, 0LL);
    v49 = 0LL;
    v25 = &v54;
    v26 = 0;
    v27 = 8LL;
    v28 = 0;
    do
    {
      v29 = *(unsigned __int8 *)v25;
      v25 = (__int64 *)((char *)v25 + 1);
      v29 -= 23737705;
      v26 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v26 + v29), 21), 21), 21);
      v28 += v26 + v29;
      --v27;
    }
    while ( v27 );
    v2 = KeyHandle;
    v49 = __PAIR64__(v26, v28);
    v47 = __PAIR64__(v26, v28);
  }
  NtClose(v2);
  if ( v0 )
LABEL_6:
    _InterlockedExchange64(&qword_1406FBAD8, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v4, (ULONG_PTR)&ExpFastCacheUpdateLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  sub_14054598C((UNICODE_STRING *)&stru_1406A1900, (PVOID *)&qword_1406FBD30);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v7 = 0;
  v8 = &dword_1406FB450;
  do
  {
    v51 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v8 + 2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
        _InterlockedExchange(v8, 0);
    }
    else
    {
      v10 = KeyHandle;
      v11 = NtQueryValueKey(
              KeyHandle,
              (PUNICODE_STRING)&stru_1406A17A8,
              KeyValuePartialInformation,
              0LL,
              0,
              &ResultLength);
      if ( v11 != -1073741789 )
      {
        if ( v11 == -1073741772 )
        {
          v12 = (unsigned __int8 *)&v51;
          v50 = v47;
          v13 = 8LL;
          v14 = HIDWORD(v47);
          v15 = v47;
          do
          {
            v16 = *v12++;
            v16 -= 23737705;
            v14 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v14 + v16), 21), 21), 21);
            v15 += v14 + v16;
            --v13;
          }
          while ( v13 );
          v50 = __PAIR64__(v14, v15);
          v47 = __PAIR64__(v14, v15);
          _InterlockedExchange(v8, 0);
          v10 = KeyHandle;
        }
        goto LABEL_20;
      }
      if ( v0 )
      {
        NtDeleteValueKey(v10, (PUNICODE_STRING)&stru_1406A17A8);
LABEL_20:
        NtClose(v10);
        goto LABEL_21;
      }
      v30 = ResultLength + 4;
      if ( ResultLength + 4 < ResultLength )
      {
        ResultLength = -1;
        goto LABEL_20;
      }
      ResultLength += 4;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
      v32 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_20;
      v33 = PoolWithTag + 4;
      if ( NtQueryValueKey(
             v10,
             (PUNICODE_STRING)&stru_1406A17A8,
             KeyValuePartialInformation,
             PoolWithTag + 4,
             ResultLength - 4,
             &ResultLength) >= 0
        && *((_DWORD *)v33 + 1) == 3 )
      {
        NtClose(v10);
        sub_140785A2C(v7, *((unsigned int *)v33 + 2), v33 + 12, &v51);
      }
      else
      {
        NtClose(v10);
      }
      ExFreePoolWithTag(v32, 0);
      v0 = v44;
    }
    v34 = (unsigned __int8 *)&v51;
    v48 = v47;
    v35 = 8LL;
    v36 = HIDWORD(v47);
    v37 = v47;
    do
    {
      v38 = *v34++;
      v38 -= 23737705;
      v36 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v36 + v38), 21), 21), 21);
      v37 += v36 + v38;
      --v35;
    }
    while ( v35 );
    v48 = __PAIR64__(v36, v37);
    v47 = __PAIR64__(v36, v37);
LABEL_21:
    ++v7;
    v8 += 18;
  }
  while ( v7 < 5 );
  v17 = 5LL;
  v18 = (PVOID *)&unk_1406FB468;
  do
  {
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL);
    v5 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
    v21 = v20;
    if ( v5 )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v20, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    if ( !*v18 )
      sub_14054598C((UNICODE_STRING *)v18 - 1, v18);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v18 += 9;
    --v17;
  }
  while ( v17 );
  v23 = 5LL;
  if ( !v44 )
  {
    result = v52;
    if ( v52 != v47 )
    {
      result = v53;
      if ( v53 != v47 )
      {
        sub_14066A098(8507);
        v39 = &unk_1406FB430;
        v40 = (UNICODE_STRING *)&unk_1406FB458;
        do
        {
          v41 = *(void **)v39;
          v39[8] = 1;
          if ( v41 )
          {
            ObfDereferenceObjectWithTag(v41, 0x746C6644u);
            *(_QWORD *)v39 = 0LL;
          }
          v42 = (void *)*((_QWORD *)v39 + 1);
          if ( v42 )
          {
            MmUnmapViewInSystemSpace(v42);
            *((_QWORD *)v39 + 1) = 0LL;
          }
          v43 = (void *)*((_QWORD *)v39 + 2);
          if ( v43 )
          {
            ExFreePoolWithTag(v43, 0);
            *((_QWORD *)v39 + 2) = 0LL;
          }
          v39[6] = 0;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.ObjectName = v40;
          result = NtOpenKey(&KeyHandle, 2u, &ObjectAttributes);
          if ( result >= 0 )
          {
            NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406A17A8);
            result = NtClose(KeyHandle);
          }
          v40 = (UNICODE_STRING *)((char *)v40 + 72);
          v39 += 18;
          --v23;
        }
        while ( v23 );
      }
    }
  }
  if ( dword_1406FB450 == 1 || dword_1406FB498 == 1 || dword_1406FB4E0 == 1 || dword_1406FB528 == 1 )
    result = ExpTriggerFastCacheReeval();
  _InterlockedExchange(&ExpFastCacheFromRegistryPushed, 1);
  return result;
}
