/*
 * XREFs of ??$?4UIAudioVolume@@@?$CComPtr@UIAudioMuteAPO@@@ATL@@QEAAPEAUIAudioMuteAPO@@AEBV?$CComPtr@UIAudioVolume@@@1@@Z @ 0x1800818C4
 * Callers:
 *     ?InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x180082030 (-InitializeHardwareStreamControls@CAudioStream@@UEAAJPEAUIAudioDeviceGraph@@@Z.c)
 *     ?UpdateStreamControls@CAudioStream@@QEAAJXZ @ 0x180082DAC (-UpdateStreamControls@CAudioStream@@QEAAJXZ.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?IsEqualObject@?$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z @ 0x180082280 (-IsEqualObject@-$CComPtrBase@UIAudioMuteAPO@@@ATL@@QEAA_NPEAUIUnknown@@@Z.c)
 */

struct IUnknown *__fastcall ATL::CComPtr<IAudioMuteAPO>::operator=<IAudioVolume>(
        struct IUnknown **a1,
        struct IUnknown **a2)
{
  if ( (unsigned __int8)ATL::CComPtrBase<IAudioMuteAPO>::IsEqualObject(a1, *a2) )
    return *a1;
  else
    return ATL::AtlComQIPtrAssign(a1, *a2, &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd);
}
