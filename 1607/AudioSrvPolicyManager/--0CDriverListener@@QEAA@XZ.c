/*
 * XREFs of ??0CDriverListener@@QEAA@XZ @ 0x1800230C4
 * Callers:
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180022C40 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x18000537C (WPP_SF_.c)
 *     ?SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@@P6AJ0KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z@Z @ 0x18002325C (-SubscribeWnfNotification@CDriverListener@@AEAAJU_WNF_STATE_NAME@@PEAPEAU_WNF_USER_SUBSCRIPTION@.c)
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
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_92b9b890caad320d1476e881fb77b9be_Traceguids);
  }
  return this;
}
