/*
 * XREFs of ?UnsubscribeWnfNotifications@CDriverListener@@AEAAJXZ @ 0x1800A8DE8
 * Callers:
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x1800A89A4 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 *     ??_GCDriverListener@@UEAAPEAXI@Z @ 0x1800A8A40 (--_GCDriverListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     Template_dsdp @ 0x1800A8880 (Template_dsdp.c)
 */

__int64 __fastcall CDriverListener::UnsubscribeWnfNotifications(CDriverListener *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( *((_QWORD *)this + 63) )
  {
    v3 = RtlUnsubscribeWnfStateChangeNotification();
    v5 = v3 | 0x10000000;
    if ( v3 < 0 )
    {
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
        Template_dsdp(
          v4,
          &EUVolumePolicy_Error_Propagation,
          v5,
          "CDriverListener::UnsubscribeWnfNotifications",
          67,
          (char)this);
      return v5;
    }
    *((_QWORD *)this + 63) = 0LL;
  }
  if ( *((_QWORD *)this + 64) )
  {
    v6 = RtlUnsubscribeWnfStateChangeNotification();
    v5 = v6 | 0x10000000;
    if ( v6 >= 0 )
    {
      *((_QWORD *)this + 64) = 0LL;
      return v2;
    }
    if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      Template_dsdp(
        v7,
        &EUVolumePolicy_Error_Propagation,
        v5,
        "CDriverListener::UnsubscribeWnfNotifications",
        73,
        (char)this);
    return v5;
  }
  return v2;
}
