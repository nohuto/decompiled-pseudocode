/*
 * XREFs of ??_GCMeterControlBase@@MEAAPEAXI@Z @ 0x18006B6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CMeterControlBase@@MEAA@XZ @ 0x180042C1C (--1CMeterControlBase@@MEAA@XZ.c)
 */

CMeterControlBase *__fastcall CMeterControlBase::`scalar deleting destructor'(CMeterControlBase *this, char a2)
{
  CMeterControlBase::~CMeterControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
