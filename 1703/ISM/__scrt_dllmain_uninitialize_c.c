/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18009CFC0
 * Callers:
 *     dllmain_crt_process_detach @ 0x18009CAA4 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?SendCommandToInputDevice@Win32kInterop@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x18000ACB0 (-SendCommandToInputDevice@Win32kInterop@@UEAAJKPEBUDeviceCommandMessage@@@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18009D758 (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18009D7BE (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  __int64 v0; // rdx
  Win32kInterop *v1; // rcx
  const struct DeviceCommandMessage *v2; // r8
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = Win32kInterop::SendCommandToInputDevice(v1, v0, v2);
  if ( !result )
    return o__cexit_0();
  return result;
}
