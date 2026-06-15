/*
 * XREFs of ??_GCSaDeviceInstance@@QEAAPEAXI@Z @ 0x180073B50
 * Callers:
 *     ??1?$CAutoPtr@VCSaDeviceInstance@@@ATL@@QEAA@XZ @ 0x180073770 (--1-$CAutoPtr@VCSaDeviceInstance@@@ATL@@QEAA@XZ.c)
 *     ??1CEndpointSaDeviceLists@@QEAA@XZ @ 0x180073810 (--1CEndpointSaDeviceLists@@QEAA@XZ.c)
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 *     ?ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800751F0 (-ReleaseSaDevice@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CSaDeviceInstance@@QEAA@XZ @ 0x1800738F4 (--1CSaDeviceInstance@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CSaDeviceInstance::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  CSaDeviceInstance::~CSaDeviceInstance(this);
  operator delete(this);
  return this;
}
