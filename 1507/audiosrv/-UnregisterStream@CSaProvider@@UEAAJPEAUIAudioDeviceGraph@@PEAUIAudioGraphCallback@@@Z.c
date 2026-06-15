/*
 * XREFs of ?UnregisterStream@CSaProvider@@UEAAJPEAUIAudioDeviceGraph@@PEAUIAudioGraphCallback@@@Z @ 0x1800758B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointSaDeviceLists@@@2@@ATL@@QEBAAEAPEAVCEndpointSaDeviceLists@@H@Z @ 0x1800685CC (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEnd.c)
 *     ?FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDeviceGraph@@@Z @ 0x180074184 (-FindSaDeviceForAudioDeviceGraph@CEndpointSaDeviceLists@@QEAAPEAVCSaDeviceInstance@@PEAUIAudioDe.c)
 *     ?RemoveStream@CSaDeviceInstance@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1800757EC (-RemoveStream@CSaDeviceInstance@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?UpdateSaDeviceResourcePriority@CSaDeviceInstance@@IEAAJXZ @ 0x180075A44 (-UpdateSaDeviceResourcePriority@CSaDeviceInstance@@IEAAJXZ.c)
 */

__int64 __fastcall CSaProvider::UnregisterStream(
        CSaProvider *this,
        struct IAudioDeviceGraph *a2,
        struct IAudioGraphCallback *a3)
{
  struct _RTL_CRITICAL_SECTION *SaDeviceForAudioDeviceGraph; // r14
  int updated; // esi
  int i; // ebx
  CEndpointSaDeviceLists **ValueAt; // rax
  LPCRITICAL_SECTION v10; // [rsp+20h] [rbp-28h] BYREF
  char v11; // [rsp+28h] [rbp-20h]
  struct IAudioStreamInfo *v12; // [rsp+60h] [rbp+18h] BYREF

  SaDeviceForAudioDeviceGraph = 0LL;
  v12 = 0LL;
  updated = (**(__int64 (__fastcall ***)(struct IAudioGraphCallback *, GUID *, struct IAudioStreamInfo **))a3)(
              a3,
              &GUID_ef51cdf8_93d8_4190_a60c_f3c98be5e7bc,
              &v12);
  if ( updated >= 0 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
    for ( i = 0; i < *((_DWORD *)this + 30); ++i )
    {
      ValueAt = (CEndpointSaDeviceLists **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointSaDeviceLists *>>::GetValueAt(
                                             (__int64)this + 104,
                                             i);
      SaDeviceForAudioDeviceGraph = (struct _RTL_CRITICAL_SECTION *)CEndpointSaDeviceLists::FindSaDeviceForAudioDeviceGraph(
                                                                      *ValueAt,
                                                                      a2);
      if ( SaDeviceForAudioDeviceGraph )
        break;
    }
    if ( v11 )
      ATL::CCritSecLock::Unlock(&v10);
    updated = CSaDeviceInstance::RemoveStream(SaDeviceForAudioDeviceGraph, v12);
    if ( updated >= 0 )
      updated = CSaDeviceInstance::UpdateSaDeviceResourcePriority((CSaDeviceInstance *)SaDeviceForAudioDeviceGraph);
  }
  if ( v12 )
    (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)v12 + 16LL))(v12);
  return (unsigned int)updated;
}
