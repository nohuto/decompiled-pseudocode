/*
 * XREFs of ??$QueryValueBlob@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5bc2d9b33f02c20be684baa9d0d621f5_@@@Z @ 0x1C00A16B8
 * Callers:
 *     Ndis::BindRegistry::LoadNetworkInterfaceAddress @ 0x1C00AC530 (Ndis--BindRegistry--LoadNetworkInterfaceAddress.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00BF740 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob<_lambda_5bc2d9b33f02c20be684baa9d0d621f5_>(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _WORD *a3)
{
  _DWORD *v3; // rbx
  HANDLE v5; // rcx
  _DWORD *v7; // rsi
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  unsigned int v10; // ecx
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF

  v3 = 0LL;
  v5 = *a1;
  v14 = 0LL;
  v7 = KeyValueInformation;
  v8 = ZwQueryValueKey(v5, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 != -2147483643 )
  {
    if ( v8 < 0 )
      goto LABEL_6;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6E694252u);
  KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&v14, PoolWithTag);
  v3 = v14;
  if ( !v14 )
  {
    v9 = -1073741670;
    goto LABEL_6;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v14, ResultLength, &ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v3;
LABEL_3:
    if ( v7[1] == 3 )
    {
      v10 = v7[2];
      if ( v10 > 0x20 )
      {
        v9 = -1073741811;
      }
      else
      {
        *a3 = v10;
        memmove(a3 + 1, v7 + 3, v10);
        v9 = 0;
      }
    }
    else
    {
      v9 = -1073741788;
    }
  }
LABEL_6:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v9;
}
