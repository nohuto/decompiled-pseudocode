/*
 * XREFs of _errno @ 0x1800883D0
 * Callers:
 *     wcstoxq @ 0x180098634 (wcstoxq.c)
 *     mbstowcs @ 0x18009A5A0 (mbstowcs.c)
 *     strtoxlX @ 0x18009BC00 (strtoxlX.c)
 *     wcstoxlX @ 0x18009C8CC (wcstoxlX.c)
 *     wcstombs @ 0x18009CB80 (wcstombs.c)
 *     strtoxq @ 0x18009CE80 (strtoxq.c)
 *     write_string @ 0x18009D9E4 (write_string.c)
 *     write_string_0 @ 0x18009E3F8 (write_string_0.c)
 *     _handle_qnan1 @ 0x18009F4B0 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18009F7C4 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x1800A092C (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
