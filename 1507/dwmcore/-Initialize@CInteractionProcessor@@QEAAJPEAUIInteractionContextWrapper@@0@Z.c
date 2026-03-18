/*
 * XREFs of ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@0@Z @ 0x18005A8EC
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x18005A2A0 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18010CFDC (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x18005ABB4 (-Initialize@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 */

__int64 __fastcall CInteractionProcessor::Initialize(
        CInteractionProcessor *this,
        struct IInteractionContextWrapper *a2,
        struct IInteractionContextWrapper *a3)
{
  __int64 result; // rax

  if ( !a2 || !a3 )
    return 2147942487LL;
  *((_DWORD *)this + 92) = 0;
  *((_DWORD *)this + 93) = 0;
  *((_DWORD *)this + 94) = 0;
  *((_WORD *)this + 182) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 71) = 0;
  result = ((__int64 (*)(void))CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize)();
  if ( (int)result >= 0 )
    return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
             (char *)this + 136,
             a3);
  return result;
}
