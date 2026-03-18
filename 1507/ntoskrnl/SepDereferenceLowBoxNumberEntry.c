/*
 * XREFs of SepDereferenceLowBoxNumberEntry @ 0x140528180
 * Callers:
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 *     SeSetSessionIdToken @ 0x140527E54 (SeSetSessionIdToken.c)
 *     SeExchangePrimaryToken @ 0x1406D51C0 (SeExchangePrimaryToken.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x14010E610 (RtlRemoveEntryHashTable.c)
 *     RtlDereferenceAtomTable @ 0x14010E660 (RtlDereferenceAtomTable.c)
 *     ExRemoveLowBoxAtomReferences @ 0x14010E668 (ExRemoveLowBoxAtomReferences.c)
 *     SepGetTokenSessionMapEntry @ 0x140250784 (SepGetTokenSessionMapEntry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxNumberEntry(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int TokenSessionMapEntry; // r14d
  struct _KTHREAD *v7; // rax
  volatile signed __int32 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rax
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  ULONG_PTR v16; // rdi
  struct _KTHREAD *v17; // rcx
  __int16 v18; // ax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdi
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  __int16 v23; // ax
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  TokenSessionMapEntry = 0;
  if ( a1 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v20 = KeAbPreAcquire((ULONG_PTR)&LowboxSessionMapLock, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&LowboxSessionMapLock, v20, (ULONG_PTR)&LowboxSessionMapLock, v21);
    if ( v20 )
      *(_BYTE *)(v20 + 26) |= 1u;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(a1, 0, &BugCheckParameter2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&LowboxSessionMapLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&LowboxSessionMapLock);
    KeAbPostRelease((ULONG_PTR)&LowboxSessionMapLock);
    v22 = KeGetCurrentThread();
    v23 = v22->KernelApcDisable + 1;
    v22->KernelApcDisable = v23;
    if ( !v23
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v22->ApcState.ApcListHead[0].Flink != &v22->152
      && !v22->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    BugCheckParameter2 = (ULONG_PTR)&g_SessionLowboxArray + 40 * a1;
  }
  v7 = KeGetCurrentThread();
  --v7->KernelApcDisable;
  v8 = (volatile signed __int32 *)BugCheckParameter2;
  v9 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64(v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v9, BugCheckParameter2, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v12 <= 0 )
  {
    if ( v12 )
      __fastfail(0xEu);
    v16 = BugCheckParameter2;
    if ( RtlRemoveEntryHashTable(
           *(PRTL_DYNAMIC_HASH_TABLE *)(BugCheckParameter2 + 24),
           (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2,
           0LL) )
    {
      _bittestandreset(*(signed __int32 **)(v16 + 16), *(_DWORD *)(a2 + 40) - 1);
      if ( *(_QWORD *)(a2 + 48) )
      {
        ExRemoveLowBoxAtomReferences();
        RtlDereferenceAtomTable(*(PRTL_ATOM_TABLE *)(a2 + 48));
      }
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      TokenSessionMapEntry = -1073741823;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v17 = KeGetCurrentThread();
    v18 = v17->KernelApcDisable + 1;
    v17->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
      && !v17->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return TokenSessionMapEntry;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
}
