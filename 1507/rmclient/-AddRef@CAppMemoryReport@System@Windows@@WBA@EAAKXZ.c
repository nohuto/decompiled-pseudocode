/*
 * XREFs of ?AddRef@CAppMemoryReport@System@Windows@@WBA@EAAKXZ @ 0x180008FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CAppMemoryReport::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::System::IAppMemoryReport,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::AddRef(a1 - 16);
}
