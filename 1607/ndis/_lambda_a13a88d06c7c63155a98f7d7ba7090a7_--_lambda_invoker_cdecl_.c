/*
 * XREFs of _lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_ @ 0x1C00E3800
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00E3484 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 */

__int64 __fastcall lambda_a13a88d06c7c63155a98f7d7ba7090a7_::_lambda_invoker_cdecl_(__int64 a1, char *a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)a2 + 56LL);
  if ( v3 && *(int *)(v3 + 64) < 0 )
    Ndis::BindStack::CreateDynamicBinding(a1 + 5064, a2, a1, TapiProxy);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref((volatile signed __int32 **)a2);
}
