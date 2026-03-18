/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x1403C91FC
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 *     SeSetSessionIdToken @ 0x1403C51A4 (SeSetSessionIdToken.c)
 *     SepTokenDeleteMethod @ 0x1403C9070 (SepTokenDeleteMethod.c)
 *     SeSubProcessToken @ 0x14044C430 (SeSubProcessToken.c)
 *     SeExchangePrimaryToken @ 0x140653498 (SeExchangePrimaryToken.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     RtlDereferenceAtomTable @ 0x14009A298 (RtlDereferenceAtomTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x14009A2A0 (ExRemoveLowBoxAtomReferences.c)
 *     RtlRemoveEntryHashTable @ 0x1400CFD90 (RtlRemoveEntryHashTable.c)
 *     SepGetTokenSessionMapEntry @ 0x1402017AC (SepGetTokenSessionMapEntry.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2)
{
  unsigned int TokenSessionMapEntry; // r14d
  struct _KTHREAD *v5; // rax
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  char v10; // bl
  ULONG_PTR v11; // rdi
  ULONG_PTR v13; // rdi
  __int64 v14; // rcx
  char v15; // bl
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v17, (ULONG_PTR)&LowboxSessionMapLock);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
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
  v5 = KeGetCurrentThread();
  --v5->KernelApcDisable;
  v6 = (volatile signed __int32 *)BugCheckParameter2;
  v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64(v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v7, BugCheckParameter2);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v9 <= 0 )
  {
    if ( v9 )
      __fastfail(0xEu);
    v13 = BugCheckParameter2;
    if ( RtlRemoveEntryHashTable(
           *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
           (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
           0LL) )
    {
      _bittestandreset(*(signed __int32 **)(v13 + 16), *(_DWORD *)(a2 + 40) - 1);
      v14 = *(_QWORD *)(a2 + 48);
      if ( v14 )
      {
        ExRemoveLowBoxAtomReferences(v14, *(_DWORD *)(a2 + 40));
        RtlDereferenceAtomTable(*(PRTL_ATOM_TABLE *)(a2 + 48));
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      TokenSessionMapEntry = -1073741823;
    }
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = BugCheckParameter2;
    if ( (v15 & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  }
  else
  {
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
    v11 = BugCheckParameter2;
    if ( (v10 & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    TokenSessionMapEntry = 0;
  }
  KeAbPostRelease(v11);
  KeLeaveCriticalRegion();
  return TokenSessionMapEntry;
}
