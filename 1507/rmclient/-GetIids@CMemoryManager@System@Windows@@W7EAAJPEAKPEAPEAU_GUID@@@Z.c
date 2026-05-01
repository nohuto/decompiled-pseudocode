/*
 * XREFs of ?GetIids@CMemoryManager@System@Windows@@W7EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180008E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::GetIids(__int64 a1)
{
  return Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::GetIids(a1 - 8);
}
