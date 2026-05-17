/*
 * XREFs of _errno @ 0x180074D00
 * Callers:
 *     wcstoxq @ 0x180085AB4 (wcstoxq.c)
 *     mbstowcs @ 0x180087A20 (mbstowcs.c)
 *     strtoxlX @ 0x1800890B0 (strtoxlX.c)
 *     wcstoxlX @ 0x180089D7C (wcstoxlX.c)
 *     wcstombs @ 0x18008A030 (wcstombs.c)
 *     strtoxq @ 0x18008A2B8 (strtoxq.c)
 *     write_string @ 0x18008AE2C (write_string.c)
 *     write_string_0 @ 0x18008B890 (write_string_0.c)
 *     _handle_qnan1 @ 0x18008C8E4 (_handle_qnan1.c)
 *     _set_errno_from_matherr @ 0x18008CBF8 (_set_errno_from_matherr.c)
 *     _wctomb_s_l @ 0x18008DD6C (_wctomb_s_l.c)
 * Callees:
 *     <none>
 */

int *__cdecl errno()
{
  return (int *)&NtCurrentTeb()->TlsSlots[16];
}
