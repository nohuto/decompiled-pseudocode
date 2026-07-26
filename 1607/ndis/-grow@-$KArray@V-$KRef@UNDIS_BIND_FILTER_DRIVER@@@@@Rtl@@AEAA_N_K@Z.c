/*
 * XREFs of ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@AEAA_N_K@Z @ 0x1C00A12AC
 * Callers:
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A106C (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::grow(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8

  v2 = *(unsigned int *)(a1 + 4);
  if ( v2 >= a2 )
    return 1;
  if ( a2 < 4 )
    a2 = 4LL;
  if ( a2 < (unsigned int)v2 + ((unsigned int)v2 >> 1) )
    a2 = (unsigned int)v2 + ((unsigned int)v2 >> 1);
  return Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>>::reserve(a1, a2);
}
