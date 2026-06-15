/*
 * XREFs of ?UpdateSaDevicePriority@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@@Z @ 0x1800759B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAPEAVCEndpointSaDeviceLists@@H@Z @ 0x1800685CC (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184 (-FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDe.c)
 */

__int64 __fastcall CSaProvider::UpdateSaDevicePriority(CSaProvider *this, struct IAudioDeviceGraph *a2)
{
  CSaDeviceInstance *SaDeviceForAudioDeviceGraph; // rsi
  int i; // ebx
  CEndpointSaDeviceLists **ValueAt; // rax
  LPCRITICAL_SECTION v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  SaDeviceForAudioDeviceGraph = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
  {
    ValueAt = (CEndpointSaDeviceLists **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
                                           (__int64)this + 104,
                                           i);
    SaDeviceForAudioDeviceGraph = CEndpointSaDeviceLists::FindSaDeviceForAudioDeviceGraph(*ValueAt, a2);
    if ( SaDeviceForAudioDeviceGraph )
      break;
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return CSaDeviceInstance::UpdateSaDeviceResourcePriority(SaDeviceForAudioDeviceGraph);
}
