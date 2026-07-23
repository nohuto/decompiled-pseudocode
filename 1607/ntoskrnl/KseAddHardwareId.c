/*
 * XREFs of KseAddHardwareId @ 0x14050D830
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     KsepDebugPrint @ 0x1401DCA68 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1401DCCD0 (KsepLogError.c)
 *     KsepCacheInsert @ 0x14050B568 (KsepCacheInsert.c)
 *     KsepCacheLock @ 0x14050CE94 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14050CEE4 (KsepCacheLookup.c)
 *     KsepStringDuplicate @ 0x140514AB8 (KsepStringDuplicate.c)
 *     KsepStringFree @ 0x140514F80 (KsepStringFree.c)
 */

__int64 __fastcall KseAddHardwareId(PCWSTR SourceString)
{
  unsigned __int64 *v2; // rsi
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

  v2 = (unsigned __int64 *)qword_140328F80;
  if ( dword_140328F34 != 2 )
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
  v3 = KsepCacheLookup((__int64)v2, (__int64)v12);
  if ( !v3 )
  {
    Paged = KsepPoolAllocatePaged(0x38uLL);
    v3 = Paged;
    if ( !Paged || (int)KsepStringDuplicate(Paged + 5, SourceString) < 0 )
    {
      v5 = -1073741801;
      goto LABEL_8;
    }
    KsepCacheInsert((__int64)v2, (__int64)v3);
  }
  v5 = 0;
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
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
