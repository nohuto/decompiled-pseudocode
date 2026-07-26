/*
 * XREFs of ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A145C
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A377C (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

volatile signed __int32 **__fastcall KRef<NDIS_BIND_FILTER_DRIVER>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    KRef<NDIS_BIND_FILTER_DRIVER>::unref(a1);
    *a1 = v3;
  }
  return a1;
}
