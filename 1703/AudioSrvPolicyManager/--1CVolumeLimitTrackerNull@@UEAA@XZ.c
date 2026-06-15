/*
 * XREFs of ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x18001FB84
 * Callers:
 *     ??_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z @ 0x18001FB50 (--_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDriverListener@@UEAA@XZ @ 0x18001FC94 (--1CDriverListener@@UEAA@XZ.c)
 */

void __fastcall CVolumeLimitTrackerNull::~CVolumeLimitTrackerNull(CVolumeLimitTrackerNull *this)
{
  *(_QWORD *)this = &CVolumeLimitTrackerNull::`vftable';
  CDriverListener::~CDriverListener((CVolumeLimitTrackerNull *)((char *)this + 24));
  *((_DWORD *)this + 3) = -1073741823;
}
