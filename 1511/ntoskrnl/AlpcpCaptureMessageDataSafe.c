/*
 * XREFs of AlpcpCaptureMessageDataSafe @ 0x14042BA70
 * Callers:
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1403F4A84 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpChargePagedPoolQuota @ 0x14047C8C8 (AlpcpChargePagedPoolQuota.c)
 */

void __fastcall AlpcpCaptureMessageDataSafe(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  void *v4; // rcx
  struct _KPROCESS *v5; // rcx
  unsigned __int64 v6; // r14
  _OWORD *v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // r15
  PVOID PoolWithTag; // rax
  struct _KPROCESS *v13; // rcx
  __int64 v14; // rcx

  v2 = *(_QWORD *)(a1 + 168);
  v3 = *(unsigned __int16 *)(a1 + 224);
  if ( v3 <= 0x200 )
  {
    if ( v2 )
      memmove((void *)(a1 + 264), (const void *)v2, *(unsigned __int16 *)(a1 + 224));
    v4 = *(void **)(a1 + 208);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x42456C41u);
      *(_QWORD *)(a1 + 208) = 0LL;
      v5 = *(struct _KPROCESS **)(a1 + 48);
      if ( v5 )
        AlpcpReleasePagedPoolQuota(v5, *(_QWORD *)(a1 + 216));
      *(_QWORD *)(a1 + 216) = 0LL;
    }
    return;
  }
  if ( v3 > 0xFFD7 )
    return;
  v6 = *(_QWORD *)(a1 + 216);
  if ( v3 <= v6 + 512 )
    goto LABEL_10;
  v10 = *(void **)(a1 + 208);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x42456C41u);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v11 = v3 - 512;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3 - 512, 0x42456C41u);
  *(_QWORD *)(a1 + 208) = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_QWORD *)(a1 + 216) = v11;
    v14 = *(_QWORD *)(a1 + 48);
    if ( v14 && (int)AlpcpChargePagedPoolQuota(v14, v11 - v6) < 0 )
    {
      ExFreePoolWithTag(*(PVOID *)(a1 + 208), 0x42456C41u);
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_QWORD *)(a1 + 216) = 0LL;
      AlpcpReleasePagedPoolQuota(*(struct _KPROCESS **)(a1 + 48), v6);
      return;
    }
LABEL_10:
    if ( v2 )
    {
      v7 = (_OWORD *)(a1 + 264);
      v8 = (_OWORD *)v2;
      v9 = 4LL;
      do
      {
        *v7 = *v8;
        v7[1] = v8[1];
        v7[2] = v8[2];
        v7[3] = v8[3];
        v7[4] = v8[4];
        v7[5] = v8[5];
        v7[6] = v8[6];
        v7 += 8;
        *(v7 - 1) = v8[7];
        v8 += 8;
        --v9;
      }
      while ( v9 );
      memmove(*(void **)(a1 + 208), (const void *)(v2 + 512), v3 - 512);
    }
    return;
  }
  v13 = *(struct _KPROCESS **)(a1 + 48);
  if ( v13 )
    AlpcpReleasePagedPoolQuota(v13, v6);
}
