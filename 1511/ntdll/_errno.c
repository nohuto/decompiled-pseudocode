/*
 * XREFs of _errno @ 0x180082280
 * Callers:
 *     wcstoxq @ 0x180097264 (wcstoxq.c)
 *     mbstowcs @ 0x1800991D0 (mbstowcs.c)
 *     strtoxlX @ 0x18009A860 (strtoxlX.c)
 *     wcstoxlX @ 0x18009B52C (wcstoxlX.c)
 *     wcstombs @ 0x18009B7E0 (wcstombs.c)
 *     strtoxq @ 0x18009BA68 (strtoxq.c)
 *     write_string @ 0x18009C5CC (write_string.c)
 *     write_string_0 @ 0x18009D030 (write_string_0.c)
 *     _handle_qnan1 @ 0x18009E084 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18009E398 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x18009F50C (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
