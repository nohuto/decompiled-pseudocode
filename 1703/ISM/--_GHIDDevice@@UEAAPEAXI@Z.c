/*
 * XREFs of ??_GHIDDevice@@UEAAPEAXI@Z @ 0x18007E270
 * Callers:
 *     <none>
 * Callees:
 *     ??1HIDDevice@@UEAA@XZ @ 0x18007E2A4 (--1HIDDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

HIDDevice *__fastcall HIDDevice::`scalar deleting destructor'(HIDDevice *this, char a2)
{
  HIDDevice::~HIDDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
