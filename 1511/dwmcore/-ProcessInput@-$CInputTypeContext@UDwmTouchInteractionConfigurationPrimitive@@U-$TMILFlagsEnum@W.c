/*
 * XREFs of ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@@Z @ 0x1800FE658
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z @ 0x1800A7FB0 (-ProcessInput@CInteractionProcessor@@QEAAJAEBUtagPOINTER_INFO@@IVCMILMatrix@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@@Z @ 0x180141AB0 (-ConfigureInteractionContextIfNecessary@-$CInputTypeContext@UDwmTouchpadInteractionConfiguration.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
        _DWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax

  result = CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary();
  if ( (int)result >= 0 )
  {
    a1[31] = *(_DWORD *)(a2 + 8);
    return (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)a1 + 24LL))(*(_QWORD *)a1, a3, a2 + 80);
  }
  return result;
}
