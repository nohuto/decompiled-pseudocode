/*
 * XREFs of ??0CSystemAudioDeviceOffload@@QEAA@XZ @ 0x14002CE48
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14002CCAC (--0-$CComAggObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z @ 0x14002CD94 (--0-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140005288 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffload *__fastcall CSystemAudioDeviceOffload::CSystemAudioDeviceOffload(
        CSystemAudioDeviceOffload *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 74) = 0;
  v2 = (char *)this + 304;
  memset_0((char *)this + 304, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *(_QWORD *)this = &CSystemAudioDeviceOffload::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioVolume'};
  *((_QWORD *)this + 35) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMuteAPO'};
  *((_QWORD *)this + 36) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioMeter'};
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 104) = 0;
  return this;
}
