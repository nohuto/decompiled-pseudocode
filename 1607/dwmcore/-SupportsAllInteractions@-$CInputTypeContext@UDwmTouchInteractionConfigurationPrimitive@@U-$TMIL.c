/*
 * XREFs of ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180020004
 * Callers:
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18001FF98 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18016D590 (-CanSkipChildren@CInteractionProcessor@@QEBAHXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(
        __int64 a1,
        int a2,
        int a3)
{
  char v3; // r9
  _DWORD *v4; // rcx

  v3 = 1;
  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 0;
  v4 = *(_DWORD **)a1;
  if ( *v4 != 1 || v4[1] != -1 || (a3 & a2 | ~a3 & v4[2]) != 0xFFFFFFFF )
    return 0;
  return v3;
}
