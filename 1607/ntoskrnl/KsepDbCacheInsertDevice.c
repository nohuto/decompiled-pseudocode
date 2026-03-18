/*
 * XREFs of KsepDbCacheInsertDevice @ 0x14057DABC
 * Callers:
 *     KseQueryDeviceData @ 0x140534C50 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140652334 (KseQueryDeviceDataList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KsepCacheInsert @ 0x1404E37E0 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x1404E395C (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404E3A3C (KsepCacheLock.c)
 */

__int64 __fastcall KsepDbCacheInsertDevice(PCWSTR SourceString, __int64 a2)
{
  unsigned int v4; // edi
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v10[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v4 = -1073741811;
  KsepCacheLock((unsigned __int64 *)qword_140328F38);
  RtlInitUnicodeString(&DestinationString, SourceString);
  if ( !KsepCacheLookup(qword_140328F38, (__int64)v10) )
  {
    KsepCacheInsert(qword_140328F38, a2);
    v4 = 0;
  }
  v5 = (volatile signed __int64 *)qword_140328F38;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140328F38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return v4;
}
