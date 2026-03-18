/*
 * XREFs of KseQueryDeviceDataList @ 0x14069BBC4
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x1401537EC (KsepShimDbChanged.c)
 *     KsepCacheLookup @ 0x14054B4B0 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x14054B590 (KsepCacheLock.c)
 *     KsepDbCacheReadDevice @ 0x140578E70 (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x140578FDC (KsepCacheDeviceFree.c)
 *     KsepDbCacheInsertDevice @ 0x1405C6A60 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x14069BD6C (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x14069BF38 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14069C2FC (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int RegistryDeviceDataList; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rax
  volatile signed __int64 *v17; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v19; // ax
  _QWORD *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v24; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v25[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v24 = 0LL;
  if ( dword_140353C94 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList();
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged(v9, v8, v11, v12) )
    {
      KseResetDeviceCache();
LABEL_17:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v24);
      if ( RegistryDeviceDataList >= 0 )
      {
        v20 = v24;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v24, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v20, v21, v22) < 0 )
          KsepCacheDeviceFree(v20);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    KsepCacheLock((unsigned __int64 *)qword_140353CD8, v13, v14, v15);
    v16 = KsepCacheLookup(qword_140353CD8, (__int64)v25);
    v24 = v16;
    if ( v16 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v16, a2, a3, a4);
    v17 = (volatile signed __int64 *)qword_140353CD8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140353CD8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v17);
    KeAbPostRelease((ULONG_PTR)v17);
    CurrentThread = KeGetCurrentThread();
    v19 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v19;
    if ( !v19
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( !v24 )
      goto LABEL_17;
  }
  return (unsigned int)RegistryDeviceDataList;
}
