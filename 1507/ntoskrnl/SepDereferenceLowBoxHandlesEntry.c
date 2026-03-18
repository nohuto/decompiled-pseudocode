/*
 * XREFs of SepDereferenceLowBoxHandlesEntry @ 0x140527FE0
 * Callers:
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SepDereferenceLowBoxObjects @ 0x14010E5C8 (SepDereferenceLowBoxObjects.c)
 *     RtlRemoveEntryHashTable @ 0x14010E610 (RtlRemoveEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxHandlesEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rdi
  unsigned int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  __int64 v11; // rax
  struct _KTHREAD *v12; // rcx
  __int16 v13; // ax
  void *v15; // rcx
  struct _KTHREAD *v16; // rdx
  __int16 v17; // ax

  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 88;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 88, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v8, v5, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v11 <= 0 )
  {
    if ( v11 )
      __fastfail(0xEu);
    if ( RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v5 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL) )
    {
      SepDereferenceLowBoxObjects(*(_DWORD *)(a2 + 40), *(HANDLE **)(a2 + 48));
      v15 = *(void **)(a2 + 48);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      v7 = -1073741823;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease(v5);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v7;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v5);
    KeAbPostRelease(v5);
    v12 = KeGetCurrentThread();
    v13 = v12->KernelApcDisable + 1;
    v12->KernelApcDisable = v13;
    if ( !v13
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
      && !v12->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
}
