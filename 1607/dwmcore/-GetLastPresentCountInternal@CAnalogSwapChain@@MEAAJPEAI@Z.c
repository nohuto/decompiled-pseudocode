/*
 * XREFs of ?GetLastPresentCountInternal@CAnalogSwapChain@@MEAAJPEAI@Z @ 0x1801684E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogSwapChain::GetLastPresentCountInternal(CAnalogSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 40LL))(
           *((_QWORD *)this + 36),
           a2);
}
