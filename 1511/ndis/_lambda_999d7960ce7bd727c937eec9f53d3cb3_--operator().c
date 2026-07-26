/*
 * XREFs of _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C00A6BF4
 * Callers:
 *     ??$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@Z @ 0x1C00A18F0 (--$QueryValueBlob@V_lambda_999d7960ce7bd727c937eec9f53d3cb3_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0099310 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?append@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N$$QEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A5034 (-append@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@.c)
 *     ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A5080 (-reserve@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A5E24 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator()(__int64 *a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *v9; // rax
  char v10; // r15
  char *v11; // rsi
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6 = a3 / 0x12;
  if ( a3 % 0x12uLL )
    return 3221225485LL;
  if ( v6 > 0x80 )
    return 3221226539LL;
  if ( Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::reserve(*a1 + 32, v6) )
  {
    v8 = 0LL;
    if ( !v6 )
    {
LABEL_14:
      ++*(_DWORD *)(*a1 + 136);
      return 0LL;
    }
    while ( 1 )
    {
      v3 |= 1u;
      v9 = Ndis::BindStack::BuildFilterLink(v7, &P, a2 + 18 * v8, *(unsigned __int16 *)(a2 + 18 * v8 + 16));
      if ( !Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::append(*a1 + 32, v9) )
        goto LABEL_16;
      v7 = *a1;
      if ( (unsigned int)v8 >= (unsigned __int64)*(unsigned int *)(*a1 + 40) )
        __fastfail(0xBAD0FFu);
      if ( *(_QWORD *)(*(_QWORD *)(v7 + 48) + 8 * v8) )
        v10 = 0;
      else
LABEL_16:
        v10 = 1;
      if ( (v3 & 1) != 0 )
      {
        v11 = (char *)P;
        v3 &= ~1u;
        if ( P )
        {
          KRef<NDIS_BIND_FILTER_DRIVER>::unref((volatile signed __int32 **)P + 13);
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v11 + 8));
          ExFreePoolWithTag(v11, 0x4C6C4642u);
        }
      }
      if ( v10 )
        break;
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= v6 )
        goto LABEL_14;
    }
  }
  return 3221225626LL;
}
