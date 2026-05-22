/*
 * XREFs of ??_GPointerInfoAdapter@@UEAAPEAXI@Z @ 0x18005C430
 * Callers:
 *     ??_EPointerInfoAdapter@@W7EAAPEAXI@Z @ 0x18005D780 (--_EPointerInfoAdapter@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1PointerInfoAdapter@@UEAA@XZ @ 0x18005C474 (--1PointerInfoAdapter@@UEAA@XZ.c)
 */

PointerInfoAdapter *__fastcall PointerInfoAdapter::`scalar deleting destructor'(PointerInfoAdapter *this, char a2)
{
  PointerInfoAdapter::~PointerInfoAdapter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
