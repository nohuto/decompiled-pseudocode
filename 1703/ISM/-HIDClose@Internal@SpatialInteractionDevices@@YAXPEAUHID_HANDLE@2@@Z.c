/*
 * XREFs of ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x180066108
 * Callers:
 *     ??_GSpatialInteractionDevice@@UEAAPEAXI@Z @ 0x1800642E0 (--_GSpatialInteractionDevice@@UEAAPEAXI@Z.c)
 *     ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x180065884 (-HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z.c)
 *     wil::details::ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___::_ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___ @ 0x180066704 (wil--details--ScopeExitFn__lambda_5c8e1919e6c20c27f141600a6e95e8df___--_ScopeExitFn__lambda_5c8e.c)
 * Callees:
 *     ??1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x180066150 (--1HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall SpatialInteractionDevices::Internal::HIDClose(
        SpatialInteractionDevices::Internal *this,
        struct SpatialInteractionDevices::HID_HANDLE *a2)
{
  struct _HIDP_PREPARSED_DATA *v3; // rcx
  void *v4; // rcx

  if ( this )
  {
    v3 = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)this + 12);
    if ( v3 )
      HidD_FreePreparsedData(v3);
    v4 = (void *)*((_QWORD *)this + 9);
    if ( v4 )
      CloseHandle(v4);
    SpatialInteractionDevices::HID_HANDLE::~HID_HANDLE(this);
    operator delete(this);
  }
}
