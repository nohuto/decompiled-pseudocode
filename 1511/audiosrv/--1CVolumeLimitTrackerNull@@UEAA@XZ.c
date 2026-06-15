/*
 * XREFs of ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x1800A89A4
 * Callers:
 *     ??_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z @ 0x1800A89E0 (--_GCVolumeLimitTrackerNull@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ @ 0x1800A8DE8 (-UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ.c)
 */

void __fastcall CVolumeLimitTrackerNull::~CVolumeLimitTrackerNull(CVolumeLimitTrackerNull *this)
{
  CDriverListener *v2; // rcx

  *(_QWORD *)this = &CVolumeLimitTrackerNull::`vftable';
  v2 = (CVolumeLimitTrackerNull *)((char *)this + 24);
  *(_QWORD *)v2 = &CDriverListener::`vftable';
  CDriverListener::UnsubscribeWnfNotifications(v2);
  *((_DWORD *)this + 3) = -1073741823;
}
