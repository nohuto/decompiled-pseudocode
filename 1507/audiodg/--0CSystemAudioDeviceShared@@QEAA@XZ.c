/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x14002B9B4
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14002B850 (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14002B91C (--0-$CComObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140010850 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceShared *__fastcall CSystemAudioDeviceShared::CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 70) = 0;
  v2 = (char *)this + 288;
  memset_0((char *)this + 288, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 98) = 0;
  return this;
}
