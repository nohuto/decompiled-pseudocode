/*
 * XREFs of ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140003548
 * Callers:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140005D84 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceExclusive@@QEAA@XZ @ 0x14002994C (--0CSystemAudioDeviceExclusive@@QEAA@XZ.c)
 *     ??0CSystemAudioDeviceOffload@@QEAA@XZ @ 0x14002B8B4 (--0CSystemAudioDeviceOffload@@QEAA@XZ.c)
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x1400050C4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
CSystemAudioDeviceBase *__fastcall CSystemAudioDeviceBase::CSystemAudioDeviceBase(CSystemAudioDeviceBase *this)
{
  *(_QWORD *)this = &CSystemAudioDeviceBase::`vftable'{for `IAudioDeviceGraph'};
  *((_QWORD *)this + 1) = &CSystemAudioDeviceSharedBase::`vftable'{for `IAudioGraphCallback'};
  *((_QWORD *)this + 2) = &CSystemAudioDeviceBase::`vftable'{for `IAudioProtectedOutput'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 10;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 10;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 10;
  ATL::CCriticalSection::CCriticalSection((CSystemAudioDeviceBase *)((char *)this + 176));
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  if ( *((_QWORD *)this + 31) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 31, 0LL);
  if ( *((_QWORD *)this + 30) )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 30, 0LL);
  *((_DWORD *)this + 59) = 1;
  *((_DWORD *)this + 54) = 0;
  return this;
}
