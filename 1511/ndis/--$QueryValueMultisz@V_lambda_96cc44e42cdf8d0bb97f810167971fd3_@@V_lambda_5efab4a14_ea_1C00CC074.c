/*
 * XREFs of ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00CC074
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBGV_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00CBFFC (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43e.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C009CBB8 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A210C (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00BF740 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz<_lambda_96cc44e42cdf8d0bb97f810167971fd3_,_lambda_5efab4a145f888ea93e43ede63b27154_>(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  _BYTE *v8; // rsi
  NTSTATUS v9; // eax
  NTSTATUS v10; // edi
  PVOID PoolWithTag; // rax
  __int64 v12; // rax
  wchar_t *v13; // rdx
  _WORD *v14; // rcx
  unsigned __int64 v15; // r8
  int v17; // esi
  wchar_t *v18; // rdi
  struct Rtl::KString *v19; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *a1;
  v6 = 0LL;
  P = 0LL;
  v8 = KeyValueInformation;
  v9 = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&P, PoolWithTag);
    v6 = P;
    if ( !P )
    {
LABEL_3:
      v10 = -1073741670;
      goto LABEL_17;
    }
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, P, ResultLength, &ResultLength);
    if ( v10 < 0 )
      goto LABEL_17;
    v8 = v6;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v8 + 1) != 7 )
  {
    v10 = -1073741788;
    goto LABEL_17;
  }
  v12 = *((unsigned int *)v8 + 2);
  if ( (v12 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_17;
  }
  v13 = (wchar_t *)(v8 + 12);
  v14 = v8 + 12;
  v15 = (unsigned __int64)&v8[v12 + 12];
  if ( (unsigned __int64)(v8 + 12) >= v15 )
    goto LABEL_16;
LABEL_12:
  if ( *v14 )
  {
    while ( (unsigned __int64)++v14 < v15 )
    {
      if ( !*v14 )
      {
        if ( (unsigned __int64)++v14 < v15 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v10 = -1073741789;
    goto LABEL_17;
  }
  v17 = 0;
  while ( *v13 )
  {
    v18 = v13;
    do
      ++v18;
    while ( *v18 );
    if ( !v17 )
    {
      v19 = Rtl::KString::Initialize(v13);
      KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)(a4 + 40), v19);
    }
    if ( !*(_QWORD *)(a4 + 40) )
      goto LABEL_3;
    v13 = v18 + 1;
    ++v17;
  }
  v10 = 0;
LABEL_17:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}
