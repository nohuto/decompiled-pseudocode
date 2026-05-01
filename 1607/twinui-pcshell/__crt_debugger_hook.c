/*
 * XREFs of __crt_debugger_hook @ 0x18002EC7C
 * Callers:
 *     __raise_securityfailure @ 0x18002E528 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
