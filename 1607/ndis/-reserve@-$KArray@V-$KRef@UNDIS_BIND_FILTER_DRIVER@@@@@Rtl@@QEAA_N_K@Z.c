/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A11C8
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A12AC (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::reserve(__int64 a1, unsigned __int64 a2)
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
              KRef<NDIS_BIND_FILTER_DRIVER>::unref(*(_QWORD *)(a1 + 16) + 8LL * v4++);
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
