/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A4514
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A45F8 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::reserve(__int64 a1, unsigned __int64 a2)
{
  int v2; // esi
  unsigned int v4; // edi
  char *PoolWithTag; // r14
  unsigned int i; // edx
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
        for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
        {
          v7 = &PoolWithTag[8 * i];
          if ( v7 )
          {
            v8 = *(_QWORD *)(a1 + 16);
            v9 = *(_QWORD *)(v8 + 8LL * i);
            *(_QWORD *)(v8 + 8LL * i) = 0LL;
            *(_QWORD *)v7 = v9;
          }
        }
        if ( *(_QWORD *)(a1 + 16) )
        {
          if ( *(_DWORD *)(a1 + 8) )
          {
            do
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 8LL * v4++));
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
