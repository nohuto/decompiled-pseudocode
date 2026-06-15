/*
 * XREFs of ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x180067380
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18002C730 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PSECURITY_DESCRIPTOR *__fastcall ATL::CSecurityDesc::`scalar deleting destructor'(PSECURITY_DESCRIPTOR *this, char a2)
{
  *this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
