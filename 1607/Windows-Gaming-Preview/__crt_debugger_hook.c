/*
 * XREFs of __crt_debugger_hook @ 0x180026A0C
 * Callers:
 *     __raise_securityfailure @ 0x1800260C4 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
