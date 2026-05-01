/*
 * XREFs of ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x1800039BC
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000E780 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ExecutionModel::ProcessDead @ 0x18002CD7C (ExecutionModel--ProcessDead.c)
 *     ?IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z @ 0x1800369E4 (-IsDebuggerAttached@ExternalResourceSet@ExecutionModel@@CA_NK@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CloseHandle(v1);
  return result;
}
