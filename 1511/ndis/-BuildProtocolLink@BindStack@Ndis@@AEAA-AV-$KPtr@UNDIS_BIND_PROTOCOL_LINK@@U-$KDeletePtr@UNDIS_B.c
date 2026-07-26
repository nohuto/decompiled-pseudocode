/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A5D40
 * Callers:
 *     _lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_::operator() @ 0x1C00A63F4 (_lambda_ec9adc5b0c3de61ef55d8ad95ac8116c_--operator().c)
 * Callees:
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A22E4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A58C0 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A5910 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00A5DAC (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDele_ea_1C00A5DAC.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(__int64 a1, _QWORD *a2, const struct _UNICODE_STRING *a3)
{
  volatile signed __int32 **ProtocolDriver; // rax
  __int64 v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  ProtocolDriver = (volatile signed __int32 **)ndisBindGetProtocolDriver(&v8, a3, 0);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v7, ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v8);
  if ( v7 )
    Ndis::BindStack::BuildProtocolLink(v5, a2, &v7);
  else
    *a2 = 0LL;
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v7);
  return a2;
}
