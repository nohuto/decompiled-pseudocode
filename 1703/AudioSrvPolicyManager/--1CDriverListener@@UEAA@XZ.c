/*
 * XREFs of ??1CDriverListener@@UEAA@XZ @ 0x18001FC94
 * Callers:
 *     ??1CVolumeLimitTrackerNull@@UEAA@XZ @ 0x18001FB84 (--1CVolumeLimitTrackerNull@@UEAA@XZ.c)
 *     ??_GCDriverListener@@UEAAPEAXI@Z @ 0x18001FC60 (--_GCDriverListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     Template_dsdp @ 0x18001F8F0 (Template_dsdp.c)
 */

void __fastcall CDriverListener::~CDriverListener(CDriverListener *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+20h] [rbp-18h]

  *(_QWORD *)this = &CDriverListener::`vftable';
  if ( *((_QWORD *)this + 63) )
  {
    v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( v2 < 0 )
    {
      if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
      {
        v6 = 67;
        Template_dsdp(
          v3,
          &EUVolumePolicy_Error_Propagation,
          v2,
          "CDriverListener::UnsubscribeWnfNotifications",
          v6,
          this);
      }
      return;
    }
    *((_QWORD *)this + 63) = 0LL;
  }
  if ( *((_QWORD *)this + 64) )
  {
    v4 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
    if ( v4 >= 0 )
    {
      *((_QWORD *)this + 64) = 0LL;
    }
    else if ( (Microsoft_Windows_EUVolumePolicyEnableBits & 1) != 0 )
    {
      v7 = 73;
      Template_dsdp(v5, &EUVolumePolicy_Error_Propagation, v4, "CDriverListener::UnsubscribeWnfNotifications", v7, this);
    }
  }
}
