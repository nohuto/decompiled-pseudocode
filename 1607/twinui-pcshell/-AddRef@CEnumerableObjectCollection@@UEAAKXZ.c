/*
 * XREFs of ?AddRef@CEnumerableObjectCollection@@UEAAKXZ @ 0x1800053F0
 * Callers:
 *     ?AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ @ 0x180008CB0 (-AddRef@CEnumerableObjectCollection@@WBA@EAAKXZ.c)
 *     ?AddRef@CEnumerableObjectCollection@@W7EAAKXZ @ 0x180008D10 (-AddRef@CEnumerableObjectCollection@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::AddRef(CEnumerableObjectCollection *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
