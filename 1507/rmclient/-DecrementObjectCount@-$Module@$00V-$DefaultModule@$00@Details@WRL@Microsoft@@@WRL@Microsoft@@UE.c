/*
 * XREFs of ?DecrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800040E0
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x180003D00 (-Release@CProcessMemoryReport@System@Windows@@UEAAKXZ.c)
 *     ?Release@CAppMemoryReport@System@Windows@@UEAAKXZ @ 0x180003FD0 (-Release@CAppMemoryReport@System@Windows@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount()
{
  return (unsigned int)_InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
