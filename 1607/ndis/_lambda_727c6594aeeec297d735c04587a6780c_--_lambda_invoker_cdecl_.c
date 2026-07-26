/*
 * XREFs of _lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_ @ 0x1C00B0490
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A41FC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

__int64 __fastcall lambda_727c6594aeeec297d735c04587a6780c_::_lambda_invoker_cdecl_(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)*a2 + 7);
  if ( !v3 || (*(_DWORD *)(v3 + 64) & 0x10000000) == 0 )
    return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    (NDIS_BIND_DRIVER_BASE *)(*a2 + 4),
    (void (__fastcall *)(_LIST_ENTRY *))lambda_55dd5fd2ac8d6f91724a8900c7ec63ca_::_lambda_invoker_cdecl_);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2);
}
