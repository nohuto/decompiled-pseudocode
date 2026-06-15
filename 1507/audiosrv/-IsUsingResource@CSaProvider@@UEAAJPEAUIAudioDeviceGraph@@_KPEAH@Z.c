/*
 * XREFs of ?IsUsingResource@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@_KPEAH@Z @ 0x180074E00
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAPEAVCEndpointSaDeviceLists@@H@Z @ 0x1800685CC (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184 (-FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDe.c)
 */

__int64 __fastcall CSaProvider::IsUsingResource(CSaProvider *this, struct IAudioDeviceGraph *a2, __int64 a3, int *a4)
{
  int i; // ebx
  CEndpointSaDeviceLists **ValueAt; // rax
  struct CSaDeviceInstance *SaDeviceForAudioDeviceGraph; // rax
  LPCRITICAL_SECTION v12; // [rsp+20h] [rbp-18h] BYREF
  char v13; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v12, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  *a4 = 0;
  for ( i = 0; i < *((_DWORD *)this + 30); ++i )
  {
    if ( *a4 )
      break;
    ValueAt = (CEndpointSaDeviceLists **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
                                           (__int64)this + 104,
                                           i);
    SaDeviceForAudioDeviceGraph = CEndpointSaDeviceLists::FindSaDeviceForAudioDeviceGraph(*ValueAt, a2);
    if ( SaDeviceForAudioDeviceGraph && *((_QWORD *)SaDeviceForAudioDeviceGraph + 8) == a3 )
      *a4 = 1;
  }
  if ( v13 )
    ATL::CCritSecLock::Unlock(&v12);
  return 0LL;
}
