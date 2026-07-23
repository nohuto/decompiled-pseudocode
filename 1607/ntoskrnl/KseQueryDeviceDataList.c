/*
 * XREFs of KseQueryDeviceDataList @ 0x140652418
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepShimDbChanged @ 0x140127220 (KsepShimDbChanged.c)
 *     KsepCacheLock @ 0x14050CE94 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14050CEE4 (KsepCacheLookup.c)
 *     KsepDbCacheReadDevice @ 0x14053551C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceFree @ 0x140535688 (KsepCacheDeviceFree.c)
 *     KsepDbCacheInsertDevice @ 0x14057DF68 (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x14065258C (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x140652730 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140652A78 (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // ebx
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rdi
  _QWORD *v16; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v17[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v16 = 0LL;
  if ( dword_140328F34 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList();
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache();
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v16);
      if ( RegistryDeviceDataList >= 0 )
      {
        v14 = v16;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v16, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v14) < 0 )
          KsepCacheDeviceFree(v14);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    KsepCacheLock((unsigned __int64 *)qword_140328F78);
    v9 = KsepCacheLookup(qword_140328F78, (__int64)v17);
    v16 = v9;
    if ( v9 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v9, a2, a3, a4);
    v10 = (volatile signed __int64 *)qword_140328F78;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140328F78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
    if ( !v16 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
