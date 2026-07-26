/*
 * XREFs of ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A5080
 * Callers:
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A5164 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C00A6BF4 (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A5BE4 (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  int v2; // esi
  unsigned int v4; // edi
  char *PoolWithTag; // r14
  __int64 i; // rdx
  char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = a2;
  if ( *(unsigned int *)(a1 + 4) >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v4 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 8); i = (unsigned int)(i + 1) )
        {
          v7 = &PoolWithTag[8 * (unsigned int)i];
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 16);
            v9 = *(_QWORD *)(v8 + 8LL * (unsigned int)i);
            *(_QWORD *)(v8 + 8LL * (unsigned int)i) = 0LL;
            *(_QWORD *)v7 = v9;
          }
        }
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( *(_DWORD *)(a1 + 8) )
          {
            do
              KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(
                *(_QWORD *)(a1 + 16) + 8LL * v4++,
                i);
            while ( v4 < *(_DWORD *)(a1 + 8) );
          }
          ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0x7272414Bu);
        }
        *(_DWORD *)(a1 + 4) = v2;
        *(_QWORD *)(a1 + 16) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
