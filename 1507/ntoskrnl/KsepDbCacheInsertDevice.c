/*
 * XREFs of KsepDbCacheInsertDevice @ 0x1405C6A60
 * Callers:
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14069BBC4 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepCacheInsert @ 0x14054B314 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x14054B4B0 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x14054B590 (KsepCacheLock.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  volatile signed __int64 *v7; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  __int16 v9; // ax
  _BYTE v11[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v6 = -1073741811;
  KsepCacheLock((unsigned __int64 *)qword_140353CD8, a2, a3, a4);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140353CD8, (__int64)v11) )
  {
    KsepCacheInsert(qword_140353CD8, a2);
    v6 = 0;
  }
  v7 = (volatile signed __int64 *)qword_140353CD8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140353CD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
