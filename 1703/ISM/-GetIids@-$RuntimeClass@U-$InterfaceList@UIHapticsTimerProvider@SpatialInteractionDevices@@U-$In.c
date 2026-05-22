/*
 * XREFs of ?GetIids@?$RuntimeClass@U?$InterfaceList@UIHapticsTimerProvider@SpatialInteractionDevices@@U?$InterfaceList@UITimerElapsedHandler@Threading@System@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009B2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<SpatialInteractionDevices::IHapticsTimerProvider,Microsoft::WRL::Details::InterfaceList<Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_2961038b_b15c_4430_90c9_29048094d5ef;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_faaea667_fbeb_49cb_adb2_71184c556e43;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
