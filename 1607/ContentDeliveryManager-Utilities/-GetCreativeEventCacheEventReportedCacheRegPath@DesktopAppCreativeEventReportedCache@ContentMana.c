/*
 * XREFs of ?GetCreativeEventCacheEventReportedCacheRegPath@DesktopAppCreativeEventReportedCache@ContentManagement@@AEAAJPEBGPEAPEAG@Z @ 0x180022BC0
 * Callers:
 *     ?IsEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180022C60 (-IsEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4C.c)
 *     ?SetEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180022E90 (-SetEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4.c)
 *     ?IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180023210 (-IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180024744 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall ContentManagement::DesktopAppCreativeEventReportedCache::GetCreativeEventCacheEventReportedCacheRegPath(
        ContentManagement::DesktopAppCreativeEventReportedCache *this,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rcx
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *a3 = 0LL;
  memset(v8, 0, 24);
  v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v8,
         L"%s\\%s\\%s",
         L"Software\\Microsoft\\Windows\\CurrentVersion\\ContentDeliveryManager\\CreativeEventCache",
         a2,
         L"EventReportedCache");
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = 0LL;
    *a3 = (unsigned __int16 *)v8[0];
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x346,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v4);
    v6 = (void *)v8[0];
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v5;
}
