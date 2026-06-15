/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002E454
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002EAE4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@@ATL@@SAJP.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14002E628 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::CComAggObject<CSystemAudioDeviceOffloadGraph>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceOffloadGraph>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph((CSystemAudioDeviceOffloadGraph *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioDeviceGraph'};
  v4[1] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioGraphCallback'};
  v4[2] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioProtectedOutput'};
  v4[34] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceCallback'};
  v4[35] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `ISaDeviceInternal'};
  v4[43] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioVolume'};
  v4[44] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMuteAPO'};
  v4[45] = &ATL::CComContainedObject<CSystemAudioDeviceOffloadGraph>::`vftable'{for `IAudioMeter'};
  v4[46] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
