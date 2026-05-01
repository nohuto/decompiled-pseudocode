/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18002E850
 * Callers:
 *     dllmain_crt_process_detach @ 0x18002E2E4 (dllmain_crt_process_detach.c)
 * Callees:
 *     ?v_Initialize@CImmersiveWindowFactoryBase@@MEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x18000CCA0 (-v_Initialize@CImmersiveWindowFactoryBase@@MEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 *     __scrt_is_ucrt_dll_in_use @ 0x18002F06C (__scrt_is_ucrt_dll_in_use.c)
 *     _o__cexit_0 @ 0x18002F292 (_o__cexit_0.c)
 */

int _scrt_dllmain_uninitialize_c()
{
  struct IImmersiveMonitor *v0; // rdx
  CImmersiveWindowFactoryBase *v1; // rcx
  const struct tagRECT *v2; // r8
  int result; // eax

  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
    return execute_onexit_table(&Table);
  result = CImmersiveWindowFactoryBase::v_Initialize(v1, v0, v2);
  if ( !result )
    return o__cexit_0();
  return result;
}
