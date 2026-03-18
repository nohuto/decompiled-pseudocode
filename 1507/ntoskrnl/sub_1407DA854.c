/*
 * XREFs of sub_1407DA854 @ 0x1407DA854
 * Callers:
 *     sub_1407DA410 @ 0x1407DA410 (sub_1407DA410.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     NtOpenKey @ 0x1404F5530 (NtOpenKey.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 *     sub_1405BC990 @ 0x1405BC990 (sub_1405BC990.c)
 *     sub_1406ED694 @ 0x1406ED694 (sub_1406ED694.c)
 *     ExpTriggerFastCacheReeval @ 0x1406EDB4C (ExpTriggerFastCacheReeval.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 */

void sub_1407DA854()
{
  char v0; // r14
  HANDLE v1; // rdi
  NTSTATUS v2; // eax
  __int64 v3; // r9
  HANDLE v4; // rdi
  __int64 *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // r8d
  int v9; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rax
  __int64 v12; // r9
  signed __int8 v13; // cf
  __int64 v14; // rdi
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  unsigned int v17; // r12d
  int *v18; // rsi
  __int64 v19; // r13
  NTSTATUS v20; // eax
  HANDLE v21; // rdi
  NTSTATUS v22; // eax
  unsigned __int8 *v23; // r9
  __int64 v24; // r10
  unsigned int v25; // r8d
  unsigned int v26; // edx
  int v27; // ecx
  unsigned __int8 *v28; // r9
  ULONG v29; // ecx
  char *PoolWithTag; // rax
  char *v31; // r15
  char *v32; // r14
  __int64 v33; // r10
  unsigned int v34; // edx
  unsigned int v35; // r8d
  int v36; // ecx
  _QWORD *v37; // r15
  unsigned int v38; // r14d
  _DWORD *v39; // rdi
  struct _KTHREAD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rsi
  struct _KTHREAD *v44; // rcx
  __int16 v45; // ax
  UNICODE_STRING *v46; // rsi
  void *v47; // rcx
  void *v48; // rcx
  void *v49; // rcx
  char v50; // [rsp+38h] [rbp-79h]
  ULONG ResultLength; // [rsp+3Ch] [rbp-75h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v53; // [rsp+48h] [rbp-69h]
  unsigned __int64 v54; // [rsp+50h] [rbp-61h]
  unsigned __int64 v55; // [rsp+58h] [rbp-59h]
  unsigned __int64 v56; // [rsp+60h] [rbp-51h]
  __int64 v57; // [rsp+68h] [rbp-49h] BYREF
  __int64 v58; // [rsp+70h] [rbp-41h]
  __int64 v59; // [rsp+78h] [rbp-39h]
  __int64 v60; // [rsp+80h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-29h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B8h] [rbp+7h] BYREF
  int v63; // [rsp+BCh] [rbp+Bh]
  int v64; // [rsp+C0h] [rbp+Fh]
  __int64 v65; // [rsp+C4h] [rbp+13h]
  __int64 v66; // [rsp+CCh] [rbp+1Bh]
  __int64 v67; // [rsp+D4h] [rbp+23h]

  v50 = 1;
  ExpFastCacheLock = 0LL;
  ExpFastCacheUpdateLock = 0LL;
  v0 = 1;
  if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_140722938) >= 0 )
  {
    v1 = KeyHandle;
    if ( NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1407FEEB0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v63 == 4
      && v64 == 4 )
    {
      ExpPackagesTableMaximumSize = v65;
      if ( (unsigned int)v65 < 0x400 )
        ExpPackagesTableMaximumSize = 1024;
    }
    if ( NtQueryValueKey(
           v1,
           (PUNICODE_STRING)&stru_1407FEED0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v63 == 4
      && v64 == 4 )
    {
      ExpProductLicensesTableMaximumSize = v65;
      if ( (unsigned int)v65 < 0x400 )
        ExpProductLicensesTableMaximumSize = 1024;
    }
    if ( NtQueryValueKey(
           v1,
           (PUNICODE_STRING)&stru_1407FEEE0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v63 == 4
      && v64 == 4 )
    {
      ExpFeatureLicensesTableMaximumSize = v65;
      if ( (unsigned int)v65 < 0x400 )
        ExpFeatureLicensesTableMaximumSize = 1024;
    }
    NtClose(v1);
  }
  if ( NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_140722968) >= 0 )
  {
    if ( NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_1407FEEC0,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v63 == 4
      && v64 == 4 )
    {
      dword_14077E060 = v65;
      if ( (unsigned int)v65 > 0xA8 )
        dword_14077E060 = 168;
    }
    NtClose(KeyHandle);
  }
  v2 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_140722908);
  v58 = 0LL;
  v59 = 0LL;
  v53 = 0LL;
  if ( v2 < 0 )
    goto LABEL_35;
  v4 = KeyHandle;
  if ( NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_140721B50,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x28u,
         &ResultLength) >= 0
    && v63 == 3
    && v64 == 24 )
  {
    v0 = 0;
    v60 = v65;
    v58 = v66;
    _InterlockedExchange64(&qword_14077EAD0, v65);
    v50 = 0;
    v59 = v67;
    if ( (unsigned __int64)_InterlockedCompareExchange64(&qword_14077EAD0, 0LL, 0LL) > 0x7FFFFFFFFFFFFFFFLL )
      _InterlockedExchange64(&qword_14077EAD0, 0LL);
    v55 = 0LL;
    v5 = &v60;
    v6 = 0;
    v7 = 8LL;
    v8 = 0;
    do
    {
      v9 = *(unsigned __int8 *)v5;
      v5 = (__int64 *)((char *)v5 + 1);
      v9 -= 23737705;
      v6 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v6 + v9), 21), 21), 21);
      v8 += v6 + v9;
      --v7;
    }
    while ( v7 );
    v4 = KeyHandle;
    v55 = __PAIR64__(v6, v8);
    v53 = __PAIR64__(v6, v8);
  }
  NtClose(v4);
  if ( v0 )
LABEL_35:
    _InterlockedExchange64(&qword_14077EAD0, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, v3);
  v13 = _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL);
  v14 = v11;
  if ( v13 )
    ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v11, (ULONG_PTR)&ExpFastCacheUpdateLock, v12);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  sub_1405BC990((UNICODE_STRING *)&stru_140721B40, (PVOID *)&qword_14077ED28);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
  KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v17 = 0;
  v18 = &dword_14077E480;
  v19 = 5LL;
  do
  {
    v57 = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)(v18 + 2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v20 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( v20 < 0 )
    {
      if ( v20 == -1073741772 )
        _InterlockedExchange(v18, 0);
    }
    else
    {
      v21 = KeyHandle;
      v22 = NtQueryValueKey(
              KeyHandle,
              (PUNICODE_STRING)&stru_140721A08,
              KeyValuePartialInformation,
              0LL,
              0,
              &ResultLength);
      if ( v22 != -1073741789 )
      {
        if ( v22 == -1073741772 )
        {
          v23 = (unsigned __int8 *)&v57;
          v56 = v53;
          v24 = 8LL;
          v25 = HIDWORD(v53);
          v26 = v53;
          do
          {
            v27 = *v23++;
            v27 -= 23737705;
            v25 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v25 + v27), 21), 21), 21);
            v26 += v25 + v27;
            --v24;
          }
          while ( v24 );
          v56 = __PAIR64__(v25, v26);
          v53 = __PAIR64__(v25, v26);
          _InterlockedExchange(v18, 0);
          v21 = KeyHandle;
        }
        goto LABEL_53;
      }
      if ( v0 )
      {
        NtDeleteValueKey(v21, (PUNICODE_STRING)&stru_140721A08);
LABEL_53:
        NtClose(v21);
        goto LABEL_69;
      }
      v29 = ResultLength + 4;
      if ( ResultLength + 4 < ResultLength )
      {
        ResultLength = -1;
        goto LABEL_53;
      }
      ResultLength += 4;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v29, 0x20534C53u);
      v31 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_53;
      v32 = PoolWithTag + 4;
      if ( NtQueryValueKey(
             v21,
             (PUNICODE_STRING)&stru_140721A08,
             KeyValuePartialInformation,
             PoolWithTag + 4,
             ResultLength - 4,
             &ResultLength) >= 0
        && *((_DWORD *)v32 + 1) == 3 )
      {
        NtClose(v21);
        sub_1407DB064(v17, *((unsigned int *)v32 + 2), v32 + 12, &v57);
      }
      else
      {
        NtClose(v21);
      }
      ExFreePoolWithTag(v31, 0);
      v0 = v50;
    }
    v28 = (unsigned __int8 *)&v57;
    v54 = v53;
    v33 = 8LL;
    v34 = HIDWORD(v53);
    v35 = v53;
    do
    {
      v36 = *v28++;
      v36 -= 23737705;
      v34 = __ROR4__(-23737705 * __ROR4__(-23737705 * __ROR4__(-23737705 * (v34 + v36), 21), 21), 21);
      v35 += v34 + v36;
      --v33;
    }
    while ( v33 );
    v54 = __PAIR64__(v34, v35);
    v53 = __PAIR64__(v34, v35);
LABEL_69:
    ++v17;
    v18 += 18;
  }
  while ( v17 < 5 );
  v37 = &unk_14077E498;
  v38 = 0;
  v39 = &unk_14077E460;
  do
  {
    v40 = KeGetCurrentThread();
    --v40->KernelApcDisable;
    v41 = KeAbPreAcquire((ULONG_PTR)&ExpFastCacheUpdateLock, 0LL, 0LL, (__int64)v28);
    v43 = v41;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpFastCacheUpdateLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpFastCacheUpdateLock, v41, (ULONG_PTR)&ExpFastCacheUpdateLock, v42);
    if ( v43 )
      *(_BYTE *)(v43 + 26) |= 1u;
    if ( !*v37 )
      sub_1405BC990((UNICODE_STRING *)((char *)&unk_14077E460 + 72 * v38 + 40), (PVOID *)&unk_14077E460 + 9 * v38 + 7);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpFastCacheUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpFastCacheUpdateLock);
    KeAbPostRelease((ULONG_PTR)&ExpFastCacheUpdateLock);
    v44 = KeGetCurrentThread();
    v45 = v44->KernelApcDisable + 1;
    v44->KernelApcDisable = v45;
    if ( !v45
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v44->ApcState.ApcListHead[0].Flink != &v44->152
      && !v44->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    ++v38;
    v37 += 9;
  }
  while ( v38 < 5 );
  if ( !v50 && v58 != v53 && v59 != v53 )
  {
    sub_1406ED694(8507);
    v46 = (UNICODE_STRING *)&unk_14077E488;
    do
    {
      v47 = *(void **)v39;
      v39[8] = 1;
      if ( v47 )
      {
        ObfDereferenceObjectWithTag(v47, 0x746C6644u);
        *(_QWORD *)v39 = 0LL;
      }
      v48 = (void *)*((_QWORD *)v39 + 1);
      if ( v48 )
      {
        MmUnmapViewInSystemSpace(v48);
        *((_QWORD *)v39 + 1) = 0LL;
      }
      v49 = (void *)*((_QWORD *)v39 + 2);
      if ( v49 )
      {
        ExFreePoolWithTag(v49, 0);
        *((_QWORD *)v39 + 2) = 0LL;
      }
      v39[6] = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = v46;
      if ( NtOpenKey(&KeyHandle, 2u, &ObjectAttributes) >= 0 )
      {
        NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&stru_140721A08);
        NtClose(KeyHandle);
      }
      v46 = (UNICODE_STRING *)((char *)v46 + 72);
      v39 += 18;
      --v19;
    }
    while ( v19 );
  }
  if ( dword_14077E480 == 1 || dword_14077E4C8 == 1 || dword_14077E510 == 1 || dword_14077E558 == 1 )
    ExpTriggerFastCacheReeval();
  _InterlockedExchange(&ExpFastCacheFromRegistryPushed, 1);
}
