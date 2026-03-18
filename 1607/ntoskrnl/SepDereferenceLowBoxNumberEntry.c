/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x1404A2798
 * Callers:
 *     SeSubProcessToken @ 0x14046EA48 (SeSubProcessToken.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x14047AA4C (SeSetSessionIdToken.c)
 *     SepTokenDeleteMethod @ 0x1404A25E0 (SepTokenDeleteMethod.c)
 *     SeExchangePrimaryToken @ 0x140692774 (SeExchangePrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x14009211C (RtlRemoveEntryHashTable.c)
 *     RtlDereferenceAtomTable @ 0x1400B5AA0 (RtlDereferenceAtomTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x1400B5AA8 (ExRemoveLowBoxAtomReferences.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x14021B2F8 (SepGetTokenSessionMapEntry.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2)
{
  unsigned int TokenSessionMapEntry; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  struct _KTHREAD *v7; // rax
  volatile signed __int32 *v8; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rbp
  __int64 v11; // rax
  ULONG_PTR v13; // rdi
  BOOLEAN v14; // bp
  __int64 v15; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v6, (ULONG_PTR)&LowboxSessionMapLock);
    if ( v6 )
      *(_BYTE *)(v6 + 26) |= 1u;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = (volatile signed __int32 *)BugCheckParameter2;
  v9 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64(v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2);
  if ( v10 )
    v10[26] |= 1u;
  v11 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v11 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  else
  {
    if ( v11 )
      __fastfail(0xEu);
    v13 = BugCheckParameter2;
    v14 = RtlRemoveEntryHashTable(
            *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
            (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
            0LL);
    if ( v14 )
      _bittestandreset(*(signed __int32 **)(v13 + 16), *(_DWORD *)(a2 + 40) - 1);
    else
      TokenSessionMapEntry = -1073741823;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
    if ( v14 )
    {
      v15 = *(_QWORD *)(a2 + 48);
      if ( v15 )
      {
        ExRemoveLowBoxAtomReferences(v15, *(_DWORD *)(a2 + 40));
        RtlDereferenceAtomTable(*(PRTL_ATOM_TABLE *)(a2 + 48));
        ExFreePoolWithTag((PVOID)a2, 0);
      }
    }
    return TokenSessionMapEntry;
  }
}
