/*
 * XREFs of ??$MakeAndInitialize@VCSaDeviceProxy@@UISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAKPEAUSaDeviceResourceParams@@@Details@WRL@Microsoft@@YAJPEAPEAUISaDeviceProxy@@AEAPEAUSaDeviceParams@@AEAPEAVCEndpointCharacteristics@@AEAW4_AUDCLNT_SHAREMODE@@AEAK$$QEAPEAUSaDeviceResourceParams@@@Z @ 0x18002AC34
 * Callers:
 *     ?GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAPEAUISaDeviceProxy@@@Z @ 0x1800290B0 (-GetSaDevice@CDeviceGraphManager@@UEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUD.c)
 * Callees:
 *     ?Release@CSaDeviceProxy@@UEAAKXZ @ 0x180026F20 (-Release@CSaDeviceProxy@@UEAAKXZ.c)
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180027260 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ??0CSaDeviceProxy@@QEAA@XZ @ 0x1800274D0 (--0CSaDeviceProxy@@QEAA@XZ.c)
 *     ??$AsIID@V?$RuntimeClass@U?$InterfaceList@UISaDeviceProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClass@U?$InterfaceList@UISaDeviceProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18002AACC (--$AsIID@V-$RuntimeClass@U-$InterfaceList@UISaDeviceProxy@@U-$InterfaceList@UIInspectable@@VNil@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSaDeviceProxy,ISaDeviceProxy,SaDeviceParams * &,CEndpointCharacteristics * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,SaDeviceResourceParams *>(
        _QWORD *a1,
        const struct SaDeviceParams **a2,
        struct CEndpointCharacteristics **a3,
        enum _AUDCLNT_SHAREMODE *a4,
        unsigned int *a5,
        struct SaDeviceResourceParams **a6)
{
  struct SaDeviceParams **v10; // rbx
  CSaDeviceProxy *v11; // rax
  int v12; // edi

  *a1 = 0LL;
  v10 = 0LL;
  v11 = (CSaDeviceProxy *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v10 = (struct SaDeviceParams **)CSaDeviceProxy::CSaDeviceProxy(v11);
    v12 = CSaDeviceProxy::RuntimeClassInitialize(v10, *a2, *a3, *a4, *a5, *a6);
    if ( v12 >= 0 )
      v12 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ISaDeviceProxy,Microsoft::WRL::Details::InterfaceList<IInspectable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>>(
              (__int64)v10,
              &GUID_cd7d7d6c_0a0b_43c8_a0ad_fbc566431a52,
              a1);
  }
  else
  {
    v12 = -2147024882;
  }
  if ( v10 )
    CSaDeviceProxy::Release((CSaDeviceProxy *)v10);
  return (unsigned int)v12;
}
