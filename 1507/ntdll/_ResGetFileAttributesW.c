/*
 * XREFs of _ResGetFileAttributesW @ 0x1800FA7B0
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1800FABD8 (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x1800FAD70 (ResCGetHighestConsecutiveCacheIndex.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlDosPathNameToNtPathName_U @ 0x18006DF80 (RtlDosPathNameToNtPathName_U.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x180093CD0 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesW(__int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  int AttributesFile; // ebx
  _BYTE v4[8]; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-70h]
  int v6; // [rsp+30h] [rbp-68h]
  __int64 v7; // [rsp+38h] [rbp-60h]
  _BYTE *v8; // [rsp+40h] [rbp-58h]
  int v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  unsigned int v11; // [rsp+80h] [rbp-18h]

  if ( RtlDosPathNameToNtPathName_U(a1, (__int64)v4, 0LL, 0LL) )
  {
    v2 = v5;
    v7 = 0LL;
    v8 = v4;
    v6 = 48;
    v10 = 0LL;
    v9 = 64;
    AttributesFile = ZwQueryAttributesFile();
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    result = 0xFFFFFFFFLL;
    if ( AttributesFile >= 0 )
      return v11;
  }
  else
  {
    RtlSetLastWin32Error(3u);
    return 0xFFFFFFFFLL;
  }
  return result;
}
