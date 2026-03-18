/*
 * XREFs of KseAddHardwareId @ 0x1404F0BC8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1400028CC (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x1400028EC (KsepPoolAllocatePaged.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepDebugPrint @ 0x1401CCFB8 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401CD220 (KsepLogError.c)
 *     KsepStringFree @ 0x1403B8B6C (KsepStringFree.c)
 *     KsepCacheLookup @ 0x1404F1148 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404F1228 (KsepCacheLock.c)
 *     KsepCacheInsert @ 0x1404F1AF4 (KsepCacheInsert.c)
 *     KsepStringDuplicate @ 0x1404F1B98 (KsepStringDuplicate.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  volatile signed __int64 *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *Paged; // rax
  int v5; // ebx
  __int64 v7; // rcx
  char v8; // al
  _BYTE v9[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_140305F60;
  if ( dword_140305F14 != 2 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v8 = KsepDebugFlag;
    KsepHistoryErrors[2 * v7 + 1] = -1073741823;
    KsepHistoryErrors[2 * v7] = 656075;
    if ( (v8 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  KsepCacheLock(v2);
  v3 = (_QWORD *)KsepCacheLookup(v2, v9);
  if ( !v3 )
  {
    Paged = KsepPoolAllocatePaged(0x38uLL);
    v3 = Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 5, SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_8;
    }
    KsepCacheInsert(v2, v3);
  }
  v5 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 < 0 )
  {
    if ( v3 )
    {
      KsepStringFree(v3 + 5);
      KsepPoolFreePaged(v3);
    }
  }
  return (unsigned int)v5;
}
