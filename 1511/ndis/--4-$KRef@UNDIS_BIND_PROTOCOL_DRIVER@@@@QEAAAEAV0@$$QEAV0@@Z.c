/*
 * XREFs of ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A5910
 * Callers:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A5D40 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A70D0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

volatile signed __int32 **__fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(
        volatile signed __int32 **a1,
        volatile signed __int32 **a2)
{
  volatile signed __int32 *v3; // rbx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a1);
    *a1 = v3;
  }
  return a1;
}
