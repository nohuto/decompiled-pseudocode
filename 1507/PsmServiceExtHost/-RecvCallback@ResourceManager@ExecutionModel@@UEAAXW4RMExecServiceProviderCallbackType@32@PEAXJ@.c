/*
 * XREFs of ?RecvCallback@ResourceManager@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180037B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::ResourceManager::RecvCallback(__int64 a1, int a2, _DWORD *a3)
{
  if ( a2 != 2 )
    __fastfail(0xC000000D);
  if ( *a3 )
    __fastfail(0xC000000D);
}
