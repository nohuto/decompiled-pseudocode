/*
 * XREFs of ?AddRef@CWindowsPolicyManager@@UEAAKXZ @ 0x180005A20
 * Callers:
 *     ?AddRef@CWindowsPolicyManager@@W7EAAKXZ @ 0x1800058E0 (-AddRef@CWindowsPolicyManager@@W7EAAKXZ.c)
 *     ?AddRef@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x1800058F0 (-AddRef@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::AddRef(CWindowsPolicyManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
