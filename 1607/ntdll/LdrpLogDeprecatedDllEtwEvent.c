/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800826C0
 * Callers:
 *     LdrpProcessWork @ 0x18000E19C (LdrpProcessWork.c)
 * Callees:
 *     CompatCachepLookupCdb @ 0x180010768 (CompatCachepLookupCdb.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     EtwEventRegister @ 0x18002A3C0 (EtwEventRegister.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     EtwNotificationUnregister @ 0x180059700 (EtwNotificationUnregister.c)
 *     EtwEventWrite @ 0x18005AF20 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
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
