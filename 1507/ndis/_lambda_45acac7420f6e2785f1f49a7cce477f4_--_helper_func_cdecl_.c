/*
 * XREFs of _lambda_45acac7420f6e2785f1f49a7cce477f4_::_helper_func_cdecl_ @ 0x1C00B1D80
 * Callers:
 *     <none>
 * Callees:
 *     ?ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z @ 0x1C00A0DDC (-ForEachLink@NDIS_BIND_DRIVER_BASE@@QEAAXP6AXPEAUNDIS_BIND_LINK_BASE@@@Z@Z.c)
 */

__int64 __fastcall lambda_45acac7420f6e2785f1f49a7cce477f4_::_helper_func_cdecl_(
        __int64 a1,
        volatile signed __int32 **a2)
{
  __int64 v3; // rax

  v3 = *((_QWORD *)*a2 + 7);
  if ( !v3 || (*(_DWORD *)(v3 + 64) & 0x10000000) == 0 )
    return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2);
  NDIS_BIND_DRIVER_BASE::ForEachLink(
    (NDIS_BIND_DRIVER_BASE *)(*a2 + 4),
    (void (__fastcall *)(_LIST_ENTRY *))lambda_9e46fee1aa3a9bfa01fc7c62f26cea81_::_helper_func_cdecl_);
  return KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(a2);
}
