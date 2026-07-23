/*
 * XREFs of SepAddLuidToIndexEntry @ 0x14046AD50
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14046A840 (SepSetProcessUniqueAttribute.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001B168 (RtlClearAllBits.c)
 *     RtlInsertEntryHashTable @ 0x14002D070 (RtlInsertEntryHashTable.c)
 *     SepInitSingletonEntry @ 0x14002D19C (SepInitSingletonEntry.c)
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepExpandSingletonArrays @ 0x1401309EC (SepExpandSingletonArrays.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAddLuidToIndexEntry(__int64 *a1, unsigned __int64 *a2)
{
  PVOID v4; // r15
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rbp
  __int64 v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  _RTL_BITMAP *v12; // rsi
  ULONG ClearBitsAndSet; // r14d
  int v14; // edi
  ULONG_PTR v15; // r8
  volatile signed __int64 *v16; // rsi
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  ULONG v20; // r14d
  _RTL_DYNAMIC_HASH_TABLE *HashTable; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74446553u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)SeLuidToIndexMapping;
  v9 = KeAbPreAcquire(SeLuidToIndexMapping, 0LL, 0LL, v6);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (_RTL_BITMAP *)(SeLuidToIndexMapping + 16);
  HashTable = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(SeLuidToIndexMapping + 16), 1u, 0);
  if ( ClearBitsAndSet == -1 )
  {
    v20 = RtlNumberOfSetBits(v12) + 64;
    v4 = ExAllocatePoolWithTag(PagedPool, (unsigned __int64)v20 >> 3, 0x74446553u);
    if ( !v4 )
    {
LABEL_22:
      v14 = -1073741801;
LABEL_23:
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      goto LABEL_12;
    }
    v14 = SepExpandSingletonArrays();
    if ( v14 < 0 )
      goto LABEL_23;
    ExFreePoolWithTag(v12->Buffer, 0);
    v12->SizeOfBitMap = v20;
    v12->Buffer = (unsigned int *)v4;
    RtlClearAllBits(v12);
    RtlSetBits(v12, 0, v20 - 64);
    v14 = 0;
    ClearBitsAndSet = RtlFindClearBitsAndSet(v12, 1u, 0);
    v4 = 0LL;
  }
  else
  {
    v14 = 0;
  }
  PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
  PoolWithTag[1].Signature = ClearBitsAndSet;
  PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)*a1;
  v15 = *a1;
  if ( !*a1 )
    v15 = 1LL;
  if ( !RtlInsertEntryHashTable(HashTable, PoolWithTag, v15, 0LL) )
  {
    _bittestandreset((signed __int32 *)v12->Buffer, ClearBitsAndSet);
    goto LABEL_22;
  }
  SepInitSingletonEntry(ClearBitsAndSet, *a1);
  *a2 = PoolWithTag[1].Signature;
LABEL_12:
  v16 = (volatile signed __int64 *)SeLuidToIndexMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)SeLuidToIndexMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v16);
  KeAbPostRelease((ULONG_PTR)v16);
  v17 = KeGetCurrentThread();
  v18 = v17->KernelApcDisable + 1;
  v17->KernelApcDisable = v18;
  if ( !v18
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
    && !v17->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v14;
}
