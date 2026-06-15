/*
 * XREFs of __scrt_is_ucrt_dll_in_use @ 0x180036C1C
 * Callers:
 *     __scrt_acquire_startup_lock @ 0x180036054 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_after_initialize_c @ 0x180036094 (__scrt_dllmain_after_initialize_c.c)
 *     __scrt_dllmain_exception_filter @ 0x180036138 (__scrt_dllmain_exception_filter.c)
 *     __scrt_dllmain_uninitialize_c @ 0x1800361A0 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_initialize_onexit_tables @ 0x180036244 (__scrt_initialize_onexit_tables.c)
 *     __scrt_release_startup_lock @ 0x1800363B8 (__scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

_BOOL8 _scrt_is_ucrt_dll_in_use()
{
  return _scrt_ucrt_dll_is_in_use != 0;
}
