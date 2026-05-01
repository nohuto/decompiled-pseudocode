/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180002E54
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000380C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800016EC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002C3C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002C5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180002D00 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  WCHAR *v4; // rdx
  signed __int64 v5; // rcx
  __int64 v7; // r9
  WCHAR v8; // ax
  HANDLE v9; // rax
  void *v10; // rdi
  const char *v11; // r9
  __int64 v12; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  __int64 v15; // rdx
  HANDLE v16; // rax
  void *v17; // rbx
  int v18; // eax
  __int64 v19; // r8
  const char *v20; // r9
  __int64 v21; // r8
  const char *v22; // r9
  __int64 v23; // r8
  const char *v24; // r9
  int v26; // [rsp+28h] [rbp-E0h] BYREF
  int v27[3]; // [rsp+2Ch] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  *a3 = 0LL;
  v4 = Name;
  v5 = a1 - (char *)Name;
  v7 = 260LL;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v4 + v5);
    if ( !v8 )
      break;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  if ( !v7 )
    --v4;
  *v4 = 0;
  StringCchCatW(Name, (__int64)v4, (char *)L"_p0");
  v9 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v10 = v9;
  if ( !v9 )
  {
    if ( GetLastError() != 2 )
    {
      v12 = 201LL;
LABEL_10:
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v12, (__int64)"wil", v11);
      goto LABEL_21;
    }
LABEL_20:
    LastError = 0;
    goto LABEL_21;
  }
  v27[0] = 0;
  v26 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v9, v27);
  LastError = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"wil",
      (const char *)(unsigned int)ValueFromSemaphore);
    goto LABEL_21;
  }
  StringCchCatW(Name, v15, (char *)L"h");
  v16 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v17 = v16;
  if ( !v16 )
  {
    v12 = 213LL;
    goto LABEL_10;
  }
  v18 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, &v26);
  LastError = v18;
  if ( v18 >= 0 )
  {
    if ( !CloseHandle(v17) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v21, v22);
      __debugbreak();
    }
    *a3 = ((__int64)v26 << 31) | v27[0];
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v18);
  if ( !CloseHandle(v17) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v19, v20);
    __debugbreak();
  }
LABEL_21:
  if ( v10 && !CloseHandle(v10) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v23, v24);
    JUMPOUT(0x180003072LL);
  }
  return LastError;
}
