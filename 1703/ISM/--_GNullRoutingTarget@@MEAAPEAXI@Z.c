/*
 * XREFs of ??_GNullRoutingTarget@@MEAAPEAXI@Z @ 0x180011094
 * Callers:
 *     ??_ENullRoutingTarget@@OBA@EAAPEAXI@Z @ 0x1800113A0 (--_ENullRoutingTarget@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 */

NullRoutingTarget *__fastcall NullRoutingTarget::`scalar deleting destructor'(NullRoutingTarget *this, char a2)
{
  *(_QWORD *)this = &NullRoutingTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &NullRoutingTarget::`vftable'{for `INullRoutingTarget'};
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
