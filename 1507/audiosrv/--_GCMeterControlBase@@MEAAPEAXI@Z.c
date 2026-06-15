/*
 * XREFs of ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x18006C9D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CMeterControlBase@@MEAA@XZ @ 0x18003F728 (--1CMeterControlBase@@MEAA@XZ.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::`scalar deleting destructor'(CMeterControlBase *this, char a2)
{
  CMeterControlBase::~CMeterControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
