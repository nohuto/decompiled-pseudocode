/*
 * XREFs of AlpcpCaptureMessageData @ 0x1404A01B8
 * Callers:
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14049FA0C (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AlpcpChargePagedPoolQuota @ 0x14040C5B4 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404ACBE0 (AlpcpReleasePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, char *a3)
{
  __int64 v3; // rdi
  size_t v7; // rdi
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // r15
  void *v12; // rcx
  size_t v13; // r12
  PVOID PoolWithTag; // rax
  __int64 v15; // rcx
  int v16; // r12d
  __int64 v17; // rcx

  v3 = *(_QWORD *)(a1 + 96);
  if ( v3 )
    v7 = *(_QWORD *)(v3 + 32) - 40LL;
  else
    v7 = 512LL;
  if ( a2 <= v7 )
  {
    if ( a3 )
      memmove((void *)(a1 + 272), a3, a2);
    v8 = *(void **)(a1 + 216);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x42456C41u);
      v9 = *(_QWORD *)(a1 + 48);
      *(_QWORD *)(a1 + 216) = 0LL;
      if ( v9 )
        AlpcpReleasePagedPoolQuota(v9, *(_QWORD *)(a1 + 224));
      *(_QWORD *)(a1 + 224) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v11 = *(_QWORD *)(a1 + 224);
  if ( a2 <= v11 + v7 )
  {
LABEL_23:
    if ( a3 )
    {
      memmove((void *)(a1 + 272), a3, v7);
      memmove(*(void **)(a1 + 216), &a3[v7], a2 - v7);
    }
    return 0LL;
  }
  v12 = *(void **)(a1 + 216);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x42456C41u);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  v13 = a2 - v7;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 - v7, 0x42456C41u);
  v15 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 216) = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(a1 + 224) = v13;
    if ( v15 )
    {
      v16 = AlpcpChargePagedPoolQuota(v15, v13 - v11);
      if ( v16 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 216), 0x42456C41u);
        v17 = *(_QWORD *)(a1 + 48);
        *(_QWORD *)(a1 + 216) = 0LL;
        *(_QWORD *)(a1 + 224) = 0LL;
        AlpcpReleasePagedPoolQuota(v17, v11);
        return (unsigned int)v16;
      }
    }
    goto LABEL_23;
  }
  if ( v15 )
    AlpcpReleasePagedPoolQuota(v15, v11);
  return 3221225626LL;
}
