/*
 * XREFs of CmpUnlockAppHiveLoadList @ 0x140447C64
 * Callers:
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

void __fastcall CmpUnlockAppHiveLoadList(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rcx
  ULONG_PTR v3; // rtt
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  _m_prefetchw(&CmpAppHiveLoadListLock);
  v2 = CmpAppHiveLoadListLock - 16;
  if ( (CmpAppHiveLoadListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v2 = 0LL;
  if ( (CmpAppHiveLoadListLock & 2) != 0
    || (v3 = CmpAppHiveLoadListLock,
        v3 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpAppHiveLoadListLock,
                v2,
                CmpAppHiveLoadListLock)) )
  {
    ExfReleasePushLock(&CmpAppHiveLoadListLock, a2);
  }
  KeAbPostRelease((ULONG_PTR)&CmpAppHiveLoadListLock);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
