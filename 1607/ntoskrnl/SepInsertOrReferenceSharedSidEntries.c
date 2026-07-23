/*
 * XREFs of SepInsertOrReferenceSharedSidEntries @ 0x140695E5C
 * Callers:
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlInsertEntryHashTable @ 0x14007D02C (RtlInsertEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x14009187C (RtlRemoveEntryHashTable.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCopySid @ 0x14041154C (RtlCopySid.c)
 *     SepFindSharedSidEntry @ 0x140695DD4 (SepFindSharedSidEntry.c)
 */

__int64 __fastcall SepInsertOrReferenceSharedSidEntries(PSID *a1, char *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // r12d
  unsigned __int64 *v8; // rbp
  _BYTE *v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // r14
  PRTL_DYNAMIC_HASH_TABLE_ENTRY SharedSidEntry; // rax
  struct _LIST_ENTRY *Blink; // rax
  unsigned int v16; // r13d
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *PoolWithTag; // rax
  _RTL_DYNAMIC_HASH_TABLE_ENTRY *v18; // rbp
  __int64 v19; // rax
  ULONG_PTR v20; // r8
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v21; // rdi
  __int64 v22; // rax
  volatile signed __int64 *v23; // rdi
  signed __int64 v26; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)g_SepSidMapping;
  v9 = (_BYTE *)KeAbPreAcquire(g_SepSidMapping, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    v10[26] |= 1u;
  v11 = 0LL;
  if ( !a3 )
    goto LABEL_27;
  v12 = (char *)a1 - a2;
  v26 = (char *)a1 - a2;
  v13 = a2 - (char *)a1;
  while ( 1 )
  {
    *(_DWORD *)((char *)a1 + v13 + 8) = *(_DWORD *)((char *)a1 + v13 + v12 + 8);
    SharedSidEntry = SepFindSharedSidEntry(*a1);
    if ( SharedSidEntry )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)&SharedSidEntry[1]) <= 1 )
        __fastfail(0xEu);
      Blink = SharedSidEntry[1].Linkage.Blink;
      goto LABEL_16;
    }
    v16 = ((4 * *((unsigned __int8 *)*a1 + 1) + 51) & 0xFFFFFFFC) + 4 * *((unsigned __int8 *)*a1 + 1) + 48;
    PoolWithTag = (_RTL_DYNAMIC_HASH_TABLE_ENTRY *)ExAllocatePoolWithTag(PagedPool, v16, 0x73536553u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolWithTag[1].Linkage.Flink = (struct _LIST_ENTRY *)1;
    PoolWithTag[1].Linkage.Blink = (struct _LIST_ENTRY *)&PoolWithTag[1].Signature;
    RtlCopySid(v16 - 40, &PoolWithTag[1].Signature, *a1);
    v19 = (unsigned int)*((unsigned __int8 *)*a1 + 1) - 1;
    v20 = *((unsigned int *)*a1 + v19 + 2);
    if ( !*((_DWORD *)*a1 + v19 + 2) )
      v20 = 1LL;
    if ( !RtlInsertEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v18, v20, 0LL) )
    {
      v4 = -1073741823;
      ExFreePoolWithTag(v18, 0x73536553u);
      goto LABEL_20;
    }
    Blink = v18[1].Linkage.Blink;
    v4 = 0;
LABEL_16:
    *(PSID *)((char *)a1 + v13) = Blink;
    v11 = (unsigned int)(v11 + 1);
    v12 = v26;
    a1 += 2;
    if ( (unsigned int)v11 >= a3 )
      goto LABEL_27;
  }
  v4 = -1073741801;
LABEL_20:
  if ( (_DWORD)v11 )
  {
    do
    {
      v21 = SepFindSharedSidEntry(*(_DWORD **)a2);
      v22 = _InterlockedDecrement64((volatile signed __int64 *)&v21[1]);
      if ( v22 <= 0 )
      {
        if ( v22 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8), v21, 0LL) )
          ExFreePoolWithTag(v21, 0);
      }
      a2 += 16;
      --v11;
    }
    while ( v11 );
  }
LABEL_27:
  v23 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v23);
  KeAbPostRelease((ULONG_PTR)v23);
  KeLeaveCriticalRegion();
  return v4;
}
