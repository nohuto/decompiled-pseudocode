/*
 * XREFs of ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x180029720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 *     ??1ModernResourceEnforcer@@MEAA@XZ @ 0x180029678 (--1ModernResourceEnforcer@@MEAA@XZ.c)
 */

ModernResourceEnforcer *__fastcall ModernResourceEnforcer::`vector deleting destructor'(
        ModernResourceEnforcer *this,
        char a2)
{
  ModernResourceEnforcer::~ModernResourceEnforcer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
