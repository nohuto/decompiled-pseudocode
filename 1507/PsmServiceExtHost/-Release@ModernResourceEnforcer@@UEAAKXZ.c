/*
 * XREFs of ?Release@ModernResourceEnforcer@@UEAAKXZ @ 0x18000B1C0
 * Callers:
 *     ?Release@ModernResourceEnforcer@@W7EAAKXZ @ 0x180024FA0 (-Release@ModernResourceEnforcer@@W7EAAKXZ.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::Release(ModernResourceEnforcer *this)
{
  int v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( v1 < 0 )
    __fastfail(0x80004005);
  if ( !v1 && this )
    (*(void (__fastcall **)(ModernResourceEnforcer *, __int64))(*(_QWORD *)this + 96LL))(this, 1LL);
  return (unsigned int)v1;
}
