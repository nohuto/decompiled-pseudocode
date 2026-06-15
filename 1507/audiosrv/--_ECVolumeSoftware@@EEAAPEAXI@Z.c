/*
 * XREFs of ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x180071970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x180071688 (--1CVolumeSoftware@@EEAA@XZ.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::`vector deleting destructor'(CVolumeSoftware *this, char a2)
{
  CVolumeSoftware::~CVolumeSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
