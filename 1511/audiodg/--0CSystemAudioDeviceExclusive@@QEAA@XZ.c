/*
 * XREFs of ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x14002AD14
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x14002ABCC (--0-$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x14002AC8C (--0-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140005288 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceExclusive *__fastcall CSystemAudioDeviceExclusive::CSystemAudioDeviceExclusive(
        CSystemAudioDeviceExclusive *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 68) = 0;
  v2 = (char *)this + 280;
  memset_0((char *)this + 280, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *(_QWORD *)this = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceOffload::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceExclusive::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 90) = 0;
  return this;
}
