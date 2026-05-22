/*
 * XREFs of ??_EMobileButtonDeviceCollection@@MEAAPEAXI@Z @ 0x18007BF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18007DB64 (--1HIDDeviceCollection@@UEAA@XZ.c)
 */

MobileButtonDeviceCollection *__fastcall MobileButtonDeviceCollection::`vector deleting destructor'(
        MobileButtonDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &MobileButtonDeviceCollection::`vftable';
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
