/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14044B480
 * Callers:
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     AlpcpChargePagedPoolQuota @ 0x14040C5B4 (AlpcpChargePagedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1404ACBE0 (AlpcpReleasePagedPoolQuota.c)
 */

void __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  char *v2; // r15
  size_t v3; // rsi
  __int64 v4; // rdi
  size_t v5; // rdi
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r12
  void *v9; // rcx
  size_t v10; // r13
  PVOID PoolWithTag; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx

  v2 = *(char **)(a1 + 176);
  v3 = *(unsigned __int16 *)(a1 + 232);
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 32) - 40LL;
  else
    v5 = 512LL;
  if ( v3 <= v5 )
  {
    if ( v2 )
      memmove((void *)(a1 + 272), v2, v3);
    v6 = *(void **)(a1 + 216);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x42456C41u);
      *(_QWORD *)(a1 + 216) = 0LL;
      v7 = *(_QWORD *)(a1 + 48);
      if ( v7 )
        AlpcpReleasePagedPoolQuota(v7, *(_QWORD *)(a1 + 224));
      *(_QWORD *)(a1 + 224) = 0LL;
    }
    return;
  }
  if ( v3 > 0xFFD7 )
    return;
  v8 = *(_QWORD *)(a1 + 224);
  if ( v3 > v8 + v5 )
  {
    v9 = *(void **)(a1 + 216);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x42456C41u);
      *(_QWORD *)(a1 + 224) = 0LL;
    }
    v10 = v3 - v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 - v5, 0x42456C41u);
    *(_QWORD *)(a1 + 216) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = *(_QWORD *)(a1 + 48);
      if ( v12 )
        AlpcpReleasePagedPoolQuota(v12, v8);
      return;
    }
    *(_QWORD *)(a1 + 224) = v10;
    v13 = *(_QWORD *)(a1 + 48);
    if ( v13 && (int)AlpcpChargePagedPoolQuota(v13, v10 - v8) < 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 216), 0x42456C41u);
      *(_QWORD *)(a1 + 216) = 0LL;
      *(_QWORD *)(a1 + 224) = 0LL;
      AlpcpReleasePagedPoolQuota(*(_QWORD *)(a1 + 48), v8);
      return;
    }
  }
  if ( v2 )
  {
    memmove((void *)(a1 + 272), v2, v5);
    memmove(*(void **)(a1 + 216), &v2[v5], v3 - v5);
  }
}
