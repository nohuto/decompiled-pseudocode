/*
 * XREFs of SepAddLuidToIndexEntry @ 0x14046D1AC
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14046D098 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     SepInitSingletonEntry @ 0x14007CF24 (SepInitSingletonEntry.c)
 *     RtlInsertEntryHashTable @ 0x14007D02C (RtlInsertEntryHashTable.c)
 *     RtlClearAllBits @ 0x1400829DC (RtlClearAllBits.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140091690 (SepCleanupMarkedForDeletionEntries.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SepExpandSingletonArrays @ 0x14011258C (SepExpandSingletonArrays.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, unsigned __int64 *a2, _RTL_DYNAMIC_HASH_TABLE_ENTRY **a3)
{
  PVOID v3; // r15
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rsi
  _BYTE *v9; // rax
  _BYTE *v10; // rdi
  _RTL_BITMAP *v11; // r14
  ULONG ClearBitsAndSet; // esi
  ULONG_PTR v13; // r8
  int v14; // edi
  unsigned __int64 Signature; // rax
  volatile signed __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  ULONG v21; // esi
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  v3 = 0LL;
  *a3 = 0LL;
  PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x74446553u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)SeLuidToIndexMapping;
  v9 = (_BYTE *)KeAbPreAcquire(SeLuidToIndexMapping, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    v10[26] |= 1u;
  v11 = (_RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v11, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v21 = RtlNumberOfSetBits(v11) + 64;
      v3 = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v21 >> 3, 0x74446553u);
      if ( !v3 )
      {
LABEL_21:
        v14 = -1073741801;
LABEL_22:
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( v3 )
          ExFreePoolWithTag(v3, 0);
        goto LABEL_11;
      }
      v14 = SepExpandSingletonArrays();
      if ( v14 < 0 )
        goto LABEL_22;
      ExFreePoolWithTag(v11->Buffer, 0);
      v11->SizeOfBitMap = v21;
      v11->Buffer = (unsigned int *)v3;
      RtlClearAllBits(v11);
      RtlSetBits(v11, 0, v21 - 64);
      ClearBitsAndSet = RtlFindClearBitsAndSet(v11, 1u, 0);
      v3 = 0LL;
    }
  }
  PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
  PoolWithTag[1].Signature = ClearBitsAndSet;
  PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)*a1;
  LOBYTE(PoolWithTag[2].Linkage.Flink) = 0;
  v13 = *a1;
  if ( !*a1 )
    v13 = 1LL;
  if ( !RtlInsertEntryHashTable(HashTable, PoolWithTag, v13, 0LL) )
  {
    _bittestandreset((signed __int32 *)v11->Buffer, ClearBitsAndSet);
    goto LABEL_21;
  }
  v14 = 0;
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  Signature = PoolWithTag[1].Signature;
  *a3 = PoolWithTag;
  *a2 = Signature;
LABEL_11:
  v16 = (volatile signed __int64 *)SeLuidToIndexMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  KeAbPostRelease((ULONG_PTR)v16);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v17, v18, v19);
  return (unsigned int)v14;
}
