/*
 * XREFs of ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0052650 (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Rtl@@_KAEAV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@@Z @ 0x1C00A24B4 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ??_G?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z @ 0x1C00A5BE4 (--_G-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@QEAAPEAXI@Z.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$KPtr@UNDIS_BIND_FILTER_LINK@@U?$KDeletePtr@UNDIS_BIND_FILTER_LINK@@@@@@PEBU_GUID@@K@Z @ 0x1C00A5E24 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$KPtr@UNDIS_BIND_FILTER_LINK@@U-$KDeletePtr@UNDIS_BIND_.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C00A6664 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ??4?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00A6B90 (--4-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C00A6BC0 (-reset@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     _lambda_999d7960ce7bd727c937eec9f53d3cb3_::operator() @ 0x1C00A6BF4 (_lambda_999d7960ce7bd727c937eec9f53d3cb3_--operator().c)
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@QEAA_N_K@Z @ 0x1C00A778C (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@@Rtl@@QEAA_N_K@Z.c)
 *     _lambda_7db8344f8beb56adaa003951e6a1fc8c_::operator() @ 0x1C00DD434 (_lambda_7db8344f8beb56adaa003951e6a1fc8c_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::unref(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v1 + 20, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v1);
  }
  return result;
}
