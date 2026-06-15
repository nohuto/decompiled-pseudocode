/*
 * XREFs of ??_ECOnDeviceStateChangedWorkItem@@UEAAPEAXI@Z @ 0x180052060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1COnDeviceWorkItem@@UEAA@XZ @ 0x180051FA0 (--1COnDeviceWorkItem@@UEAA@XZ.c)
 */

COnDeviceStateChangedWorkItem *__fastcall COnDeviceStateChangedWorkItem::`vector deleting destructor'(
        COnDeviceStateChangedWorkItem *this,
        char a2)
{
  COnDeviceWorkItem::~COnDeviceWorkItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x20);
  return this;
}
