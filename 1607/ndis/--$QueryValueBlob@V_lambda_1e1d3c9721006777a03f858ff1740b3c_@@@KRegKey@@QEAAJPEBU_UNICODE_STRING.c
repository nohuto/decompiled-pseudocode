/*
 * XREFs of ??$QueryValueBlob@V_lambda_1e1d3c9721006777a03f858ff1740b3c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_1e1d3c9721006777a03f858ff1740b3c_@@@Z @ 0x1C00A767C
 * Callers:
 *     ?ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00A74DC (-ndisBindReadProtocolDriverFromV2Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00C4450 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob<_lambda_1e1d3c9721006777a03f858ff1740b3c_>(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        _OWORD *a3)
{
  _BYTE *v3; // rbx
  HANDLE v5; // rcx
  _BYTE *v7; // rsi
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-148h] BYREF
  PVOID v13; // [rsp+38h] [rbp-140h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-138h] BYREF

  v3 = 0LL;
  v5 = *a1;
  v13 = 0LL;
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
  KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&v13, PoolWithTag);
  v3 = v13;
  if ( !v13 )
  {
    v9 = -1073741670;
    goto LABEL_6;
  }
  v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v13, ResultLength, &ResultLength);
  if ( v9 >= 0 )
  {
    v7 = v3;
LABEL_3:
    if ( *((_DWORD *)v7 + 1) == 3 )
    {
      if ( *((_DWORD *)v7 + 2) == 16 )
      {
        v9 = 0;
        *a3 = *(_OWORD *)(v7 + 12);
      }
      else
      {
        v9 = -1073741811;
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
