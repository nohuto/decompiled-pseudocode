/*
 * XREFs of ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494
 * Callers:
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005A2D4 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A1E20 (NdisRegisterProtocolDriver.c)
 *     _lambda_91558b45fed37b56f47adbcac45390b4_::operator() @ 0x1C00A3010 (_lambda_91558b45fed37b56f47adbcac45390b4_--operator().c)
 *     ??_G?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A351C (--_G-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@QEAAPEAXI@Z.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@PEAU_UNICODE_STRING@@@Z @ 0x1C00A3698 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U-$KDeletePtr@UNDIS_B.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00A3EB4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_PROTOCOL_LINK@@U?$KDeletePtr@UNDIS_BIND_PROTOCOL_LINK@@@@@@@Z @ 0x1C00A4084 (--$AddBindingToSet@UNDIS_BIND_PROTOCOL_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@A.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A44B0 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A44E4 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A4514 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Rtl@@QEAA_N_K@Z.c)
 *     _lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_ @ 0x1C00B0490 (_lambda_727c6594aeeec297d735c04587a6780c_--_lambda_invoker_cdecl_.c)
 *     NdisRegisterProtocol @ 0x1C00CF100 (NdisRegisterProtocol.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3484 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00E3800 (_lambda_a13a88d06c7c63155a98f7d7ba7090a7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 16, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v1);
  }
  return result;
}
