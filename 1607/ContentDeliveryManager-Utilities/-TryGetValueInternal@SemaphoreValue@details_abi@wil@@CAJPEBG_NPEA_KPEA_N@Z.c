/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800031FC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000CC6C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000D17C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800014F8 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180002C0C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180002C68 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800030A8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  __int64 v4; // r9
  WCHAR *v5; // rdx
  signed __int64 v6; // rcx
  WCHAR v8; // ax
  HANDLE v9; // rax
  void *v10; // rdi
  const char *v11; // r9
  __int64 v12; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  HANDLE v15; // rax
  void *v16; // rbx
  int v17; // eax
  __int64 v18; // r8
  const char *v19; // r9
  __int64 v20; // r8
  const char *v21; // r9
  __int64 v22; // r8
  const char *v23; // r9
  int v25; // [rsp+20h] [rbp-E0h] BYREF
  int v26[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+178h]

  *a3 = 0LL;
  v4 = 260LL;
  v5 = Name;
  v6 = a1 - (char *)Name;
  do
  {
    if ( v4 == -2147483386 )
      break;
    v8 = *(WCHAR *)((char *)v5 + v6);
    if ( !v8 )
      break;
    *v5++ = v8;
    --v4;
  }
  while ( v4 );
  if ( !v4 )
    --v5;
  *v5 = 0;
  StringCchCatW(Name, 260LL, (char *)L"_p0");
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
  v26[0] = 0;
  v25 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v9, v26);
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
  StringCchCatW(Name, 260LL, (char *)L"h");
  v15 = OpenSemaphoreW(0x1F0003u, 0, Name);
  v16 = v15;
  if ( !v15 )
  {
    v12 = 213LL;
    goto LABEL_10;
  }
  v17 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, &v25);
  LastError = v17;
  if ( v17 >= 0 )
  {
    if ( !CloseHandle(v16) )
    {
      wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v20, v21);
      __debugbreak();
    }
    *a3 = ((__int64)v25 << 31) | v26[0];
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v17);
  if ( !CloseHandle(v16) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v18, v19);
    __debugbreak();
  }
LABEL_21:
  if ( v10 && !CloseHandle(v10) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x623, v22, v23);
    JUMPOUT(0x180003421LL);
  }
  return LastError;
}
