/*
 * XREFs of SepAddLuidToIndexEntry @ 0x1403C5868
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x1403C5684 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x140006C90 (RtlInsertEntryHashTable.c)
 *     SepInitSingletonEntry @ 0x140006DD0 (SepInitSingletonEntry.c)
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400CFBA4 (SepCleanupMarkedForDeletionEntries.c)
 *     SepExpandSingletonArrays @ 0x1400F3EB4 (SepExpandSingletonArrays.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, unsigned __int64 *a2, _RTL_DYNAMIC_HASH_TABLE_ENTRY **a3)
{
  PVOID v3; // r15
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rbp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdi
  _RTL_BITMAP *v11; // r14
  ULONG ClearBitsAndSet; // esi
  ULONG_PTR v13; // r8
  int v14; // edi
  unsigned __int64 Signature; // rax
  volatile signed __int64 *v16; // rsi
  ULONG v18; // esi
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+70h] [rbp+18h]

  v3 = 0LL;
  *a3 = 0LL;
  PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x74446553u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)SeLuidToIndexMapping;
  v9 = KeAbPreAcquire(SeLuidToIndexMapping, 0LL, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = (_RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    SepCleanupMarkedForDeletionEntries();
    ClearBitsAndSet = RtlFindClearBitsAndSet(v11, 1u, 0);
    if ( ClearBitsAndSet == -1 )
    {
      v18 = RtlNumberOfSetBits(v11) + 64;
      v3 = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v18 >> 3, 0x74446553u);
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
      v11->SizeOfBitMap = v18;
      v11->Buffer = (unsigned int *)v3;
      RtlClearAllBits(v11);
      RtlSetBits(v11, 0, v18 - 64);
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v14;
}
