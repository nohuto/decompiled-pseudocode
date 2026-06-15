/*
 * XREFs of _dynamic_initializer_for__std::_Error_objects_int_::_System_object__ @ 0x180001030
 * Callers:
 *     <none>
 * Callees:
 *     ??0_System_error_category@std@@QEAA@XZ @ 0x180034BC0 (--0_System_error_category@std@@QEAA@XZ.c)
 */

int __fastcall dynamic_initializer_for__std::_Error_objects_int_::_System_object__(std::_System_error_category *a1)
{
  std::_System_error_category::_System_error_category(a1);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__std::_Error_objects_int_::_System_object__);
}
