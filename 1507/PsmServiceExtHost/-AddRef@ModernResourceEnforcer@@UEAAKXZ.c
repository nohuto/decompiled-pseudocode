/*
 * XREFs of ?AddRef@ModernResourceEnforcer@@UEAAKXZ @ 0x180024F80
 * Callers:
 *     ?AddRef@ModernResourceEnforcer@@W7EAAKXZ @ 0x1800251A0 (-AddRef@ModernResourceEnforcer@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ModernResourceEnforcer::AddRef(ModernResourceEnforcer *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
