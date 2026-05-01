/*
 * XREFs of ?Reset@CEnumerableObjectCollection@@UEAAJXZ @ 0x1800057B0
 * Callers:
 *     ?Reset@CEnumerableObjectCollection@@W7EAAJXZ @ 0x180008CD0 (-Reset@CEnumerableObjectCollection@@W7EAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::Reset(CEnumerableObjectCollection *this)
{
  *((_DWORD *)this + 6) = 0;
  return 0LL;
}
