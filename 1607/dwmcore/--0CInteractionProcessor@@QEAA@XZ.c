/*
 * XREFs of ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A4F0C
 * Callers:
 *     ?Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z @ 0x180007B24 (-Initialize@CManipulationContext@@QEAAJ_NPEAUHMONITOR__@@@Z.c)
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800A4CA8 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800A30EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAA@W4InputType@@@Z @ 0x1800A6078 (--0-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4FlagsEn.c)
 *     InitializeInteractionStateInfo @ 0x1800A612C (InitializeInteractionStateInfo.c)
 */

CInteractionProcessor *__fastcall CInteractionProcessor::CInteractionProcessor(CInteractionProcessor *this)
{
  __int64 v2; // r8

  *(_QWORD *)this = 0LL;
  *(_OWORD *)((char *)this + 20) = xmmword_1801C0740;
  *(_OWORD *)((char *)this + 36) = xmmword_1801C0750;
  *(_OWORD *)((char *)this + 52) = xmmword_1801C0760;
  *(_OWORD *)((char *)this + 68) = xmmword_1801C0770;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 144) &= 0xF8u;
  *((_BYTE *)this + 144) |= 0x18u;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 37) = 1;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 1110704128;
  *((_DWORD *)this + 33) = 1110704128;
  *((_BYTE *)this + 136) = 0;
  CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>((char *)this + 152);
  *((_QWORD *)this + 38) = v2;
  *((_QWORD *)this + 40) = v2;
  *((_QWORD *)this + 41) = v2;
  *((_QWORD *)this + 42) = v2;
  *((_DWORD *)this + 86) = v2;
  *((_QWORD *)this + 44) = v2;
  *((_QWORD *)this + 45) = v2;
  *((_QWORD *)this + 46) = v2;
  *((_DWORD *)this + 94) = v2;
  *((_DWORD *)this + 124) = v2;
  *((_DWORD *)this + 141) = v2;
  *((_DWORD *)this + 158) = v2;
  *((_DWORD *)this + 175) = v2;
  *((_DWORD *)this + 192) = v2;
  *((_DWORD *)this + 209) = v2;
  *((_BYTE *)this + 856) &= 0xF0u;
  `vector constructor iterator'(
    (CInteractionProcessor *)((char *)this + 860),
    (unsigned int)(v2 + 12),
    (unsigned int)(v2 + 3),
    (void (__fastcall *)(TemporaryConfiguration *))TemporaryConfiguration::TemporaryConfiguration);
  `vector constructor iterator'(
    (CInteractionProcessor *)((char *)this + 896),
    12LL,
    3LL,
    (void (__fastcall *)(TemporaryConfiguration *))TemporaryConfiguration::TemporaryConfiguration);
  InitializeInteractionStateInfo((char *)this + 384);
  return this;
}
