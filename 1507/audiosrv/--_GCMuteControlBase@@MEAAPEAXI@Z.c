/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x18006D370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x18006D284 (--1CMuteControlBase@@MEAA@XZ.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::`scalar deleting destructor'(CMuteControlBase *this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
