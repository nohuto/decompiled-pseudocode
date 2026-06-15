/*
 * XREFs of ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x1400063CC
 * Callers:
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x140009164 (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x140025F30 (--0CSystemAudioDeviceShared@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14002E628 (--0CSystemAudioDeviceOffloadGraph@@QEAA@XZ.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140005288 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 */

CSystemAudioDeviceSharedBase *__fastcall CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(
        CSystemAudioDeviceSharedBase *this)
{
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *(_QWORD *)this = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 34) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceCallback'};
  *((_QWORD *)this + 35) = &CSystemAudioDeviceSharedBase::`vftable'{for `ISaDeviceInternal'};
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_DWORD *)this + 83) = -1;
  *((_DWORD *)this + 84) = -1;
  return this;
}
