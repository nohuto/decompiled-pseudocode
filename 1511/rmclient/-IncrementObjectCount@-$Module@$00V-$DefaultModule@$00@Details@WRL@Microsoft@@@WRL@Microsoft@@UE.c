/*
 * XREFs of ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x180004500
 * Callers:
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800021EC (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180002D5C (--0-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@.c)
 *     ??0CProcessMemoryReport@System@Windows@@QEAA@XZ @ 0x180002FC8 (--0CProcessMemoryReport@System@Windows@@QEAA@XZ.c)
 *     ??0?$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemoryManagerStatics3@23@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180003558 (--0-$ActivationFactory@UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@23@UIMemor.c)
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
