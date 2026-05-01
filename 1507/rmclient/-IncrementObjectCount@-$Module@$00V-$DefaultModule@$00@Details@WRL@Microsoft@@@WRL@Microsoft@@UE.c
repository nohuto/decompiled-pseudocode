/*
 * XREFs of ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x1800040C0
 * Callers:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x180002EF0 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     ??0CMemoryManager@System@Windows@@QEAA@XZ @ 0x1800038E8 (--0CMemoryManager@System@Windows@@QEAA@XZ.c)
 *     ??0CAppMemoryReport@System@Windows@@QEAA@XZ @ 0x180003EB0 (--0CAppMemoryReport@System@Windows@@QEAA@XZ.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800041C8 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$GitInvokeHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@QEAA@XZ @ 0x180005FF4 (--0-$GitInvokeHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@.c)
 * Callees:
 *     <none>
 */

__int64 Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
}
