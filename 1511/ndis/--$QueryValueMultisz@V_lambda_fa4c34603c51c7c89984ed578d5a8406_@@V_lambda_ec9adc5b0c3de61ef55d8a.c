/*
 * XREFs of ??$QueryValueMultisz@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_fa4c34603c51c7c89984ed578d5a8406_@@V_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_@@@Z @ 0x1C00A1798
 * Callers:
 *     ?ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z @ 0x1C00A5D28 (-ReadV1OrV2ProtocolList@BindStack@Ndis@@AEAAJAEAVKRegKey@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A6294 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A63F4 (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00BF740 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 KRegKey::QueryValueMultisz<_lambda_fa4c34603c51c7c89984ed578d5a8406_,_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_>(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        ...)
{
  HANDLE v4; // rcx
  _BYTE *v5; // rbx
  _BYTE *v7; // rsi
  NTSTATUS v8; // eax
  NTSTATUS v9; // edi
  __int64 v10; // rax
  _WORD *v11; // rdi
  _WORD *v12; // rcx
  unsigned __int64 v13; // rdx
  unsigned int v14; // eax
  _WORD *v15; // rsi
  PVOID PoolWithTag; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v19; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  va_list va; // [rsp+1A8h] [rbp+A8h] BYREF

  va_start(va, a3);
  v4 = *a1;
  v5 = 0LL;
  v19 = 0LL;
  v7 = KeyValueInformation;
  v8 = ZwQueryValueKey(v4, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&v19, PoolWithTag);
    v5 = v19;
    if ( !v19 )
      goto LABEL_13;
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v19, ResultLength, &ResultLength);
    if ( v9 < 0 )
      goto LABEL_20;
    v7 = v5;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_20;
  }
  if ( *((_DWORD *)v7 + 1) != 7 )
  {
    v9 = -1073741788;
    goto LABEL_20;
  }
  v10 = *((unsigned int *)v7 + 2);
  if ( (v10 & 1) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_20;
  }
  v11 = v7 + 12;
  v12 = v7 + 12;
  v13 = (unsigned __int64)&v7[v10 + 12];
  v14 = 0;
  if ( (unsigned __int64)(v7 + 12) >= v13 )
    goto LABEL_29;
LABEL_6:
  if ( *v12 )
  {
    while ( (unsigned __int64)++v12 < v13 )
    {
      if ( !*v12 )
      {
        ++v14;
        if ( (unsigned __int64)++v12 < v13 )
          goto LABEL_6;
        break;
      }
    }
LABEL_29:
    v9 = -1073741789;
    goto LABEL_20;
  }
  if ( v14 > 0x80 )
  {
    v9 = -1073740757;
    goto LABEL_20;
  }
  if ( !(unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(
                           a3 + 8,
                           v14) )
  {
LABEL_13:
    v9 = -1073741670;
    goto LABEL_20;
  }
  while ( *v11 )
  {
    v15 = v11;
    do
      ++v15;
    while ( *v15 );
    v9 = lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator()((__int64 *)va, v11);
    if ( v9 < 0 )
      goto LABEL_20;
    v11 = v15 + 1;
  }
  v9 = 0;
LABEL_20:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}
