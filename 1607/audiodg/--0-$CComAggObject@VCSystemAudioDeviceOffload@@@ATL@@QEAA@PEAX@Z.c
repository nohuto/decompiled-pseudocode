/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14002B73C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002BE44 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??0CSystemAudioDeviceOffload@@QEAA@XZ @ 0x14002B8B4 (--0CSystemAudioDeviceOffload@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceOffload>::CComAggObject<CSystemAudioDeviceOffload>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceOffload>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSystemAudioDeviceOffload::CSystemAudioDeviceOffload((CSystemAudioDeviceOffload *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioDeviceGraph'};
  v4[1] = &ATL::CComContainedObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioGraphCallback'};
  v4[2] = &ATL::CComContainedObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioProtectedOutput'};
  v4[34] = &ATL::CComContainedObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioVolume'};
  v4[35] = &ATL::CComContainedObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMuteAPO'};
  v4[36] = &ATL::CComContainedObject<CSystemAudioDeviceOffload>::`vftable'{for `IAudioMeter'};
  v4[37] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
