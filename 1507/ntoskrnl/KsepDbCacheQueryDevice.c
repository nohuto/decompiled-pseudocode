/*
 * XREFs of KsepDbCacheQueryDevice @ 0x140572240
 * Callers:
 *     KseQueryDeviceData @ 0x1405720AC (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x14054B4B0 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x14054B590 (KsepCacheLock.c)
 *     KsepDbCacheQueryDeviceData @ 0x1405C68B4 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  volatile signed __int64 *v13; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  _BYTE v17[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v18; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v18, SourceString);
  KsepCacheLock((unsigned __int64 *)qword_140353CD8, v9, v10, v11);
  v12 = KsepCacheLookup(qword_140353CD8, (__int64)v17);
  if ( v12 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v12, a2, a3, a4, a5);
  v13 = (volatile signed __int64 *)qword_140353CD8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140353CD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  CurrentThread = KeGetCurrentThread();
  v15 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return DeviceData;
}
