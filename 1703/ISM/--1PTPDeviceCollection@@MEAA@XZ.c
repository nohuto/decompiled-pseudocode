/*
 * XREFs of ??1PTPDeviceCollection@@MEAA@XZ @ 0x180073584
 * Callers:
 *     ??_GPTPDeviceCollection@@MEAAPEAXI@Z @ 0x180073540 (--_GPTPDeviceCollection@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PTPDeviceCollection::~PTPDeviceCollection(PTPDeviceCollection *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PTPDeviceCollection::`vftable';
  operator delete(*((void **)this + 345));
  HIDDeviceCollection::~HIDDeviceCollection(this);
}
