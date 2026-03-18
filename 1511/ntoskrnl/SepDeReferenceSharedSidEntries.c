/*
 * XREFs of SepDeReferenceSharedSidEntries @ 0x140655F84
 * Callers:
 *     SepFreeTokenCapabilities @ 0x14000DA40 (SepFreeTokenCapabilities.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlRemoveEntryHashTable @ 0x1400CFD90 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepFindSharedSidEntry @ 0x140656380 (SepFindSharedSidEntry.c)
 */

void __fastcall SepDeReferenceSharedSidEntries(PSID *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rbp
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 SharedSidEntry; // rax
  void *v10; // rdi
  __int64 v11; // rcx
  volatile signed __int64 *v12; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = a2;
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned __int64 *)g_SepSidMapping;
  v6 = KeAbPreAcquire(g_SepSidMapping, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (_DWORD)v3 )
  {
    v8 = v3;
    do
    {
      SharedSidEntry = SepFindSharedSidEntry(*a1);
      v10 = (void *)SharedSidEntry;
      v11 = _InterlockedDecrement64((volatile signed __int64 *)(SharedSidEntry + 24));
      if ( v11 <= 0 )
      {
        if ( v11 )
          __fastfail(0xEu);
        if ( RtlRemoveEntryHashTable(
               *(PRTL_DYNAMIC_HASH_TABLE *)(g_SepSidMapping + 8),
               (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SharedSidEntry,
               0LL) )
        {
          ExFreePoolWithTag(v10, 0);
        }
      }
      a1 += 2;
      --v8;
    }
    while ( v8 );
  }
  v12 = (volatile signed __int64 *)g_SepSidMapping;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)g_SepSidMapping, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegion();
}
