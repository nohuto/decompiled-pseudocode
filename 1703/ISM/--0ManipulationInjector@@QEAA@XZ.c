/*
 * XREFs of ??0ManipulationInjector@@QEAA@XZ @ 0x180096390
 * Callers:
 *     ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180031838 (--0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x18004F21C (--0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

ManipulationInjector *__fastcall ManipulationInjector::ManipulationInjector(ManipulationInjector *this)
{
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 1;
  *((_BYTE *)this + 13) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 724) = 0;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_DWORD *)this + 202) = 0;
  *((_OWORD *)this + 4) = 0uLL;
  *((_DWORD *)this + 189) = 96;
  *((_DWORD *)this + 190) = 96;
  *((_DWORD *)this + 4) = 40;
  *((_DWORD *)this + 5) = 20;
  *((_DWORD *)this + 6) = 80;
  *((_DWORD *)this + 7) = 600;
  *((_DWORD *)this + 8) = 150;
  *(_QWORD *)((char *)this + 36) = 100LL;
  memset((char *)this + 104, 0, 0x260uLL);
  return this;
}
