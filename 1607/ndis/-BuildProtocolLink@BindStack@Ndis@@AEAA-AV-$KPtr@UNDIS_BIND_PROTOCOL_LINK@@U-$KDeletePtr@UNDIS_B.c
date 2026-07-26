/*
 * XREFs of ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A3698
 * Callers:
 *     _lambda_91558b45fed37b56f47adbcac45390b4_::operator() @ 0x1C00A3010 (_lambda_91558b45fed37b56f47adbcac45390b4_--operator().c)
 * Callees:
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z @ 0x1C00A3704 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDele_ea_1C00A3704.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A3EB4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A44E4 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 */

_QWORD *__fastcall Ndis::BindStack::BuildProtocolLink(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 ProtocolDriver; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  char v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  ProtocolDriver = ndisBindGetProtocolDriver(&v8, a3, 0LL);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v7, ProtocolDriver);
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v8);
  if ( v7 )
    Ndis::BindStack::BuildProtocolLink(v5, a2, &v7);
  else
    *a2 = 0LL;
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&v7);
  return a2;
}
