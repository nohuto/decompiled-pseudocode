/*
 * XREFs of ??_ETouchDeviceCollection@@MEAAPEAXI@Z @ 0x180073D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18007DB64 (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

TouchDeviceCollection *__fastcall TouchDeviceCollection::`vector deleting destructor'(
        TouchDeviceCollection *this,
        char a2)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &TouchDeviceCollection::`vftable';
  operator delete(*((void **)this + 345));
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
