/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x1800361A0
 * Callers:
 *     dllmain_crt_process_detach @ 0x180035D34 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x180036C1C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x180036C72 (_o__cexit_0.c)
 *     ?GetName@CPolicyConfig@@UEAAPEBGXZ @ 0x180038BE0 (-GetName@CPolicyConfig@@UEAAPEBGXZ.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  CPolicyConfig *v0; // rcx
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = (unsigned int)CPolicyConfig::GetName(v0);
  if ( !result )
    return o__cexit_0();
  return result;
}
