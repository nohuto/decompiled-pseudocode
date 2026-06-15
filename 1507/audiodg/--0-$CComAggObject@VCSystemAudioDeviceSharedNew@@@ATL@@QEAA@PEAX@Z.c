/*
 * XREFs of ??0?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z @ 0x14002DA38
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002DD7C (-CreateInstance@-$CComCreator@V-$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAX.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedNew@@QEAA@XZ @ 0x14000EA78 (--0CSystemAudioDeviceSharedNew@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CSystemAudioDeviceSharedNew>::CComAggObject<CSystemAudioDeviceSharedNew>(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v4; // rbx

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CSystemAudioDeviceSharedNew>::`vftable';
  v4 = (_QWORD *)(a1 + 24);
  CSystemAudioDeviceSharedNew::CSystemAudioDeviceSharedNew((CSystemAudioDeviceSharedNew *)(a1 + 24));
  *v4 = &ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioDeviceGraph'};
  v4[1] = &ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioGraphCallback'};
  v4[2] = &ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioProtectedOutput'};
  v4[34] = &ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::`vftable'{for `ISaDeviceCallback'};
  v4[35] = &ATL::CComContainedObject<CSystemAudioDeviceSharedNew>::`vftable'{for `ISaDeviceInternal'};
  v4[36] = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
