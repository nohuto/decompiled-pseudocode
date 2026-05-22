/*
 * XREFs of ??_ETouchInfoAdapter@@UEAAPEAXI@Z @ 0x18005ED10
 * Callers:
 *     ??_ETouchInfoAdapter@@W7EAAPEAXI@Z @ 0x18005FA30 (--_ETouchInfoAdapter@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 */

TouchInfoAdapter *__fastcall TouchInfoAdapter::`vector deleting destructor'(TouchInfoAdapter *this, char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
