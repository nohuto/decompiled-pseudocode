/*
 * XREFs of __local_stdio_printf_options @ 0x180025CA4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180025C80 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180025CD0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800269D8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180027098 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x180027100 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
