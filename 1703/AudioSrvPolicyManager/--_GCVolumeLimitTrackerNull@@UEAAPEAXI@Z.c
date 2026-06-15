/*
 * XREFs of ??_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z @ 0x18001FB50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x18001FB84 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

CVolumeLimitTrackerNull *__fastcall CVolumeLimitTrackerNull::`scalar deleting destructor'(
        CVolumeLimitTrackerNull *this,
        char a2)
{
  CVolumeLimitTrackerNull::~CVolumeLimitTrackerNull(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x220uLL);
  return this;
}
