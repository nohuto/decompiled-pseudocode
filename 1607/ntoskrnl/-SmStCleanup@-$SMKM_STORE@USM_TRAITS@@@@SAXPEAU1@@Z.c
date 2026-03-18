/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140002D74 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1403E3B50 (SmProcessCreateRequest.c)
 * Callees:
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003830 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14000387C (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140003BC4 (SmKmStoreHelperCleanup.c)
 *     SmAcquireReleaseCharges @ 0x140003C90 (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x140003DB8 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003FBC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14011EDE0 (SmKmStoreHelperWaitForCommand.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PspQueueApcSpecialApc @ 0x1403E5244 (PspQueueApcSpecialApc.c)
 *     SmKmFileInfoCleanup @ 0x140697DE0 (SmKmFileInfoCleanup.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  void *v2; // rcx
  ULONG_PTR v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v5; // al
  void *v6; // rdi
  void *v7; // rcx
  __int64 result; // rax
  PVOID *v9; // rdi
  _BYTE v10[48]; // [rsp+30h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 5861) |= 1u;
  if ( *(_QWORD *)(a1 + 6040) )
  {
    KeSetEvent((PRKEVENT)(a1 + 5992), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6040), Executive, 0, 0, 0LL);
  }
  v2 = *(void **)(a1 + 6040);
  if ( v2 )
    ObfDereferenceObjectWithTag(v2, 0x746C6644u);
  if ( *(_DWORD *)(a1 + 6128) )
    SmKmStoreHelperWaitForCommand(a1 + 6072, 0LL, 0LL, 0LL);
  if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6328) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6336), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6328), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6328), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 6424);
      if ( v3 )
        KiStackAttachProcess(v3);
      if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 && *(_QWORD *)(a1 + 6408) )
      {
        v9 = *(PVOID **)(a1 + 6408);
        if ( *v9 )
          PspQueueApcSpecialApc(*v9);
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
  KiLeaveCriticalRegionUnsafe(KeGetCurrentThread());
  if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 && *(_QWORD *)(a1 + 6424) )
    KiUnstackDetachProcess(v10, 0LL);
  v5 = *(_BYTE *)(a1 + 5860);
  if ( v5 )
  {
    if ( v5 == 1 )
      SmKmFileInfoCleanup(a1 + 6056);
  }
  else
  {
    v6 = *(void **)(a1 + 6056);
    if ( (*(_BYTE *)(a1 + 5861) & 4) != 0 )
    {
      v7 = *(void **)(a1 + 6064);
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      SmKmStoreHelperCleanup(a1 + 6072);
      SmKmStoreHelperCleanup(a1 + 6200);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  result = SmFpCleanup(a1 + 6448);
  if ( (*(_BYTE *)(a1 + 5861) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(unsigned int *)(a1 + 6048), 1LL, 1LL);
  return result;
}
