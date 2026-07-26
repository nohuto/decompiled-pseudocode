/*
 * XREFs of _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C009D65C
 * Callers:
 *     ??$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@Z @ 0x1C009CFA0 (--$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 * Callees:
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A0F2C (-append@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A0F78 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A12BC (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator()(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v10; // rax
  char v11; // r15
  char *v12; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6 = (unsigned int)a3 / 0x12;
  if ( (unsigned int)a3 % 0x12uLL )
    return 3221225485LL;
  if ( v6 > 0x80 )
    return 3221226539LL;
  if ( (unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::reserve(
                          *a1 + 32,
                          v6,
                          a3,
                          0LL) )
  {
    v8 = 0LL;
    if ( !v6 )
    {
LABEL_5:
      ++*(_DWORD *)(*a1 + 136);
      return 0LL;
    }
    while ( 1 )
    {
      v3 |= 1u;
      v10 = Ndis::BindStack::BuildFilterLink(v7, &P, a2 + 18 * v8, *(unsigned __int16 *)(a2 + 18 * v8 + 16));
      if ( !(unsigned __int8)Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::append(
                               *a1 + 32,
                               v10) )
        goto LABEL_16;
      v7 = *a1;
      if ( (unsigned int)v8 >= (unsigned __int64)*(unsigned int *)(*a1 + 40) )
        __fastfail(0xBAD0FFu);
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * v8) )
        v11 = 0;
      else
LABEL_16:
        v11 = 1;
      if ( (v3 & 1) != 0 )
      {
        v12 = (char *)P;
        v3 &= ~1u;
        if ( P )
        {
          KRef<NDIS_BIND_FILTER_DRIVER>::unref((char *)P + 104);
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v12 + 8));
          ExFreePoolWithTag(v12, 0x4C6C4642u);
        }
      }
      if ( v11 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v6 )
        goto LABEL_5;
    }
  }
  return 3221225626LL;
}
