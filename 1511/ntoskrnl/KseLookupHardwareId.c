/*
 * XREFs of KseLookupHardwareId @ 0x14061E768
 * Callers:
 *     AhcCacheQueryHwId @ 0x14069E060 (AhcCacheQueryHwId.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     KsepCacheLookup @ 0x1404F1148 (KsepCacheLookup.c)
 *     KsepCacheLock @ 0x1404F1228 (KsepCacheLock.c)
 *     AslStringPatternMatchW @ 0x140535084 (AslStringPatternMatchW.c)
 */

__int64 __fastcall KseLookupHardwareId(WCHAR *SourceString)
{
  unsigned __int64 *v1; // rbx
  unsigned int v3; // esi
  int v4; // ebp
  PCWSTR v5; // rax
  WCHAR *v6; // r15
  WCHAR v7; // cx
  unsigned __int64 *i; // rdi
  WCHAR *v10; // rdx
  _BYTE v11[40]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF

  v1 = (unsigned __int64 *)qword_140305F60;
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
      KsepCacheLock((unsigned __int64 *)qword_140305F60);
      for ( i = (unsigned __int64 *)v1[4]; ; i = (unsigned __int64 *)*i )
      {
        if ( i == v1 + 4 )
          goto LABEL_9;
        v10 = (WCHAR *)i[3];
        if ( v4 )
        {
          if ( *v10 != 42 )
            continue;
          ++v10;
        }
        if ( (unsigned int)AslStringPatternMatchW(v6, v10) )
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
  if ( KsepCacheLookup((__int64)v1, (__int64)v11) )
    v3 = 0;
LABEL_9:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
