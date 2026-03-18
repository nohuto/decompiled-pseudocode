/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z @ 0x180005D50
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x180005DA0 (-SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801412EC (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x1801448E0 (-SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionProcessor::SupportsPointerType(__int64 a1, int a2, int a3, unsigned int a4)
{
  int v4; // edx
  int v5; // edx
  char result; // al
  int v7; // edx

  v4 = a2 - 1;
  if ( !v4 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1,
             a4);
  v5 = v4 - 1;
  if ( !v5 )
    return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::TypeSupported(
             a1 + 136,
             a4);
  result = 0;
  v7 = v5 - 1;
  if ( !v7 )
    return *(_DWORD *)(a1 + 272) == -1;
  if ( v7 == 1 )
  {
    if ( a3 )
      return *(_BYTE *)(a1 + 276) & 1;
    else
      return (*(_DWORD *)(a1 + 276) & 0xFFFFFFFE) != 0;
  }
  return result;
}
