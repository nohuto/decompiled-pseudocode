/*
 * XREFs of KsepDbCacheQueryDevice @ 0x1404FA868
 * Callers:
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepCacheLookup @ 0x1404F1148 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404F1228 (KsepCacheLock.c)
 *     KsepDbCacheQueryDeviceData @ 0x14054EAB0 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // edi
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rbx
  _BYTE v12[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v13; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v13, SourceString);
  KsepCacheLock((unsigned __int64 *)qword_140305F58);
  v9 = KsepCacheLookup(qword_140305F58, (__int64)v12);
  if ( v9 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v9, a2, a3, a4, a5);
  v10 = (volatile signed __int64 *)qword_140305F58;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140305F58, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return DeviceData;
}
