/*
 * XREFs of ?allocate@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C00A14C0
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A106C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

char __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::allocate(volatile signed __int32 **a1)
{
  char *PoolWithTag; // rax
  char v3; // bl
  _DWORD *v4; // rdi
  _QWORD *v5; // rax

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x446C4642u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_WORD *)PoolWithTag + 8) = 0;
    v5 = PoolWithTag + 24;
    v5[1] = v5;
    *v5 = v5;
    v4[14] = 0;
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 9) = 0LL;
    v4[20] = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( *a1 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1);
    *a1 = 0LL;
  }
  if ( v4 )
  {
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1);
    *a1 = v4;
    return 1;
  }
  return v3;
}
