/*
 * XREFs of ??_EPTPDevice@@UEAAPEAXI@Z @ 0x18007E200
 * Callers:
 *     <none>
 * Callees:
 *     ??1PTPDevice@@UEAA@XZ @ 0x18007E234 (--1PTPDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

PTPDevice *__fastcall PTPDevice::`vector deleting destructor'(PTPDevice *this, char a2)
{
  PTPDevice::~PTPDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
