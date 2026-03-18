/*
 * XREFs of KseQueryDeviceDataList @ 0x14061D040
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14066ABBC (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepShimDbChanged @ 0x14011BA00 (KsepShimDbChanged.c)
 *     KsepCacheLookup @ 0x1404F1148 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404F1228 (KsepCacheLock.c)
 *     KsepCacheDeviceFree @ 0x1404FA2C0 (KsepCacheDeviceFree.c)
 *     KsepDbCacheReadDevice @ 0x1404FA314 (KsepDbCacheReadDevice.c)
 *     KsepDbCacheInsertDevice @ 0x14054EF0C (KsepDbCacheInsertDevice.c)
 *     KseResetDeviceCache @ 0x14061D1B4 (KseResetDeviceCache.c)
 *     KsepDbCacheQueryDeviceDataList @ 0x14061D358 (KsepDbCacheQueryDeviceDataList.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14061D71C (KsepDbQueryRegistryDeviceDataList.c)
 */

__int64 __fastcall KseQueryDeviceDataList(wchar_t *SourceString, __int64 a2, unsigned int a3, __int64 a4)
{
  int RegistryDeviceDataList; // ebx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  volatile signed __int64 *v11; // rdi
  _QWORD *v12; // rdi
  _QWORD *v14; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[40]; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-40h] BYREF

  v14 = 0LL;
  if ( dword_140305F14 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a4 )
    return (unsigned int)-1073741811;
  RegistryDeviceDataList = KsepDbQueryRegistryDeviceDataList();
  if ( RegistryDeviceDataList == -1073741275 )
  {
    if ( (unsigned int)KsepShimDbChanged() )
    {
      KseResetDeviceCache(v9);
LABEL_13:
      RegistryDeviceDataList = KsepDbCacheReadDevice(SourceString, &v14);
      if ( RegistryDeviceDataList >= 0 )
      {
        v12 = v14;
        RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v14, a2, a3, a4);
        if ( (int)KsepDbCacheInsertDevice(SourceString, (__int64)v12) < 0 )
          KsepCacheDeviceFree(v12);
      }
      return (unsigned int)RegistryDeviceDataList;
    }
    RtlInitUnicodeString(&DestinationString, SourceString);
    KsepCacheLock((unsigned __int64 *)qword_140305F58);
    v10 = KsepCacheLookup(qword_140305F58, (__int64)v15);
    v14 = v10;
    if ( v10 )
      RegistryDeviceDataList = KsepDbCacheQueryDeviceDataList(v10, a2, a3, a4);
    v11 = (volatile signed __int64 *)qword_140305F58;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140305F58, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v11);
    KeAbPostRelease((ULONG_PTR)v11);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( !v14 )
      goto LABEL_13;
  }
  return (unsigned int)RegistryDeviceDataList;
}
