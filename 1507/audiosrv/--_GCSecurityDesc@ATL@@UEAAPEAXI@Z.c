/*
 * XREFs of ??_GCSecurityDesc@ATL@@UEAAPEAXI@Z @ 0x18006B2E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180007340 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 */

PSECURITY_DESCRIPTOR *__fastcall ATL::CSecurityDesc::`scalar deleting destructor'(PSECURITY_DESCRIPTOR *this, char a2)
{
  *this = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
