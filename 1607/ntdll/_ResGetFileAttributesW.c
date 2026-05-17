/*
 * XREFs of _ResGetFileAttributesW @ 0x180104A74
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x180104E9C (ResCGetHighestCacheIndex.c)
 *     ResCGetHighestConsecutiveCacheIndex @ 0x180105034 (ResCGetHighestConsecutiveCacheIndex.c)
 * Callees:
 *     RtlDosPathNameToNtPathName_U @ 0x180011710 (RtlDosPathNameToNtPathName_U.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A6BC0 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall ResGetFileAttributesW(int a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rdi
  int AttributesFile; // ebx
  char v4; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v5; // [rsp+28h] [rbp-70h]
  int v6; // [rsp+30h] [rbp-68h]
  __int64 v7; // [rsp+38h] [rbp-60h]
  char *v8; // [rsp+40h] [rbp-58h]
  int v9; // [rsp+48h] [rbp-50h]
  __int128 v10; // [rsp+50h] [rbp-48h]
  unsigned int v11; // [rsp+80h] [rbp-18h]

  if ( RtlDosPathNameToNtPathName_U(a1, (int)&v4, 0LL, 0LL) )
  {
    v2 = v5;
    v7 = 0LL;
    v8 = &v4;
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
