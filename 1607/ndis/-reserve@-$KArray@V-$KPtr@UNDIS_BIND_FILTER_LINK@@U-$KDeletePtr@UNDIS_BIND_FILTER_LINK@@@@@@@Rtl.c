/*
 * XREFs of ?reserve@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A51B4
 * Callers:
 *     ?grow@?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A5248 (-grow@-$KArray@V-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@A.c)
 *     _lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_::operator() @ 0x1C00AF758 (_lambda_9de55ca7b1f0fe2b3bf40ef5b9f15f31_--operator().c)
 * Callees:
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00AF868 (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>>::reserve(
        __int64 a1,
        unsigned __int64 a2)
{
  int v2; // esi
  unsigned int v4; // edi
  char *PoolWithTag; // r14
  unsigned int i; // edx
  char *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // rax

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
        for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
        {
          v8 = &PoolWithTag[8 * i];
          if ( v8 )
          {
            v9 = *(_QWORD *)(a1 + 16);
            v10 = *(_QWORD *)(v9 + 8LL * i);
            *(_QWORD *)(v9 + 8LL * i) = 0LL;
            *(_QWORD *)v8 = v10;
          }
        }
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( *(_DWORD *)(a1 + 8) )
          {
            do
              KPtr<NDIS_BIND_FILTER_LINK,KDeletePtr<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'(*(_QWORD *)(a1 + 16) + 8LL * v4++);
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
