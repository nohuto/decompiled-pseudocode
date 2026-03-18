/*
 * XREFs of ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJW4InteractionState@@AEBUtagPOINTER_INFO@@I@Z @ 0x18012E3AC
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z @ 0x18012E408 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@I@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJIW4InteractionState@@@Z @ 0x18012DB3C (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchpadInteractionConfiguration.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        const GUID *a4)
{
  int v5; // ebx
  __int64 result; // rax

  v5 = (int)a4;
  result = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
             a1,
             (unsigned int)a4,
             (const GUID *)a2,
             a4);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 31) = v5;
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 24LL))(*a1, a3);
  }
  return result;
}
