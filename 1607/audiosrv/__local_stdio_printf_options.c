/*
 * XREFs of __local_stdio_printf_options @ 0x180035B64
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180035B40 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180035B90 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18003680C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180036D6C (_vsnwprintf.c)
 *     vswprintf_s @ 0x180036DD4 (vswprintf_s.c)
 *     _vscwprintf @ 0x180036E38 (_vscwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
