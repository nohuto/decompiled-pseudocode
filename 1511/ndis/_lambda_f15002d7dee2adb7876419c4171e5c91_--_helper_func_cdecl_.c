/*
 * XREFs of _lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_ @ 0x1C00DDA30
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C00DD504 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 */

__int64 __fastcall lambda_f15002d7dee2adb7876419c4171e5c91_::_helper_func_cdecl_(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rdx

  v3 = *((_QWORD *)*a2 + 7);
  if ( v3 && *(int *)(v3 + 64) < 0 )
    Ndis::BindStack::CreateDynamicBinding(a1 + 5064, a2, a1, 8);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2);
}
