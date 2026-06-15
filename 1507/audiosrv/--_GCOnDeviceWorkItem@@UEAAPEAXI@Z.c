/*
 * XREFs of ??_GCOnDeviceWorkItem@@UEAAPEAXI@Z @ 0x180069010
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1COnDeviceWorkItem@@UEAA@XZ @ 0x180068F8C (--1COnDeviceWorkItem@@UEAA@XZ.c)
 */

COnDeviceWorkItem *__fastcall COnDeviceWorkItem::`scalar deleting destructor'(COnDeviceWorkItem *this, char a2)
{
  COnDeviceWorkItem::~COnDeviceWorkItem(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
