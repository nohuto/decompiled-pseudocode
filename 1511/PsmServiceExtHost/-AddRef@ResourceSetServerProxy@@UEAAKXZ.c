/*
 * XREFs of ?AddRef@ResourceSetServerProxy@@UEAAKXZ @ 0x18002BD10
 * Callers:
 *     ?AddRef@ResourceSetImpl@ExecutionModel@@W7EAAKXZ @ 0x18002BF90 (-AddRef@ResourceSetImpl@ExecutionModel@@W7EAAKXZ.c)
 *     ?AddRef@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ @ 0x18002BFA0 (-AddRef@ResourceSetImpl@ExecutionModel@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ResourceSetServerProxy::AddRef(ResourceSetServerProxy *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
