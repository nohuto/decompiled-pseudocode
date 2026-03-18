/*
 * XREFs of ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A7CCC
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180005608 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800A7840 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     InitializeInteractionStateInfo @ 0x1800A856C (InitializeInteractionStateInfo.c)
 */

CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 20) = xmmword_18017A840;
  *(_OWORD *)((char *)this + 36) = xmmword_18017A850;
  *(_OWORD *)((char *)this + 52) = xmmword_18017A860;
  *(_OWORD *)((char *)this + 68) = xmmword_18017A870;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) &= 0xF0u;
  *((_DWORD *)this + 33) = 1;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *(_OWORD *)((char *)this + 156) = xmmword_18017A840;
  *(_OWORD *)((char *)this + 172) = xmmword_18017A850;
  *(_OWORD *)((char *)this + 188) = xmmword_18017A860;
  *(_OWORD *)((char *)this + 204) = xmmword_18017A870;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_BYTE *)this + 264) &= 0xF0u;
  *(_QWORD *)((char *)this + 268) = 2LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_BYTE *)this + 640) &= 0xFCu;
  InitializeInteractionStateInfo((char *)this + 352);
  return this;
}
