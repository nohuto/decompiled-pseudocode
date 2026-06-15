/*
 * XREFs of ??0CDriverListener@@QEAA@XZ @ 0x1800311A8
 * Callers:
 *     ??$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180030FBC (--$MakeAndInitialize@VCVolumeLimitTrackerNull@@UIVolumeLimitTracker@@@Details@WRL@Microsoft@@YAJ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x180031244 (-SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@.c)
 */

CDriverListener *__fastcall CDriverListener::CDriverListener(CDriverListener *this)
{
  struct _WNF_USER_SUBSCRIPTION **v1; // rbx

  *(_QWORD *)this = &CDriverListener::`vftable';
  v1 = (struct _WNF_USER_SUBSCRIPTION **)((char *)this + 512);
  *((_DWORD *)this + 124) = 0;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  CDriverListener::SubscribeWnfNotification(
    this,
    WNF_AVLC_VOLUME_WARNING_ACCEPTED,
    (struct _WNF_USER_SUBSCRIPTION **)this + 63,
    (int (*)(struct _WNF_STATE_NAME, unsigned int, struct _WNF_TYPE_ID *, void *, const void *, unsigned int))CDriverListener::s_ShellWnfCallback);
  CDriverListener::SubscribeWnfNotification(
    this,
    WNF_AVLC_DRIVER_REQUEST,
    v1,
    (int (*)(struct _WNF_STATE_NAME, unsigned int, struct _WNF_TYPE_ID *, void *, const void *, unsigned int))CDriverListener::s_DriverWnfCallback);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xAu,
      (__int64)&WPP_285b9717bd5038fe9ea54162e61ed701_Traceguids);
  }
  return this;
}
