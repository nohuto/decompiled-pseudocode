/*
 * XREFs of ??_G_Facet_base@std@@UEAAPEAXI@Z @ 0x18000A6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::_Facet_base *__fastcall std::_Facet_base::`scalar deleting destructor'(std::_Facet_base *this, char a2)
{
  *(_QWORD *)this = &std::_Facet_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
