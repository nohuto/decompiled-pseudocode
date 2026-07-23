/*
 * XREFs of ExpInitFastCache @ 0x1407B5348
 * Callers:
 *     ExInitLicenseData @ 0x1407B505C (ExInitLicenseData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExpLicUpdateChecksum @ 0x14008795C (ExpLicUpdateChecksum.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     ExpObtainFastCacheKeyBody @ 0x14057AB9C (ExpObtainFastCacheKeyBody.c)
 *     sub_1406AF8BC @ 0x1406AF8BC (sub_1406AF8BC.c)
 *     ExpTriggerFastCacheReeval @ 0x1406AFC40 (ExpTriggerFastCacheReeval.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 */

int ExpInitFastCache()
{
  char v0; // r14
  NTSTATUS v1; // eax
  HANDLE v2; // rdi
  __int64 v3; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r12d
  int *v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  HANDLE v15; // rdi
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r14
  PVOID *v19; // rdi
  struct _KTHREAD *v20; // rax
  _BYTE *v21; // rax
  _BYTE *v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int result; // eax
  __int64 v27; // r13
  HANDLE v28; // rdi
  ULONG v29; // ecx
  char *PoolWithTag; // rax
  char *v31; // r15
  char *v32; // r14
  _DWORD *v33; // rdi
  UNICODE_STRING *v34; // rsi
  void *v35; // rcx
  void *v36; // rcx
  void *v37; // rcx
  char v38; // [rsp+38h] [rbp-69h]
  ULONG ResultLength; // [rsp+3Ch] [rbp-65h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  __int64 v41; // [rsp+48h] [rbp-59h] BYREF
  __int64 v42; // [rsp+50h] [rbp-51h] BYREF
  __int64 v43; // [rsp+58h] [rbp-49h]
  __int64 v44; // [rsp+60h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-39h] BYREF
  char v46[8]; // [rsp+98h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp-1h] BYREF
  int v48; // [rsp+A4h] [rbp+3h]
  int v49; // [rsp+A8h] [rbp+7h]
  __int64 v50; // [rsp+ACh] [rbp+Bh]
  __int64 v51; // [rsp+B4h] [rbp+13h]
  __int64 v52; // [rsp+BCh] [rbp+1Bh]

  v38 = 1;
  ExpFastCacheLock = 0LL;
  ExpFastCacheUpdateLock = 0LL;
  v0 = 1;
  if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1406EA8E0) >= 0 )
  {
    v28 = KeyHandle;
    if ( NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1407D5970,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v48 == 4
      && v49 == 4 )
    {
      ExpPackagesTableMaximumSize = v50;
      if ( (unsigned int)v50 < 0x400 )
        ExpPackagesTableMaximumSize = 1024;
    }
    if ( NtQueryValueKey(
           v28,
           (PUNICODE_STRING)&stru_1407D59A0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v48 == 4
      && v49 == 4 )
    {
      ExpProductLicensesTableMaximumSize = v50;
      if ( (unsigned int)v50 < 0x400 )
        ExpProductLicensesTableMaximumSize = 1024;
    }
    if ( NtQueryValueKey(
           v28,
           (PUNICODE_STRING)&stru_1407D5990,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v48 == 4
      && v49 == 4 )
    {
      ExpFeatureLicensesTableMaximumSize = v50;
      if ( (unsigned int)v50 < 0x400 )
        ExpFeatureLicensesTableMaximumSize = 1024;
    }
    NtClose(v28);
  }
  if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1406EA8B0) >= 0 )
  {
    if ( NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1407D5980,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v48 == 4
      && v49 == 4 )
    {
      dword_140747058 = v50;
      if ( (unsigned int)v50 > 0xA8 )
        dword_140747058 = 168;
    }
    NtClose(KeyHandle);
  }
  v1 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_1406EA940);
  v43 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  if ( v1 < 0 )
    goto LABEL_6;
  v2 = KeyHandle;
  if ( NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_1406E9A78,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x28u,
         &ResultLength) >= 0
    && v48 == 3
    && v49 == 24 )
  {
    v0 = 0;
    v43 = v51;
    v44 = v52;
    _InterlockedExchange64(&qword_140747BD8, v50);
    v38 = 0;
    if ( (unsigned __int64)_InterlockedCompareExchange64(&qword_140747BD8, 0LL, 0LL) > 0x7FFFFFFFFFFFFFFFLL )
      _InterlockedExchange64(&qword_140747BD8, 0LL);
    ExpLicUpdateChecksum((__int64)v46, v3, &v41);
    v2 = KeyHandle;
  }
  NtClose(v2);
  if ( v0 )
LABEL_6:
    _InterlockedExchange64(&qword_140747BD8, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v5, (ULONG_PTR)&ExpFastCacheUpdateLock);
  if ( v7 )
    v7[26] |= 1u;
  ExpObtainFastCacheKeyBody((UNICODE_STRING *)&stru_1406E9A88, (PVOID *)&qword_140747E48);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  v11 = 0;
  v12 = &dword_1407474C0;
  do
  {
    v42 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v12 + 2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v13 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( v13 < 0 )
    {
      if ( v13 == -1073741772 )
        _InterlockedExchange(v12, 0);
    }
    else
    {
      v15 = KeyHandle;
      v16 = NtQueryValueKey(
              KeyHandle,
              (PUNICODE_STRING)&stru_1406E9910,
              KeyValuePartialInformation,
              0LL,
              0,
              &ResultLength);
      if ( v16 != -1073741789 )
      {
        if ( v16 == -1073741772 )
        {
          ExpLicUpdateChecksum((__int64)&v42, v17, &v41);
          _InterlockedExchange(v12, 0);
          v15 = KeyHandle;
        }
        goto LABEL_18;
      }
      if ( v0 )
      {
        NtDeleteValueKey(v15, (PUNICODE_STRING)&stru_1406E9910);
LABEL_18:
        NtClose(v15);
        goto LABEL_19;
      }
      v29 = ResultLength + 4;
      if ( ResultLength + 4 < ResultLength )
      {
        ResultLength = -1;
        goto LABEL_18;
      }
      ResultLength += 4;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v29, 0x20534C53u);
      v31 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_18;
      v32 = PoolWithTag + 4;
      if ( NtQueryValueKey(
             v15,
             (PUNICODE_STRING)&stru_1406E9910,
             KeyValuePartialInformation,
             PoolWithTag + 4,
             ResultLength - 4,
             &ResultLength) >= 0
        && *((_DWORD *)v32 + 1) == 3 )
      {
        NtClose(v15);
        sub_1407D22C0(v11, *((unsigned int *)v32 + 2), v32 + 12, &v42);
      }
      else
      {
        NtClose(v15);
      }
      ExFreePoolWithTag(v31, 0);
      v0 = v38;
    }
    ExpLicUpdateChecksum((__int64)&v42, v14, &v41);
LABEL_19:
    ++v11;
    v12 += 18;
  }
  while ( v11 < 5 );
  v18 = 5LL;
  v19 = (PVOID *)&unk_1407474D8;
  do
  {
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
    v22 = v21;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v21, (ULONG_PTR)&ExpFastCacheUpdateLock);
    if ( v22 )
      v22[26] |= 1u;
    if ( !*v19 )
      ExpObtainFastCacheKeyBody((UNICODE_STRING *)v19 - 1, v19);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
    v19 += 9;
    --v18;
  }
  while ( v18 );
  v27 = 5LL;
  if ( !v38 )
  {
    result = v43;
    if ( v43 != v41 )
    {
      result = v44;
      if ( v44 != v41 )
      {
        sub_1406AF8BC(8507);
        v33 = &unk_1407474A0;
        v34 = (UNICODE_STRING *)&unk_1407474C8;
        do
        {
          v35 = *(void **)v33;
          v33[8] = 1;
          if ( v35 )
          {
            ObfDereferenceObjectWithTag(v35, 0x746C6644u);
            *(_QWORD *)v33 = 0LL;
          }
          v36 = (void *)*((_QWORD *)v33 + 1);
          if ( v36 )
          {
            MmUnmapViewInSystemSpace(v36);
            *((_QWORD *)v33 + 1) = 0LL;
          }
          v37 = (void *)*((_QWORD *)v33 + 2);
          if ( v37 )
          {
            ExFreePoolWithTag(v37, 0);
            *((_QWORD *)v33 + 2) = 0LL;
          }
          v33[6] = 0;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          ObjectAttributes.ObjectName = v34;
          result = NtOpenKey(&KeyHandle, 2u, &ObjectAttributes);
          if ( result >= 0 )
          {
            NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&stru_1406E9910);
            result = NtClose(KeyHandle);
          }
          v34 = (UNICODE_STRING *)((char *)v34 + 72);
          v33 += 18;
          --v27;
        }
        while ( v27 );
      }
    }
  }
  if ( dword_1407474C0 == 1 || dword_140747508 == 1 || dword_140747550 == 1 || dword_140747598 == 1 )
    result = ExpTriggerFastCacheReeval();
  _InterlockedExchange(&ExpFastCacheFromRegistryPushed, 1);
  return result;
}
