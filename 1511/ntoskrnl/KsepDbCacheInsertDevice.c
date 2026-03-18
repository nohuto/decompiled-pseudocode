/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14054EF0C
 * Callers:
 *     KseQueryDeviceData @ 0x1404FA6D4 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x14061D040 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepCacheLookup @ 0x1404F1148 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404F1228 (KsepCacheLock.c)
 *     KsepCacheInsert @ 0x1404F1AF4 (KsepCacheInsert.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // edi
  volatile signed __int64 *v5; // rbx
  _BYTE v7[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v4 = -1073741811;
  KsepCacheLock((unsigned __int64 *)qword_140305F58);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140305F58, (__int64)v7) )
  {
    KsepCacheInsert(qword_140305F58, a2);
    v4 = 0;
  }
  v5 = (volatile signed __int64 *)qword_140305F58;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140305F58, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
