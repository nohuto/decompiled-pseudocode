/*
 * XREFs of ?Release@CProcessMemoryReport@System@Windows@@UEAAKXZ @ 0x1800095B0
 * Callers:
 *     ?Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ @ 0x180006BA0 (-Release@CProcessMemoryReport@System@Windows@@W7EAAKXZ.c)
 *     ?Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180006BB0 (-Release@CProcessMemoryReport@System@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::System::CProcessMemoryReport::Release(__int64 this, volatile int *a2)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IProcessMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(
           this,
           a2);
}
