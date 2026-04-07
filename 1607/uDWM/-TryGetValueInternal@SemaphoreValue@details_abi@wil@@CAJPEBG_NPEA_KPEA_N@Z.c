/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800726A0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180070E84 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800155D0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180071078 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x180071948 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800722B4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800722D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800725B4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  wil::details *v5; // rax
  wil::details *v6; // rdi
  void *v7; // rdx
  const char *v8; // r9
  __int64 v9; // rdx
  unsigned int LastError; // esi
  int ValueFromSemaphore; // eax
  wil::details *v12; // rax
  wil::details *v13; // rbx
  int v14; // eax
  void *v15; // rdx
  void *v16; // rdx
  int v18; // [rsp+20h] [rbp-E0h] BYREF
  int v19[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  StringCchCatW(Name, 260LL, (size_t *)L"_p0");
  v5 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v6 = v5;
  if ( v5 )
  {
    v19[0] = 0;
    v18 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v5, v19);
    LastError = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      goto LABEL_13;
    }
    StringCchCatW(Name, 260LL, (size_t *)L"h");
    v12 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v13 = v12;
    if ( !v12 )
    {
      v9 = 213LL;
      goto LABEL_4;
    }
    v14 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, &v18);
    LastError = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD7, (__int64)"wil", (const char *)(unsigned int)v14);
      wil::details::CloseHandle(v13, v16);
      goto LABEL_13;
    }
    wil::details::CloseHandle(v13, v15);
    *a3 = ((__int64)v18 << 31) | v19[0];
  }
  else if ( GetLastError() != 2 )
  {
    v9 = 201LL;
LABEL_4:
    LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)v9, (__int64)"wil", v8);
    goto LABEL_13;
  }
  LastError = 0;
LABEL_13:
  if ( v6 )
    wil::details::CloseHandle(v6, v7);
  return LastError;
}
