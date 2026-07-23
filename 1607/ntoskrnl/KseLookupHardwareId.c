/*
 * XREFs of KseLookupHardwareId @ 0x140653AC4
 * Callers:
 *     AhcCacheQueryHwId @ 0x1406E4D54 (AhcCacheQueryHwId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KsepCacheLock @ 0x14050CE94 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14050CEE4 (KsepCacheLookup.c)
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  unsigned __int64 *v1; // rbx
  unsigned int v3; // esi
  int v4; // ebp
  PCWSTR v5; // rax
  WCHAR *v6; // r15
  WCHAR v7; // cx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 *i; // rdi
  WCHAR *v13; // rdx
  _BYTE v14[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v1 = (unsigned __int64 *)qword_140328F80;
  v3 = -1073741275;
  v4 = 0;
  v5 = SourceString;
  v6 = SourceString;
  if ( *SourceString == 42 )
  {
    v5 = SourceString + 1;
    v6 = SourceString + 1;
    v4 = 1;
  }
  while ( 1 )
  {
    v7 = *v5;
    if ( !*v5 )
      break;
    if ( v7 == 42 || v7 == 63 )
    {
      KsepCacheLock((unsigned __int64 *)qword_140328F80);
      for ( i = (unsigned __int64 *)v1[4]; ; i = (unsigned __int64 *)*i )
      {
        if ( i == v1 + 4 )
          goto LABEL_9;
        v13 = (WCHAR *)i[3];
        if ( v4 )
        {
          if ( *v13 != 42 )
            continue;
          ++v13;
        }
        if ( (unsigned int)AslStringPatternMatchW(v6, v13) )
        {
          v3 = 0;
          goto LABEL_9;
        }
      }
    }
    ++v5;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  KsepCacheLock(v1);
  if ( KsepCacheLookup((__int64)v1, (__int64)v14) )
    v3 = 0;
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v3;
}
