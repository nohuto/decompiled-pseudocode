/*
 * XREFs of SepDereferenceLowBoxHandlesEntry @ 0x14051AD98
 * Callers:
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SepTokenDeleteMethod @ 0x14051A9E0 (SepTokenDeleteMethod.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlRemoveEntryHashTable @ 0x14009187C (RtlRemoveEntryHashTable.c)
 *     SepDereferenceLowBoxObjects @ 0x1400B0DB8 (SepDereferenceLowBoxObjects.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDereferenceLowBoxHandlesEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rsi
  unsigned int v4; // edi
  _BYTE *v6; // rax
  _BYTE *v7; // r14
  __int64 v8; // rax
  struct _KTHREAD *v9; // rcx
  __int16 v10; // ax
  BOOLEAN v12; // r14
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax
  void *v15; // rcx

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 88;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v6 = (_BYTE *)KeAbPreAcquire(a1 + 88, 0LL, 0);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v3, v6, v3);
  if ( v7 )
    v7[26] |= 1u;
  v8 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 24));
  if ( v8 > 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    v9 = KeGetCurrentThread();
    v10 = v9->KernelApcDisable + 1;
    v9->KernelApcDisable = v10;
    if ( !v10
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v9->ApcState.ApcListHead[0].Flink != &v9->152
      && !v9->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v9);
    }
    return 0LL;
  }
  else
  {
    if ( v8 )
      __fastfail(0xEu);
    v12 = RtlRemoveEntryHashTable(*(PRTL_DYNAMIC_HASH_TABLE *)(v3 + 8), (PRTL_DYNAMIC_HASH_TABLE_ENTRY)a2, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease(v3);
    v13 = KeGetCurrentThread();
    v14 = v13->KernelApcDisable + 1;
    v13->KernelApcDisable = v14;
    if ( !v14
      && ($2B8565053CDC740D4E4887693DD8AC9E *)v13->ApcState.ApcListHead[0].Flink != &v13->152
      && !v13->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery((__int64)v13);
    }
    if ( v12 )
    {
      SepDereferenceLowBoxObjects(*(_DWORD *)(a2 + 40), *(HANDLE **)(a2 + 48));
      v15 = *(void **)(a2 + 48);
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      ExFreePoolWithTag((PVOID)a2, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
    return v4;
  }
}
