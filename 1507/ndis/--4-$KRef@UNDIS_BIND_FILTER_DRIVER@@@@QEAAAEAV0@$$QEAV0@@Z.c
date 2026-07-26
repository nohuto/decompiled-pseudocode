/*
 * XREFs of ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00ADDF4
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001CB10 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00ADDD8 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
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
