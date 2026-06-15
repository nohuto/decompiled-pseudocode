/*
 * XREFs of ??0CSystemAudioDeviceShared@@QEAA@XZ @ 0x140025F30
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z @ 0x14002C820 (--0-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x1400063CC (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
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
