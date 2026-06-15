/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x140024D00
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14002B360 (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140005D84 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceShared *__fastcall CSystemAudioDeviceShared::CSystemAudioDeviceShared(CSystemAudioDeviceShared *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 86) = 0;
  v2 = (char *)this + 352;
  memset_0((char *)this + 352, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  return this;
}
