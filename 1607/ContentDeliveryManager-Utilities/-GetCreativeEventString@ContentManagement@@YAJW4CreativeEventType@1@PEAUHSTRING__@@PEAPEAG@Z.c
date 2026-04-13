/*
 * XREFs of ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAUHSTRING__@@PEAPEAG@Z @ 0x18002141C
 * Callers:
 *     ?IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800220F0 (-IsEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W.c)
 *     ?SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x1800223F0 (-SetEventReported@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@.c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x1800227B0 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 *     ?IsEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180022C60 (-IsEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4C.c)
 *     ?SetEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180022E90 (-SetEventReported@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4.c)
 *     ?IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0PEAE@Z @ 0x180023210 (-IsReportedEventExpired@DesktopAppCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180024744 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 */

__int64 __fastcall ContentManagement::GetCreativeEventString(unsigned int a1, HSTRING a2, _QWORD *a3)
{
  PCWSTR StringRawBuffer; // rax
  int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  memset(v10, 0, 24);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         v10,
         L"%d-%ls",
         a1,
         StringRawBuffer);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = 0LL;
    *a3 = v10[0];
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v6);
    v8 = (void *)v10[0];
  }
  if ( v8 )
    CoTaskMemFree(v8);
  return v7;
}
