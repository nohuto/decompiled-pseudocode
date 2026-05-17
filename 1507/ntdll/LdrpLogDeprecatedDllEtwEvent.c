/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800739D8
 * Callers:
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 * Callees:
 *     EtwNotificationUnregister @ 0x18000E370 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18000F6B0 (EtwEventWrite.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x180039340 (EtwEventRegister.c)
 *     CompatCachepLookupCdb @ 0x18006B4E0 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

wchar_t *__fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *result; // rax
  int v5; // eax
  unsigned __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v7; // [rsp+28h] [rbp-20h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]

  v2 = *a1;
  if ( v2 + 2 > a1[1] || (v3 = (wchar_t *)*((_QWORD *)a1 + 1), v3[v2 >> 1]) )
  {
    result = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v2 + 2);
    v3 = result;
    if ( !result )
      return result;
    memmove(result, *((const void **)a1 + 1), *a1);
    v3[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v3, 4);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister((__int64)&UserLoaderGuid, 0LL, 0LL, &v6);
    if ( !(_DWORD)result )
    {
      v5 = *a1 + 2;
      v7 = v3;
      v8 = v5;
      v9 = 0;
      EtwEventWrite(v6, (int)&DeprecatedDll, 1, (__int64)&v7);
      result = (wchar_t *)EtwNotificationUnregister(v6, 0LL);
    }
    if ( v3 != *((wchar_t **)a1 + 1) )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v3);
  }
  return result;
}
