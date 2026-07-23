/*
 * XREFs of SepIsValidProcUniqueLuid @ 0x140694778
 * Callers:
 *     SepRmValidateProcUniqueLuidWrkr @ 0x140693C60 (SepRmValidateProcUniqueLuidWrkr.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlLookupEntryHashTable @ 0x14007FB60 (RtlLookupEntryHashTable.c)
 *     RtlGetNextEntryHashTable @ 0x140096EC0 (RtlGetNextEntryHashTable.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall SepIsValidProcUniqueLuid(ULONG_PTR *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  unsigned __int64 *v4; // rdi
  __int64 v5; // rbx
  ULONG_PTR v6; // rdx
  _RTL_DYNAMIC_HASH_TABLE *v7; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY i; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rcx
  signed __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741275;
  --CurrentThread->KernelApcDisable;
  v4 = (unsigned __int64 *)SeLuidToIndexMapping;
  v5 = KeAbPreAcquire(SeLuidToIndexMapping, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, v5, (ULONG_PTR)v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v6 = *a1;
  if ( !*a1 )
    v6 = 1LL;
  v7 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  for ( i = RtlLookupEntryHashTable(v7, v6, &Context); ; i = RtlGetNextEntryHashTable(v7, &Context) )
  {
    v9 = i;
    if ( !i )
      break;
    if ( (struct _LIST_ENTRY *)*a1 == i[1].Linkage.Blink )
      goto LABEL_12;
  }
  v9 = 0LL;
LABEL_12:
  if ( v9 )
    v3 = LOBYTE(v9[2].Linkage.Flink) != 0 ? 0xC0000225 : 0;
  v10 = (signed __int64 *)SeLuidToIndexMapping;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SeLuidToIndexMapping, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return v3;
}
