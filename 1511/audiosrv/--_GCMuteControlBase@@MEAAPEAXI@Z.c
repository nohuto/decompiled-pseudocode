/*
 * XREFs of ??_GCMuteControlBase@@MEAAPEAXI@Z @ 0x18006BF80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CMuteControlBase@@MEAA@XZ @ 0x18006BE90 (--1CMuteControlBase@@MEAA@XZ.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::`scalar deleting destructor'(CMuteControlBase *this, char a2)
{
  CMuteControlBase::~CMuteControlBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
