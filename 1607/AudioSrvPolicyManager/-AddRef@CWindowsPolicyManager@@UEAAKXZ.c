/*
 * XREFs of ?AddRef@CWindowsPolicyManager@@UEAAKXZ @ 0x180005220
 * Callers:
 *     ?AddRef@CWindowsPolicyManager@@W7EAAKXZ @ 0x1800050B0 (-AddRef@CWindowsPolicyManager@@W7EAAKXZ.c)
 *     ?AddRef@CWindowsPolicyManager@@WBA@EAAKXZ @ 0x1800050C0 (-AddRef@CWindowsPolicyManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::AddRef(CWindowsPolicyManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
