/*
 * XREFs of SepDereferenceLowBoxHandlesEntry @ 0x1403C9368
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1403C9070 (SepTokenDeleteMethod.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlRemoveEntryHashTable @ 0x1400CFD90 (RtlRemoveEntryHashTable.c)
 *     SepDereferenceLowBoxObjects @ 0x1400EFD44 (SepDereferenceLowBoxObjects.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rdi
  unsigned int v4; // esi
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  void *v10; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire(a1 + 88, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v6, v3);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v8 <= 0 )
  {
    if ( v8 )
      __fastfail(0xEu);
    if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL) )
    {
      SepDereferenceLowBoxObjects(*(_DWORD *)(a2 + 40), *(HANDLE **)(a2 + 48));
      v10 = *(void **)(a2 + 48);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      v4 = -1073741823;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease(v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
