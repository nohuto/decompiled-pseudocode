/*
 * XREFs of ??0CSystemAudioDeviceOffloadGraph@@QEAA@XZ @ 0x14002CF48
 * Callers:
 *     ??0?$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002CD98 (--0-$CComAggObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 *     ??0?$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z @ 0x14002CE94 (--0-$CComObject@VCSystemAudioDeviceOffloadGraph@@@ATL@@QEAA@PEAX@Z.c)
 * Callees:
 *     ??0CSystemAudioDeviceSharedBase@@QEAA@XZ @ 0x140005D84 (--0CSystemAudioDeviceSharedBase@@QEAA@XZ.c)
 *     memset_0 @ 0x140018550 (memset_0.c)
 */

// Hidden C++ exception states: #wind=1
CSystemAudioDeviceOffloadGraph *__fastcall CSystemAudioDeviceOffloadGraph::CSystemAudioDeviceOffloadGraph(
        CSystemAudioDeviceOffloadGraph *this)
{
  char *v2; // rbx

  *((_DWORD *)this + 92) = 0;
  v2 = (char *)this + 376;
  memset_0((char *)this + 376, 0, 0x28uLL);
  v2[40] = 0;
  CSystemAudioDeviceSharedBase::CSystemAudioDeviceSharedBase(this);
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  return this;
}
