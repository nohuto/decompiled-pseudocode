/*
 * XREFs of ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@@Z @ 0x18012DADC
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18012CA18 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUD2DVector3@@@Z @ 0x18012CBC0 (--$ComputeHandledInteractionsFromLocal@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal(
        __int64 a1,
        __int64 a2,
        const struct D2DVector3 *a3)
{
  _OWORD *v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = 0LL;
  *(_DWORD *)(a2 + 12) = 0;
  if ( *(_DWORD *)(a1 + 356) == 1 )
  {
    v4 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                     a1,
                     (__int64)v6,
                     (__int64 *)a1,
                     a3);
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 356) == 2 )
  {
    v4 = (_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                     a1,
                     (__int64)v6,
                     (__int64 *)(a1 + 136),
                     a3);
LABEL_5:
    *(_OWORD *)a2 = *v4;
  }
  return a2;
}
