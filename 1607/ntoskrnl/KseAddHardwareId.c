/*
 * XREFs of KseAddHardwareId @ 0x1404E3884
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KsepPoolFreePaged @ 0x140084D54 (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x140084D74 (KsepPoolAllocatePaged.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KsepDebugPrint @ 0x1401DCC3C (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCEA4 (KsepLogError.c)
 *     KsepStringDuplicate @ 0x140485730 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140485BF8 (KsepStringFree.c)
 *     KsepCacheInsert @ 0x1404E37E0 (KsepCacheInsert.c)
 *     KsepCacheLookup @ 0x1404E395C (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404E3A3C (KsepCacheLock.c)
 */

__int64 __fastcall KseAddHardwareId(WCHAR *SourceString)
{
  volatile signed __int64 *v2; // rsi
  _QWORD *v3; // rdi
  _QWORD *Paged; // rax
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rcx
  char v11; // al
  _BYTE v12[40]; // [rsp+20h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF

  v2 = (volatile signed __int64 *)qword_140328F40;
  if ( dword_140328EF4 != 2 )
  {
    v10 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    v11 = KsepDebugFlag;
    KsepHistoryErrors[2 * v10 + 1] = -1073741823;
    KsepHistoryErrors[2 * v10] = 656075;
    if ( (v11 & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    KsepLogError(0, "KSE: Cannot add hardware id until the kshim engine is initialized\n");
    return 0LL;
  }
  if ( !SourceString )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  KsepCacheLock(v2);
  v3 = (_QWORD *)KsepCacheLookup(v2, v12);
  if ( !v3 )
  {
    Paged = KsepPoolAllocatePaged(0x38uLL);
    v3 = Paged;
    if ( !Paged || (int)KsepStringDuplicate((__int64)(Paged + 5), SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_8;
    }
    KsepCacheInsert((__int64)v2, (__int64)v3);
  }
  v5 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
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
