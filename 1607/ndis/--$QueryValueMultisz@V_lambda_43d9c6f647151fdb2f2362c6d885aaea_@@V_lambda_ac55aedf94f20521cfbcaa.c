/*
 * XREFs of ??$QueryValueMultisz@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaaf74fbc728b_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_43d9c6f647151fdb2f2362c6d885aaea_@@V_lambda_ac55aedf94f20521cfbcaaf74fbc728b_@@@Z @ 0x1C00E31E4
 * Callers:
 *     ?ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z @ 0x1C00E36AC (-ReadV1FilterList@BindStack@Ndis@@AEAAJAEAVKRegKey@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A3280 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@.c)
 *     ?reset@?$KPtr@EU?$KDeleteArray@E@@@@QEAAXPEAE@Z @ 0x1C00C4450 (-reset@-$KPtr@EU-$KDeleteArray@E@@@@QEAAXPEAE@Z.c)
 *     _lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator() @ 0x1C00E33B4 (_lambda_ac55aedf94f20521cfbcaaf74fbc728b_--operator().c)
 */

__int64 KRegKey::QueryValueMultisz<_lambda_43d9c6f647151fdb2f2362c6d885aaea_,_lambda_ac55aedf94f20521cfbcaaf74fbc728b_>(
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
  PVOID PoolWithTag; // rax
  __int64 v11; // rax
  _WORD *v12; // rdi
  _WORD *v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax
  unsigned int v17; // r14d
  _WORD *v18; // rsi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  PVOID P; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[256]; // [rsp+40h] [rbp-C0h] BYREF
  va_list va; // [rsp+1A8h] [rbp+A8h] BYREF

  va_start(va, a3);
  v4 = *a1;
  v5 = 0LL;
  P = 0LL;
  v7 = KeyValueInformation;
  v8 = ZwQueryValueKey(v4, a2, KeyValuePartialInformation, KeyValueInformation, 0x100u, &ResultLength);
  v9 = v8;
  if ( v8 == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength, 0x7A536C4Du);
    KPtr<unsigned char,KDeleteArray<unsigned char>>::reset(&P, PoolWithTag);
    v5 = P;
    if ( !P )
    {
LABEL_3:
      v9 = -1073741670;
      goto LABEL_17;
    }
    v9 = ZwQueryValueKey(*a1, a2, KeyValuePartialInformation, P, ResultLength, &ResultLength);
    if ( v9 < 0 )
      goto LABEL_17;
    v7 = v5;
  }
  else if ( v8 < 0 )
  {
    goto LABEL_17;
  }
  if ( *((_DWORD *)v7 + 1) != 7 )
  {
    v9 = -1073741788;
    goto LABEL_17;
  }
  v11 = *((unsigned int *)v7 + 2);
  if ( (v11 & 1) != 0 )
  {
    v9 = -1073741811;
    goto LABEL_17;
  }
  v12 = v7 + 12;
  v13 = v7 + 12;
  v14 = (unsigned __int64)&v7[v11 + 12];
  v15 = 0;
  if ( (unsigned __int64)(v7 + 12) >= v14 )
    goto LABEL_16;
LABEL_12:
  if ( *v13 )
  {
    while ( (unsigned __int64)++v13 < v14 )
    {
      if ( !*v13 )
      {
        ++v15;
        if ( (unsigned __int64)++v13 < v14 )
          goto LABEL_12;
        break;
      }
    }
LABEL_16:
    v9 = -1073741789;
    goto LABEL_17;
  }
  if ( v15 <= 0x80 )
  {
    if ( !Rtl::KArray<KPtr<NDIS_BIND_PROTOCOL_LINK,KDeletePtr<NDIS_BIND_PROTOCOL_LINK>>>::reserve(a3 + 8, v15) )
      goto LABEL_3;
    v17 = 0;
    while ( *v12 )
    {
      v18 = v12;
      do
        ++v18;
      while ( *v18 );
      v9 = lambda_ac55aedf94f20521cfbcaaf74fbc728b_::operator()((__int64 *)va, v12, v17);
      if ( v9 < 0 )
        goto LABEL_17;
      v12 = v18 + 1;
      ++v17;
    }
    v9 = 0;
  }
  else
  {
    v9 = -1073740757;
  }
LABEL_17:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v9;
}
