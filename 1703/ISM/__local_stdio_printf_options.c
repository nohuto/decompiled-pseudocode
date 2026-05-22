/*
 * XREFs of __local_stdio_printf_options @ 0x18009C910
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18009C8F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18009C920 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18009D3A4 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18009D838 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18009D89C (vswprintf_s.c)
 *     _vsnprintf_s @ 0x18009D8FC (_vsnprintf_s.c)
 *     sprintf_s @ 0x18009D964 (sprintf_s.c)
 *     _scprintf @ 0x18009D9B8 (_scprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
