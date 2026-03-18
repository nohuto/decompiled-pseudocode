/*
 * XREFs of AlpcpCaptureMessageData @ 0x140523318
 * Callers:
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x140471338 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140524018 (PsChargeProcessPagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, char *a3)
{
  __int64 v3; // rsi
  size_t v7; // rsi
  void *v8; // rcx
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rdx
  ULONG_PTR v12; // rdi
  void *v13; // rcx
  size_t v14; // r15
  PVOID PoolWithTag; // rax
  ULONG_PTR v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r15
  __int64 v19; // rtt
  unsigned __int64 v20; // rax
  int v21; // r15d
  ULONG_PTR v22; // rcx

  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
    v7 = *(_QWORD *)(v3 + 32) - 40LL;
  else
    v7 = 512LL;
  if ( a2 <= v7 )
  {
    if ( a3 )
      memmove((void *)(a1 + 264), a3, a2);
    v8 = *(void **)(a1 + 208);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x42456C41u);
      v9 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 208) = 0LL;
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 216);
        if ( v10 + *(_QWORD *)(v9 + 1616) >= 0x1000 )
          PsReturnProcessPagedPoolQuota(v9, v10);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 1616), v10);
      }
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v12 = *(_QWORD *)(a1 + 216);
  if ( a2 <= v12 + v7 )
    goto LABEL_36;
  v13 = *(void **)(a1 + 208);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x42456C41u);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v14 = a2 - v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 - v7, 0x42456C41u);
  *(_QWORD *)(a1 + 208) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = *(_QWORD *)(a1 + 48);
    if ( v16 )
    {
      if ( v12 + *(_QWORD *)(v16 + 1616) >= 0x1000 )
        PsReturnProcessPagedPoolQuota(v16, v12);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 1616), v12);
    }
    return 3221225626LL;
  }
  v17 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 216) = v14;
  if ( !v17 )
    goto LABEL_36;
  v18 = v14 - v12;
  _m_prefetchw((const void *)(v17 + 1616));
  do
  {
    v20 = *(_QWORD *)(v17 + 1616);
    if ( v20 < v18 )
    {
      v21 = PsChargeProcessPagedPoolQuota(v17, v18);
      goto LABEL_29;
    }
    v19 = *(_QWORD *)(v17 + 1616);
  }
  while ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 1616), v20 - v18, v20) );
  v21 = 0;
LABEL_29:
  if ( v21 >= 0 )
  {
LABEL_36:
    if ( a3 )
    {
      memmove((void *)(a1 + 264), a3, v7);
      memmove(*(void **)(a1 + 208), &a3[v7], a2 - v7);
    }
    return 0LL;
  }
  ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0x42456C41u);
  v22 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  if ( v22 )
  {
    if ( v12 + *(_QWORD *)(v22 + 1616) >= 0x1000 )
      PsReturnProcessPagedPoolQuota(v22, v12);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1616), v12);
  }
  return (unsigned int)v21;
}
