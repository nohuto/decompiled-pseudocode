/*
 * XREFs of ?AddRef@ResourceSetServerProxy@@UEAAKXZ @ 0x180024F70
 * Callers:
 *     ?AddRef@ResourceSetImpl@ExecutionModel@@W7EAAKXZ @ 0x1800251E0 (-AddRef@ResourceSetImpl@ExecutionModel@@W7EAAKXZ.c)
 *     ?AddRef@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ @ 0x1800251F0 (-AddRef@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetServerProxy::AddRef(ResourceSetServerProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
