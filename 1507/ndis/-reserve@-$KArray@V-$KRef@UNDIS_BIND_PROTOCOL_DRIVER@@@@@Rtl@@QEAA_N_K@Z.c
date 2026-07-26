/*
 * XREFs of ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00AD66C
 * Callers:
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00AD754 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@AEAA_N_K@Z.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00D00EC (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>>::reserve(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  char *PoolWithTag; // r14
  __int64 i; // rdx
  char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 j; // rsi
  volatile signed __int32 *v10; // rcx

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
        v6 = &PoolWithTag[8 * i];
        if ( v6 )
        {
          v7 = *(_QWORD *)(a1 + 16);
          v8 = *(_QWORD *)(v7 + 8 * i);
          *(_QWORD *)(v7 + 8 * i) = 0LL;
          *(_QWORD *)v6 = v8;
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 8); j = (unsigned int)(j + 1) )
        {
          v10 = *(volatile signed __int32 **)(*(_QWORD *)(a1 + 16) + 8 * j);
          if ( v10 )
          {
            if ( !_InterlockedDecrement(v10 + 16) )
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v10);
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
