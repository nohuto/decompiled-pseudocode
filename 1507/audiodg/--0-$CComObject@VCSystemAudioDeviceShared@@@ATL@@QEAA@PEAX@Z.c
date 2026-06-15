/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14002B91C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002C1F4 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x14002B9B4 (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceShared *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(
        CSystemAudioDeviceShared *a1)
{
  CSystemAudioDeviceShared::CSystemAudioDeviceShared(a1);
  *(_QWORD *)a1 = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)a1 + 1) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)a1 + 2) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)a1 + 34) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable';
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
