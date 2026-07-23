/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x1406D8520
 * Callers:
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x14002D070 (RtlInsertEntryHashTable.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x14010E610 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x140438C64 (RtlCopySid.c)
 *     SepFindSharedSidEntry @ 0x1406D8498 (SepFindSharedSidEntry.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(PSID *a1, char *a2, unsigned int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r12d
  unsigned __int64 *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rsi
  signed __int64 v14; // rax
  signed __int64 v15; // r14
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v18; // r13d
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v20; // rbp
  __int64 v21; // rax
  ULONG_PTR v22; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v23; // rdi
  __int64 v24; // rax
  volatile signed __int64 *v25; // rdi
  struct _KTHREAD *v26; // rdx
  __int16 v27; // ax
  signed __int64 v30; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  v9 = (unsigned __int64 *)g_SepSidMapping;
  v10 = KeAbPreAcquire(g_SepSidMapping, 0LL, 0LL, a4);
  v12 = v10;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
    ExfAcquirePushLockExclusiveEx(v9, v10, (ULONG_PTR)v9, v11);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v13 = 0LL;
  if ( !a3 )
    goto LABEL_27;
  v14 = (char *)a1 - a2;
  v30 = (char *)a1 - a2;
  v15 = a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v15 + 8) = *(_DWORD *)((char *)a1 + v15 + v14 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*a1);
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = SharedSidEntry[1].Linkage.Blink;
      goto LABEL_16;
    }
    v18 = ((4 * *((unsigned __int8 *)*a1 + 1) + 51) & 0xFFFFFFFC) + 4 * *((unsigned __int8 *)*a1 + 1) + 48;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v18, 0x73536553u);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[1].Signature;
    RtlCopySid(v18 - 40, &PoolWithTag[1].Signature, *a1);
    v21 = (unsigned int)*((unsigned __int8 *)*a1 + 1) - 1;
    v22 = *((unsigned int *)*a1 + v21 + 2);
    if ( !*((_DWORD *)*a1 + v21 + 2) )
      v22 = 1LL;
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v20, v22, 0LL) )
    {
      v8 = -1073741823;
      ExFreePoolWithTag(v20, 0x73536553u);
      goto LABEL_20;
    }
    Blink = v20[1].Linkage.Blink;
    v8 = 0;
LABEL_16:
    *(PSID *)((char *)a1 + v15) = Blink;
    v13 = (unsigned int)(v13 + 1);
    v14 = v30;
    a1 += 2;
    if ( (unsigned int)v13 >= a3 )
      goto LABEL_27;
  }
  v8 = -1073741801;
LABEL_20:
  if ( (_DWORD)v13 )
  {
    do
    {
      v23 = SepFindSharedSidEntry(*(_DWORD **)a2);
      v24 = _InterlockedDecrement64((volatile signed __int64 *)&v23[1]);
      if ( v24 <= 0 )
      {
        if ( v24 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v23, 0LL) )
          ExFreePoolWithTag(v23, 0);
      }
      a2 += 16;
      --v13;
    }
    while ( v13 );
  }
LABEL_27:
  v25 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v25);
  KeAbPostRelease((ULONG_PTR)v25);
  v26 = KeGetCurrentThread();
  v27 = v26->KernelApcDisable + 1;
  v26->KernelApcDisable = v27;
  if ( !v27
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v26->ApcState.ApcListHead[0].Flink != &v26->152
    && !v26->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v8;
}
