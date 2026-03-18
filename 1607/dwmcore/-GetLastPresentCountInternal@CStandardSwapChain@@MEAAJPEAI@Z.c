/*
 * XREFs of ?GetLastPresentCountInternal@CStandardSwapChain@@MEAAJPEAI@Z @ 0x18017D940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStandardSwapChain::GetLastPresentCountInternal(CStandardSwapChain *this, unsigned int *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 36) + 136LL))(
           *((_QWORD *)this + 36),
           a2);
}
