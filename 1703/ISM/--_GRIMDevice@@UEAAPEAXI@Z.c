/*
 * XREFs of ??_GRIMDevice@@UEAAPEAXI@Z @ 0x18007DA70
 * Callers:
 *     <none>
 * Callees:
 *     ??1RIMDevice@@UEAA@XZ @ 0x18007DAA4 (--1RIMDevice@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

RIMDevice *__fastcall RIMDevice::`scalar deleting destructor'(RIMDevice *this, char a2)
{
  RIMDevice::~RIMDevice(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
