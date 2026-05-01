/*
 * XREFs of ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x180003100
 * Callers:
 *     ??$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@Details@WRL@Microsoft@@YAJPEAPEAUIProcessMemoryReport@System@Windows@@AEA_K1@Z @ 0x1800031A8 (--$MakeAndInitialize@VCProcessMemoryReport@System@Windows@@UIProcessMemoryReport@23@AEA_KAEA_K@D.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x180009AF0 (-Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180009B00 (-Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Windows::System::CProcessMemoryReport::Release(Windows::System::CProcessMemoryReport *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IProcessMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
