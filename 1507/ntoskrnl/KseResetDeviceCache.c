/*
 * XREFs of KseResetDeviceCache @ 0x14069BD6C
 * Callers:
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14069BBC4 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepCacheLock @ 0x14054B590 (KsepCacheLock.c)
 *     KsepCacheReset @ 0x14069D904 (KsepCacheReset.c)
 */

__int64 __fastcall KseResetDeviceCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v6; // ax

  if ( dword_140353C94 == 2 )
  {
    KsepCacheLock((unsigned __int64 *)qword_140353CD8, a2, a3, a4);
    KsepCacheReset(qword_140353CD8);
    v4 = (volatile signed __int64 *)qword_140353CD8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140353CD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    KeAbPostRelease((ULONG_PTR)v4);
    CurrentThread = KeGetCurrentThread();
    v6 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v6;
    if ( !v6
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 0LL;
}
