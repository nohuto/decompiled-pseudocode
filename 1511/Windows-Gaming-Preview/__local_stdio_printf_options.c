/*
 * XREFs of __local_stdio_printf_options @ 0x1800255F4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800255D0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180025620 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180026104 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x1800268B8 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
