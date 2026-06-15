/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z @ 0x140013CFC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400144DC (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedNew@@QEAA@XZ @ 0x14000EA78 (--0CSystemAudioDeviceSharedNew@@QEAA@XZ.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceSharedNew *__fastcall ATL::CComObject<CSystemAudioDeviceSharedNew>::CComObject<CSystemAudioDeviceSharedNew>(
        CSystemAudioDeviceSharedNew *a1)
{
  CSystemAudioDeviceSharedNew::CSystemAudioDeviceSharedNew(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 34) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)a1 + 35) = &ATL::CComObject<CSystemAudioDeviceSharedNew>::`vftable'{for `ISaDeviceInternal'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
