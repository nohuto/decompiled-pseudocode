/*
 * XREFs of __local_stdio_printf_options @ 0x18002E114
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18002E0F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18002E140 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18002EC48 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18002F368 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x18002F3D0 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
