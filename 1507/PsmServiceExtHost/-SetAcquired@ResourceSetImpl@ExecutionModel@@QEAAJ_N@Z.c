/*
 * XREFs of ?SetAcquired@ResourceSetImpl@ExecutionModel@@QEAAJ_N@Z @ 0x1800018D4
 * Callers:
 *     ?RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x1800016D0 (-RecvCallback@ResourceSetImpl@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@.c)
 *     ?CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z @ 0x180014CC0 (-CreateTerminalResourceSet@ResourceSetImpl@ExecutionModel@@UEBAJPEAPEAUIResourceSet@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::SetAcquired(
        ExecutionModel::ResourceSetImpl *this,
        unsigned __int8 a2)
{
  int v2; // eax

  if ( (*((_DWORD *)this + 7) & 0x19) != 1 )
    return 2147500037LL;
  v2 = *((_DWORD *)this + 7) ^ (*((_DWORD *)this + 7) ^ (2 * a2)) & 2;
  *((_DWORD *)this + 7) = v2;
  if ( !a2 )
    *((_DWORD *)this + 7) = v2 | 4;
  return 0LL;
}
