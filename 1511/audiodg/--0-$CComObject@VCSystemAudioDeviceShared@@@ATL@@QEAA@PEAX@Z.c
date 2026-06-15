/*
 * XREFs of ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140009164
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400028FC (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x1400063CC (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
CSystemAudioDeviceSharedBase *__fastcall ATL::CComObject<CSystemAudioDeviceShared>::CComObject<CSystemAudioDeviceShared>(
        CSystemAudioDeviceSharedBase *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 86) = 0;
  v2 = (char *)this + 352;
  memset_0((char *)this + 352, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  *(_QWORD *)this = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 35) = &ATL::CComObject<CSystemAudioDeviceShared>::`vftable'{for `ISaDeviceInternal'};
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return this;
}
