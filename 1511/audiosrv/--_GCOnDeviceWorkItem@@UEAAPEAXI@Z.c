/*
 * XREFs of ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x1800679E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1COnDeviceWorkItem@@UEAA@XZ @ 0x18006795C (--1COnDeviceWorkItem@@UEAA@XZ.c)
 */

COnDeviceWorkItem *__fastcall COnDeviceWorkItem::`scalar deleting destructor'(COnDeviceWorkItem *this, char a2)
{
  COnDeviceWorkItem::~COnDeviceWorkItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
