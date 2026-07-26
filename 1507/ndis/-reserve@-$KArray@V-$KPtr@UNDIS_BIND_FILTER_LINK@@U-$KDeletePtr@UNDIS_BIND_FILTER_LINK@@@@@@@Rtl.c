/*
 * XREFs of ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A0F78
 * Callers:
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C009D65C (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A1068 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 * Callees:
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00A8EB4 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  int v2; // edi
  char *PoolWithTag; // r14
  __int64 i; // rdx
  char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 j; // rsi
  __int64 v11; // rbp

  v2 = a2;
  if ( *(unsigned int *)(a1 + 4) >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    if ( PoolWithTag )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
      {
        v7 = &PoolWithTag[8 * i];
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 16);
          v9 = *(_QWORD *)(v8 + 8 * i);
          *(_QWORD *)(v8 + 8 * i) = 0LL;
          *(_QWORD *)v7 = v9;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * j);
          if ( v11 )
          {
            KRef<NDIS_BIND_FILTER_DRIVER>::unref(v11 + 104);
            NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE((NDIS_BIND_LINK_BASE *)(v11 + 8));
            ExFreePoolWithTag((PVOID)v11, 0x4C6C4642u);
          }
        }
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x7272414Bu);
      }
      *(_DWORD *)(a1 + 4) = v2;
      *(_QWORD *)(a1 + 16) = PoolWithTag;
      return 1;
    }
  }
  return 0;
}
