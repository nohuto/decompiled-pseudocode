/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14049CC90
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1400EFD68 (PsReturnProcessPagedPoolQuota.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140524018 (PsChargeProcessPagedPoolQuota.c)
 */

void __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  char *v2; // r13
  size_t v3; // r12
  __int64 v4; // r15
  size_t v5; // r15
  void *v6; // rcx
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rdx
  unsigned __int64 v9; // rdi
  void *v10; // rcx
  size_t v11; // r14
  PVOID PoolWithTag; // rax
  ULONG_PTR v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rtt

  v2 = *(char **)(a1 + 168);
  v3 = *(unsigned __int16 *)(a1 + 224);
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 32) - 40LL;
  else
    v5 = 512LL;
  if ( v3 <= v5 )
  {
    if ( v2 )
      memmove((void *)(a1 + 264), v2, v3);
    v6 = *(void **)(a1 + 208);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x42456C41u);
      *(_QWORD *)(a1 + 208) = 0LL;
      v7 = *(_QWORD *)(a1 + 48);
      if ( v7 )
      {
        v8 = *(_QWORD *)(a1 + 216);
        if ( v8 + *(_QWORD *)(v7 + 1616) >= 0x1000 )
          PsReturnProcessPagedPoolQuota(v7, v8);
        else
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v7 + 1616), v8);
      }
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    return;
  }
  if ( v3 > 0xFFD7 )
    return;
  v9 = *(_QWORD *)(a1 + 216);
  if ( v3 > v9 + v5 )
  {
    v10 = *(void **)(a1 + 208);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x42456C41u);
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    v11 = v3 - v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 - v5, 0x42456C41u);
    *(_QWORD *)(a1 + 208) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = *(_QWORD *)(a1 + 48);
      if ( !v13 )
        return;
      if ( v9 + *(_QWORD *)(v13 + 1616) < 0x1000 )
        goto LABEL_20;
      goto LABEL_21;
    }
    *(_QWORD *)(a1 + 216) = v11;
    v14 = *(_QWORD *)(a1 + 48);
    if ( v14 )
    {
      v15 = v11 - v9;
      _m_prefetchw((const void *)(v14 + 1616));
      while ( 1 )
      {
        v16 = *(_QWORD *)(v14 + 1616);
        if ( v16 < v15 )
          break;
        v17 = *(_QWORD *)(v14 + 1616);
        if ( v17 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 1616), v16 - v15, v16) )
          goto LABEL_30;
      }
      if ( (int)PsChargeProcessPagedPoolQuota(v14, v15) < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0x42456C41u);
        *(_QWORD *)(a1 + 208) = 0LL;
        *(_QWORD *)(a1 + 216) = 0LL;
        v13 = *(_QWORD *)(a1 + 48);
        if ( !v13 )
          return;
        if ( v9 + *(_QWORD *)(v13 + 1616) < 0x1000 )
        {
LABEL_20:
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 1616), v9);
          return;
        }
LABEL_21:
        PsReturnProcessPagedPoolQuota(v13, v9);
        return;
      }
    }
  }
LABEL_30:
  if ( v2 )
  {
    memmove((void *)(a1 + 264), v2, v5);
    memmove(*(void **)(a1 + 208), &v2[v5], v3 - v5);
  }
}
