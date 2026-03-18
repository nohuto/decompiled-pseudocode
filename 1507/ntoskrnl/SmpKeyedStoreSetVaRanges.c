/*
 * XREFs of SmpKeyedStoreSetVaRanges @ 0x1400DC330
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1404FAF38 (SmStoreSetProcessVaRanges.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall SmpKeyedStoreSetVaRanges(
        volatile signed __int32 *BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // esi
  struct _KTHREAD *v9; // rdx
  __int16 v10; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, a4);
  v7 = v6;
  if ( _interlockedbittestandset64(BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v6, BugCheckParameter2);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v8 = SmpKeyedStoreEntryGet((ULONG_PTR)BugCheckParameter2) != 0 ? 0xFFFFFE96 : 0;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v9 = KeGetCurrentThread();
  v10 = v9->KernelApcDisable + 1;
  v9->KernelApcDisable = v10;
  if ( !v10 )
  {
    v11 = &v9->152;
    if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != v11 && !v9->SpecialApcDisable )
      KiCheckForKernelApcDelivery(v11);
  }
  return v8 - 1073741275;
}
