/*
 * XREFs of ExpWnfWriteStateData @ 0x14050395C
 * Callers:
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x1404FE7E0 (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // edi
  size_t v6; // r13
  const void *v7; // r12
  volatile signed __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rbx
  _DWORD *v13; // rdi
  __int32 i; // r14d
  void *v15; // rcx
  _KPROCESS *v17; // rcx
  int v18; // r12d
  _QWORD *PoolWithTag; // rdi
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdi
  _DWORD *v24; // [rsp+30h] [rbp-C8h]
  NTSTATUS v25; // [rsp+38h] [rbp-C0h]
  PVOID P; // [rsp+40h] [rbp-B8h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-90h]
  _BYTE v30[48]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-58h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v29 = a1;
  v25 = 0;
  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v31;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v24 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = KeAbPreAcquire(a1 + 80, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( a5 && *(_DWORD *)(a1 + 96) != v5 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    return 3221225473LL;
  }
  v13 = *(_DWORD **)(a1 + 88);
  if ( v13 == (_DWORD *)1 )
    v13 = 0LL;
  if ( v13 )
  {
    if ( v13[1] >= (unsigned int)v6 )
      goto LABEL_12;
  }
  else if ( !*(_QWORD *)(a1 + 104) && !(_DWORD)v6 )
  {
    goto LABEL_12;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || (v17 = *(_KPROCESS **)(a1 + 152), PsInitialSystemProcess == v17) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
    v24 = PoolWithTag;
  }
  else
  {
    if ( v17 == KeGetCurrentThread()->ApcState.Process )
    {
      v18 = 0;
    }
    else
    {
      v18 = 1;
      KiStackAttachProcess(v17, 0, (__int64)v30);
    }
    PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
    v24 = PoolWithTag;
    if ( v18 )
      KiUnstackDetachProcess((struct _KTHREAD *)v30, 0);
    v7 = a2;
  }
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *(_DWORD *)PoolWithTag = 1050884;
  *((_DWORD *)PoolWithTag + 1) = v6;
  v21 = KeAbPreAcquire(a1 + 80, 0LL, 0LL, v20);
  v23 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v21, a1 + 80, v22);
  if ( v23 )
    *(_BYTE *)(v23 + 26) |= 1u;
  v13 = *(_DWORD **)(a1 + 88);
  if ( v13 == (_DWORD *)1 )
    v13 = 0LL;
  if ( !v13 || v13[1] < (unsigned int)v6 )
    v13 = v24;
LABEL_12:
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( v13 )
  {
    memmove(v13 + 4, v7, v6);
    v13[2] = v6;
    v13[3] = i;
    v15 = *(void **)(a1 + 104);
    if ( v15 )
    {
      v25 = ZwSetValueKey(v15, &ValueName, 0, 3u, v13 + 3, v6 + 4);
      v15 = 0LL;
      if ( v25 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_23;
      }
    }
    if ( v13 == v24 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v13;
      v24 = v15;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 88) = 1LL;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 96), i);
LABEL_23:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( (unsigned __int64)P >= 2 )
    ExFreePoolWithTag(P, 0x20666E57u);
  if ( v24 )
    ExFreePoolWithTag(v24, 0x20666E57u);
  return (unsigned int)v25;
}
