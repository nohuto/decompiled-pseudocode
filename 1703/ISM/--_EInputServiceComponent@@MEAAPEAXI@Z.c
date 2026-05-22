/*
 * XREFs of ??_EInputServiceComponent@@MEAAPEAXI@Z @ 0x180025134
 * Callers:
 *     ??_EInputServiceComponent@@OBA@EAAPEAXI@Z @ 0x180025700 (--_EInputServiceComponent@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 */

InputServiceComponent *__fastcall InputServiceComponent::`vector deleting destructor'(
        InputServiceComponent *this,
        char a2)
{
  *(_QWORD *)this = &InputServiceComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &InputServiceComponent::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
