/*
 * XREFs of ?WaitForVBlank@CAnalogSwapChain@@MEAAJPEAX@Z @ 0x180168660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogSwapChain::WaitForVBlank(CAnalogSwapChain *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 36) + 64LL))(*((_QWORD *)this + 36), a2);
}
