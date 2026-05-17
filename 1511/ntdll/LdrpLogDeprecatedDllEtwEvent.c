/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x18007E788
 * Callers:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     EtwNotificationUnregister @ 0x180047E50 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x180049CE0 (EtwEventWrite.c)
 *     EtwEventRegister @ 0x1800541A0 (EtwEventRegister.c)
 *     CompatCachepLookupCdb @ 0x180075C80 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

wchar_t *__fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v2; // rcx
  wchar_t *v3; // rbx
  wchar_t *result; // rax
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  wchar_t *v9; // [rsp+28h] [rbp-20h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+34h] [rbp-14h]

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
    result = (wchar_t *)EtwEventRegister((int)&UserLoaderGuid, 0LL, 0LL, (__int64)&v8);
    if ( !(_DWORD)result )
    {
      v5 = *a1 + 2;
      v9 = v3;
      v10 = v5;
      v11 = 0;
      EtwEventWrite(v8, (int)&DeprecatedDll, 1, (__int64)&v9);
      result = (wchar_t *)EtwNotificationUnregister(v8, 0LL, v6, v7);
    }
    if ( v3 != *((wchar_t **)a1 + 1) )
      return (wchar_t *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v3);
  }
  return result;
}
