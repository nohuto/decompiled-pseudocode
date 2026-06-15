/*
 * XREFs of ??_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z @ 0x1800A89E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x1800A89A4 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 */

CVolumeLimitTrackerNull *__fastcall CVolumeLimitTrackerNull::`scalar deleting destructor'(
        CVolumeLimitTrackerNull *this,
        char a2)
{
  CVolumeLimitTrackerNull::~CVolumeLimitTrackerNull(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
