/*
 * XREFs of ??$QueryValueBlob@V_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_@@@Z @ 0x1C00A7910
 * Callers:
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C00A3618 (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00AF758 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00C4450 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueBlob<_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_>(
        HANDLE *a1,
        __int64 a2,
        __int64 a3)
{
  _BYTE *v3; // rbx
  HANDLE v5; // rcx
  _BYTE *v6; // rsi
  NTSTATUS v7; // eax
  NTSTATUS v8; // edi
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-138h] BYREF
  PVOID v12; // [rsp+38h] [rbp-130h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v14; // [rsp+180h] [rbp+18h] BYREF

  v14 = a3;
  v3 = 0LL;
  v5 = *a1;
  v12 = 0LL;
  v6 = KeyValueInformation;
  v7 = ZwQueryValueKey(
         v5,
         (PUNICODE_STRING)&Ndis::FilterListValueName,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x100u,
         &ResultLength);
  v8 = v7;
  if ( v7 != -2147483643 )
  {
    if ( v7 < 0 )
      goto LABEL_5;
    goto LABEL_3;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x6E694252u);
  KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&v12, PoolWithTag);
  v3 = v12;
  if ( !v12 )
  {
    v8 = -1073741670;
    goto LABEL_5;
  }
  v8 = ZwQueryValueKey(
         *a1,
         (PUNICODE_STRING)&Ndis::FilterListValueName,
         KeyValuePartialInformation,
         v12,
         ResultLength,
         &ResultLength);
  if ( v8 >= 0 )
  {
    v6 = v3;
LABEL_3:
    if ( *((_DWORD *)v6 + 1) == 3 )
      v8 = lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator()(&v14, v6 + 12, *((unsigned int *)v6 + 2));
    else
      v8 = -1073741788;
  }
LABEL_5:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v8;
}
