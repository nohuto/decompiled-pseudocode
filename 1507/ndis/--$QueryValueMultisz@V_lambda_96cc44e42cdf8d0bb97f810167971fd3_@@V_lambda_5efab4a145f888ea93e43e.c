/*
 * XREFs of ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B271C
 * Callers:
 *     ??$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@KRegKey@@QEAAJPEBGV_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a145f888ea93e43ede63b27154_@@@Z @ 0x1C00B2A48 (--$QueryValueMultisz@V_lambda_96cc44e42cdf8d0bb97f810167971fd3_@@V_lambda_5efab4a14_ea_1C00B2A48.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?reset@?$KPtr@UKString@Rtl@@U?$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z @ 0x1C00A0598 (-reset@-$KPtr@UKString@Rtl@@U-$KDeletePtr@UKString@Rtl@@@@@@QEAAXPEAUKString@Rtl@@@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF570 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00B2AC0 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
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
  __int64 v11; // rax
  wchar_t *v12; // rdx
  _WORD *v13; // rcx
  unsigned __int64 v14; // r8
  int v15; // esi
  wchar_t *v16; // rdi
  struct Rtl::KString *v17; // rax
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v21; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF

  v5 = *a1;
  v6 = 0LL;
  v21 = 0LL;
  v8 = KeyValueInformation;
  v9 = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v10 = v9;
  if ( v9 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&v21, PoolWithTag);
    v6 = v21;
    if ( !v21 )
    {
LABEL_23:
      v10 = -1073741670;
      goto LABEL_20;
    }
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v21, ResultLength, &ResultLength);
    if ( v10 < 0 )
      goto LABEL_20;
    v8 = v6;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_20;
  }
  if ( *((_DWORD *)v8 + 1) != 7 )
  {
    v10 = -1073741788;
    goto LABEL_20;
  }
  v11 = *((unsigned int *)v8 + 2);
  if ( (v11 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_20;
  }
  v12 = (wchar_t *)(v8 + 12);
  v13 = v8 + 12;
  v14 = (unsigned __int64)&v8[v11 + 12];
  if ( (unsigned __int64)(v8 + 12) >= v14 )
    goto LABEL_29;
LABEL_6:
  if ( *v13 )
  {
    while ( (unsigned __int64)++v13 < v14 )
    {
      if ( !*v13 )
      {
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_6;
        break;
      }
    }
LABEL_29:
    v10 = -1073741789;
    goto LABEL_20;
  }
  v15 = 0;
  while ( *v12 )
  {
    v16 = v12;
    do
      ++v16;
    while ( *v16 );
    if ( !v15 )
    {
      v17 = Rtl::KString::Initialize(v12);
      KPtr<Rtl::KString,KDeletePtr<Rtl::KString>>::reset((void **)(a4 + 40), v17);
    }
    if ( !*(_QWORD *)(a4 + 40) )
      goto LABEL_23;
    v12 = v16 + 1;
    ++v15;
  }
  v10 = 0;
LABEL_20:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}
