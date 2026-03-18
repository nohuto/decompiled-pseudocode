/*
 * XREFs of KsepDbCacheQueryDevice @ 0x140534DE4
 * Callers:
 *     KseQueryDeviceData @ 0x140534C50 (KseQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KsepCacheLookup @ 0x1404E395C (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404E3A3C (KsepCacheLock.c)
 *     KsepDbCacheQueryDeviceData @ 0x14057C060 (KsepDbCacheQueryDeviceData.c)
 */

__int64 __fastcall KsepDbCacheQueryDevice(PCWSTR SourceString, int a2, int a3, int a4, void *a5)
{
  unsigned int DeviceData; // edi
  _QWORD *v9; // rax
  volatile signed __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[40]; // [rsp+30h] [rbp-58h] BYREF
  UNICODE_STRING v16; // [rsp+58h] [rbp-30h] BYREF

  DeviceData = -1073741275;
  RtlInitUnicodeString(&v16, SourceString);
  KsepCacheLock((unsigned __int64 *)qword_140328F38);
  v9 = KsepCacheLookup(qword_140328F38, (__int64)v15);
  if ( v9 )
    DeviceData = KsepDbCacheQueryDeviceData((int)v9, a2, a3, a4, a5);
  v10 = (volatile signed __int64 *)qword_140328F38;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140328F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  return DeviceData;
}
