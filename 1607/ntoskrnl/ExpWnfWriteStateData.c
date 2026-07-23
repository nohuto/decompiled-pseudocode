/*
 * XREFs of ExpWnfWriteStateData @ 0x140462258
 * Callers:
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x1403F539C (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfWriteStateData(__int64 a1, const void *a2, unsigned int a3, int a4, int a5)
{
  size_t v6; // r13
  const void *v7; // r12
  volatile signed __int64 *v9; // r14
  _BYTE *v10; // rax
  _BYTE *v11; // rbx
  _DWORD *v12; // rdi
  __int32 i; // r14d
  void *v14; // rcx
  _KPROCESS *v16; // rcx
  int v17; // r12d
  _QWORD *PoolWithTag; // rdi
  _BYTE *v19; // rax
  _BYTE *v20; // rdi
  _DWORD *v21; // [rsp+30h] [rbp-C8h]
  NTSTATUS v22; // [rsp+38h] [rbp-C0h]
  PVOID P; // [rsp+40h] [rbp-B8h]
  UNICODE_STRING ValueName; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-90h]
  _BYTE v27[48]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-58h] BYREF

  v6 = a3;
  v7 = a2;
  v26 = a1;
  v22 = 0;
  *(_DWORD *)&ValueName.Length = 2228224;
  ValueName.Buffer = (wchar_t *)&v28;
  if ( *(_QWORD *)(a1 + 104) )
    ExpWnfComposeValueName(*(_QWORD *)(a1 + 40), &ValueName);
  v21 = 0LL;
  P = 0LL;
  v9 = (volatile signed __int64 *)(a1 + 80);
  v10 = (_BYTE *)KeAbPreAcquire(a1 + 80, 0LL, 0);
  v11 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v10, a1 + 80);
  if ( v11 )
    v11[26] |= 1u;
  if ( a5 && *(_DWORD *)(a1 + 96) != a4 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
    KeAbPostRelease(a1 + 80);
    return 3221225473LL;
  }
  v12 = *(_DWORD **)(a1 + 88);
  if ( v12 == (_DWORD *)1 )
    v12 = 0LL;
  if ( v12 )
  {
    if ( v12[1] >= (unsigned int)v6 )
      goto LABEL_12;
  }
  else if ( !*(_QWORD *)(a1 + 104) && !(_DWORD)v6 )
  {
    goto LABEL_12;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 80));
  KeAbPostRelease(a1 + 80);
  if ( ((*(_DWORD *)(a1 + 40) >> 4) & 3) != 3 || (v16 = *(_KPROCESS **)(a1 + 152), PsInitialSystemProcess == v16) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v6 + 16), 0x20666E57u);
    v21 = PoolWithTag;
  }
  else
  {
    if ( v16 == KeGetCurrentThread()->ApcState.Process )
    {
      v17 = 0;
    }
    else
    {
      v17 = 1;
      KiStackAttachProcess(v16, 0, (__int64)v27);
    }
    PoolWithTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)(v6 + 16), 0x20666E57u);
    v21 = PoolWithTag;
    if ( v17 )
      KiUnstackDetachProcess((struct _KTHREAD *)v27, 0);
    v7 = a2;
  }
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *(_DWORD *)PoolWithTag = 1050884;
  *((_DWORD *)PoolWithTag + 1) = v6;
  v19 = (_BYTE *)KeAbPreAcquire(a1 + 80, 0LL, 0);
  v20 = v19;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v19, a1 + 80);
  if ( v20 )
    v20[26] |= 1u;
  v12 = *(_DWORD **)(a1 + 88);
  if ( v12 == (_DWORD *)1 )
    v12 = 0LL;
  if ( !v12 || v12[1] < (unsigned int)v6 )
    v12 = v21;
LABEL_12:
  for ( i = *(_DWORD *)(a1 + 96) + 1; !i; i = 1 )
    ;
  if ( v12 )
  {
    memmove(v12 + 4, v7, v6);
    v12[2] = v6;
    v12[3] = i;
    v14 = *(void **)(a1 + 104);
    if ( v14 )
    {
      v22 = ZwSetValueKey(v14, &ValueName, 0, 3u, v12 + 3, v6 + 4);
      v14 = 0LL;
      if ( v22 < 0 )
      {
        P = *(PVOID *)(a1 + 88);
        *(_QWORD *)(a1 + 88) = 0LL;
        goto LABEL_23;
      }
    }
    if ( v12 == v21 )
    {
      P = *(PVOID *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = v12;
      v21 = v14;
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
  if ( v21 )
    ExFreePoolWithTag(v21, 0x20666E57u);
  return (unsigned int)v22;
}
