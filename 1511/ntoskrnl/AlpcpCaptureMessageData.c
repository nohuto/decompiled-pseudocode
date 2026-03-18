/*
 * XREFs of AlpcpCaptureMessageData @ 0x1404A7424
 * Callers:
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14047E3AC (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C8C8 (AlpcpChargePagedPoolQuota.c)
 */

__int64 __fastcall AlpcpCaptureMessageData(__int64 a1, size_t a2, __int64 a3)
{
  unsigned __int64 v6; // r15
  void *v7; // rcx
  size_t v8; // r12
  PVOID PoolWithTag; // rax
  struct _KPROCESS *v10; // rcx
  void *v12; // rcx
  struct _KPROCESS *v13; // rcx
  int v14; // r12d
  struct _KPROCESS *v15; // rcx
  __int64 v16; // rdx
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int128 v19; // xmm1

  if ( a2 <= 0x200 )
  {
    if ( a3 )
      memmove((void *)(a1 + 264), (const void *)a3, a2);
    v12 = *(void **)(a1 + 208);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x42456C41u);
      v13 = *(struct _KPROCESS **)(a1 + 48);
      *(_QWORD *)(a1 + 208) = 0LL;
      if ( v13 )
        AlpcpReleasePagedPoolQuota(v13, *(_QWORD *)(a1 + 216));
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    return 0LL;
  }
  if ( a2 > 0xFFD7 )
    return 2147483653LL;
  v6 = *(_QWORD *)(a1 + 216);
  if ( a2 <= v6 + 512 )
  {
LABEL_8:
    if ( a3 )
    {
      v16 = 4LL;
      v17 = (_OWORD *)(a1 + 264);
      v18 = (_OWORD *)a3;
      do
      {
        *v17 = *v18;
        v17[1] = v18[1];
        v17[2] = v18[2];
        v17[3] = v18[3];
        v17[4] = v18[4];
        v17[5] = v18[5];
        v17[6] = v18[6];
        v17 += 8;
        v19 = v18[7];
        v18 += 8;
        *(v17 - 1) = v19;
        --v16;
      }
      while ( v16 );
      memmove(*(void **)(a1 + 208), (const void *)(a3 + 512), a2 - 512);
    }
    return 0LL;
  }
  v7 = *(void **)(a1 + 208);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x42456C41u);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v8 = a2 - 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 - 512, 0x42456C41u);
  v10 = *(struct _KPROCESS **)(a1 + 48);
  *(_QWORD *)(a1 + 208) = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(a1 + 216) = v8;
    if ( v10 )
    {
      v14 = AlpcpChargePagedPoolQuota(v10, v8 - v6);
      if ( v14 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0x42456C41u);
        v15 = *(struct _KPROCESS **)(a1 + 48);
        *(_QWORD *)(a1 + 208) = 0LL;
        *(_QWORD *)(a1 + 216) = 0LL;
        AlpcpReleasePagedPoolQuota(v15, v6);
        return (unsigned int)v14;
      }
    }
    goto LABEL_8;
  }
  if ( v10 )
    AlpcpReleasePagedPoolQuota(v10, v6);
  return 3221225626LL;
}
