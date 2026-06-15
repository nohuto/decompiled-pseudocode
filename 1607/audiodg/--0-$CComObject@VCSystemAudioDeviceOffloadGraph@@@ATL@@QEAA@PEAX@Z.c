/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002CE94
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002D4A8 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14002CF48 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffloadGraph *__fastcall ATL::CComObject<CSystemAudioDeviceOffloadGraph>::CComObject<CSystemAudioDeviceOffloadGraph>(
        CSystemAudioDeviceOffloadGraph *a1)
{
  CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 34) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 35) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceInternal'};
  *((_QWORD *)a1 + 43) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  *((_QWORD *)a1 + 44) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)a1 + 45) = &ATL::CComObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
