/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002D3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffload>>,ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceOffload>>>::CreateInstance(
        __int64 a1)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CSystemAudioDeviceOffload>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceOffload>>::CreateInstance();
}
