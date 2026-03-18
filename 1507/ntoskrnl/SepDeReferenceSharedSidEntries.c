/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x1406D8068
 * Callers:
 *     SepFreeTokenCapabilities @ 0x1401238D4 (SepFreeTokenCapabilities.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x14010E610 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepFindSharedSidEntry @ 0x1406D8498 (SepFindSharedSidEntry.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbp
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 SharedSidEntry; // rax
  void *v13; // rdi
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rdi
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  --CurrentThread->KernelApcDisable;
  v7 = (unsigned __int64 *)g_SepSidMapping;
  v8 = KeAbPreAcquire(g_SepSidMapping, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( (_DWORD)v5 )
  {
    v11 = v5;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v13 = (void *)SharedSidEntry;
      v14 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v14 <= 0 )
      {
        if ( v14 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v13, 0);
        }
      }
      a1 += 2;
      --v11;
    }
    while ( v11 );
  }
  v15 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  v16 = KeGetCurrentThread();
  v17 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v17;
  if ( !v17
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
    && !v16->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
