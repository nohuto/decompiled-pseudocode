/*
 * XREFs of ??0ControllerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180031838
 * Callers:
 *     ?Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180032330 (-Create@ControllerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005A3F4 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x180096390 (--0ManipulationInjector@@QEAA@XZ.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=12
ControllerProcessor *__fastcall ControllerProcessor::ControllerProcessor(
        ControllerProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  _WORD *v4; // rdi
  __int64 v5; // rcx
  unsigned int v7; // [rsp+28h] [rbp-30h]

  NonPointerProcessor::NonPointerProcessor(this, a2, a3);
  *(_QWORD *)this = &ControllerProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &ControllerProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = &ControllerProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 7) = &ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  v4 = (_WORD *)((char *)this + 64);
  *((_WORD *)this + 80) = 0;
  memset((char *)this + 64, 0, 0x60uLL);
  v5 = 24LL;
  do
  {
    *v4 = *((_WORD *)this + 80);
    v4 += 2;
    --v5;
  }
  while ( v5 );
  memset((char *)this + 168, 0, 0x40uLL);
  *((_BYTE *)this + 232) = 0;
  *((_DWORD *)this + 59) = 2;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)((char *)this + 332) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_BYTE *)this + 368) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_QWORD *)this + 48) = 0LL;
  ManipulationInjector::ManipulationInjector((ControllerProcessor *)((char *)this + 392));
  *((_DWORD *)this + 302) = 0;
  *((_WORD *)this + 606) = 0;
  *((_BYTE *)this + 1272) = 0;
  LOBYTE(v7) = 0;
  *((_QWORD *)this + 162) = v7;
  *((_DWORD *)this + 326) = 0;
  *(_OWORD *)((char *)this + 1308) = 0LL;
  *(_QWORD *)((char *)this + 1324) = 0LL;
  *(_QWORD *)((char *)this + 1332) = 0LL;
  *((_BYTE *)this + 1340) = 0;
  *((_QWORD *)this + 168) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_0), (__m128)LODWORD(FLOAT_40_0)).m128_u64[0];
  *((_QWORD *)this + 169) = 5LL;
  memset((char *)this + 1360, 0, 0x50uLL);
  *((_QWORD *)this + 180) = 0LL;
  *((_QWORD *)this + 181) = 0LL;
  *((_QWORD *)this + 182) = 500000LL;
  *((_QWORD *)this + 183) = 160000LL;
  *((_QWORD *)this + 184) = 1000000LL;
  *((_DWORD *)this + 372) = 100;
  *((_DWORD *)this + 373) = 100;
  *((_BYTE *)this + 1496) = 0;
  *((_QWORD *)this + 188) = 0LL;
  *((_BYTE *)this + 1512) = 0;
  return this;
}
