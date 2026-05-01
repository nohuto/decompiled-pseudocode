/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@W7EAAKXZ @ 0x180008E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef(
           a1 - 8,
           a2);
}
