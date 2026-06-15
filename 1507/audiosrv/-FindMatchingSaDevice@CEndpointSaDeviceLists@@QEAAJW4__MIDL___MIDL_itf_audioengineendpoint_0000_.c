/*
 * XREFs of ?FindMatchingSaDevice@CEndpointSaDeviceLists@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAVCSaDeviceInstance@@@Z @ 0x180074110
 * Callers:
 *     ?FindSaDeviceInstanceInMap@CSaProvider@@IEAAJPEAV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@PEBGW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAVCSaDeviceInstance@@@Z @ 0x18007440C (-FindSaDeviceInstanceInMap@CSaProvider@@IEAAJPEAV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$Ch.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCSaDeviceInstance@@V?$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@QEAAAEAPEAVCSaDeviceInstance@@AEAPEAU__POSITION@@@Z @ 0x1800745A4 (-GetNext@-$CAtlList@PEAVCSaDeviceInstance@@V-$CElementTraits@PEAVCSaDeviceInstance@@@ATL@@@ATL@@.c)
 */

__int64 __fastcall CEndpointSaDeviceLists::FindMatchingSaDevice(
        CEndpointSaDeviceLists *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct CSaDeviceInstance **a4)
{
  __int64 Next; // rax
  __int64 v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0LL;
  v9[0] = *((_QWORD *)this + 6 * a2);
  if ( !v9[0] )
    return 2289827866LL;
  while ( 1 )
  {
    Next = ATL::CAtlList<CSaDeviceInstance *,ATL::CElementTraits<CSaDeviceInstance *>>::GetNext(this, v9);
    this = *(CEndpointSaDeviceLists **)Next;
    v7 = *(_QWORD *)(*(_QWORD *)Next + 40LL) - *(_QWORD *)&a3->Data1;
    if ( !v7 )
      v7 = *((_QWORD *)this + 6) - *(_QWORD *)a3->Data4;
    if ( !v7 )
      break;
    if ( !v9[0] )
      return 2289827866LL;
  }
  *a4 = this;
  return 0LL;
}
