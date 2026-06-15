/*
 * XREFs of ??0CSystemAudioDeviceSharedNew@@QEAA@XZ @ 0x14000EA78
 * Callers:
 *     ??0?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z @ 0x140013CFC (--0-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z @ 0x14002DA38 (--0-$CComAggObject@VCSystemAudioDeviceSharedNew@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceBase@@QEAA@XZ @ 0x140010850 (--0CSystemAudioDeviceBase@@QEAA@XZ.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceSharedNew *__fastcall CSystemAudioDeviceSharedNew::CSystemAudioDeviceSharedNew(
        CSystemAudioDeviceSharedNew *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 72) = 0;
  v2 = (char *)this + 296;
  memset_0((char *)this + 296, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceBase::CSystemAudioDeviceBase(this);
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  return this;
}
