/*
 * XREFs of _errno @ 0x1800883C0
 * Callers:
 *     wcstoxq @ 0x180098624 (wcstoxq.c)
 *     mbstowcs @ 0x18009A590 (mbstowcs.c)
 *     strtoxlX @ 0x18009BBF0 (strtoxlX.c)
 *     wcstoxlX @ 0x18009C8BC (wcstoxlX.c)
 *     wcstombs @ 0x18009CB70 (wcstombs.c)
 *     strtoxq @ 0x18009CE70 (strtoxq.c)
 *     write_string @ 0x18009D9D4 (write_string.c)
 *     write_string_0 @ 0x18009E3E8 (write_string_0.c)
 *     _handle_qnan1 @ 0x18009F4A0 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18009F7B4 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x1800A091C (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
