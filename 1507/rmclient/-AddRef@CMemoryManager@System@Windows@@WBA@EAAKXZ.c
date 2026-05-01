/*
 * XREFs of ?AddRef@CMemoryManager@System@Windows@@WBA@EAAKXZ @ 0x180008E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CMemoryManager::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::ActivationFactory<Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::Nil,0>::AddRef(
           a1 - 16,
           a2);
}
