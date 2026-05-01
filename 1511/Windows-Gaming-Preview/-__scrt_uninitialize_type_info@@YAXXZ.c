/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x1800260F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall __scrt_uninitialize_type_info()
{
  _std_type_info_destroy_list(&__type_info_root_node);
}
