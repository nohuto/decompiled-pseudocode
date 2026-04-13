/*
 * XREFs of ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z @ 0x1800105CC
 * Callers:
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011410 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@@Z @ 0x180011740 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011B40 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180013BBC (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall ContentManagement::GetCreativeEventString(unsigned int a1, _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  memset(v7, 0, 24);
  v3 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v7,
         L"%d",
         a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = 0LL;
    *a2 = v7[0];
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      504LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v3);
    v5 = (void *)v7[0];
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return v4;
}
