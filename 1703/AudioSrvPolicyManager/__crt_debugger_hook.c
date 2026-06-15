/*
 * XREFs of __crt_debugger_hook @ 0x180021264
 * Callers:
 *     __raise_securityfailure @ 0x180020A64 (__raise_securityfailure.c)
 * Callees:
 *     <none>
 */

void _crt_debugger_hook()
{
  _scrt_debugger_hook_flag = 0;
}
