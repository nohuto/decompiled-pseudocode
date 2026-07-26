/*
 * XREFs of ??$QueryValueMultisz@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_7b34f67d2fe748a9991e85b83cffda76_@@V_lambda_7db8344f8beb56adaa003951e6a1fc8c_@@@Z @ 0x1C00B2870
 * Callers:
 *     ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00B269C (-ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A71D0 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 *     _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00B2478 (_lambda_7db8344f8beb56adaa003951e6a1fc8c_--operator().c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00B2AC0 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 */

__int64 __fastcall KRegKey::QueryValueMultisz<_lambda_7b34f67d2fe748a9991e85b83cffda76_,_lambda_7db8344f8beb56adaa003951e6a1fc8c_>(
        HANDLE *a1,
        _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4)
{
  HANDLE v5; // rcx
  _BYTE *v6; // rbx
  _BYTE *v8; // rsi
  NTSTATUS v9; // eax
  int v10; // edi
  PVOID PoolWithTag; // rax
  __int64 v13; // rax
  const unsigned __int16 *v14; // rdi
  _WORD *v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned int v17; // eax
  unsigned int v18; // r14d
  const unsigned __int16 *v19; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v21; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+1A8h] [rbp+A8h] BYREF

  v24 = a4;
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
      goto LABEL_26;
    v10 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, v21, ResultLength, &ResultLength);
    if ( v10 < 0 )
      goto LABEL_3;
    v8 = v6;
  }
  else if ( v9 < 0 )
  {
    goto LABEL_3;
  }
  if ( *((_DWORD *)v8 + 1) != 7 )
  {
    v10 = -1073741788;
    goto LABEL_3;
  }
  v13 = *((unsigned int *)v8 + 2);
  if ( (v13 & 1) != 0 )
  {
    v10 = -1073741811;
    goto LABEL_3;
  }
  v14 = (const unsigned __int16 *)(v8 + 12);
  v15 = v8 + 12;
  v16 = (unsigned __int64)&v8[v13 + 12];
  v17 = 0;
  if ( (unsigned __int64)(v8 + 12) >= v16 )
    goto LABEL_30;
LABEL_12:
  if ( *v15 )
  {
    while ( (unsigned __int64)++v15 < v16 )
    {
      if ( !*v15 )
      {
        ++v17;
        if ( (unsigned __int64)++v15 < v16 )
          goto LABEL_12;
        break;
      }
    }
LABEL_30:
    v10 = -1073741789;
    goto LABEL_3;
  }
  if ( v17 > 0x80 )
  {
    v10 = -1073740757;
    goto LABEL_3;
  }
  if ( !Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(a3 + 8, v17) )
  {
LABEL_26:
    v10 = -1073741670;
    goto LABEL_3;
  }
  v18 = 0;
  while ( *v14 )
  {
    v19 = v14;
    do
      ++v19;
    while ( *v19 );
    v10 = lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator()((Ndis::BindStack *)&v24, v14, v18);
    if ( v10 < 0 )
      goto LABEL_3;
    v14 = v19 + 1;
    ++v18;
  }
  v10 = 0;
LABEL_3:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v10;
}
