/*
 * XREFs of ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180127BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x180005328 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMIL.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x180142E58 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$T.c)
 */

char __fastcall CInteraction::CanSkipChildren(CInteraction *this)
{
  char result; // al

  if ( *((_DWORD *)this + 145) == 1 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions((__int64)this + 512);
  if ( *((_DWORD *)this + 145) == 2 )
    return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions((char *)this + 544);
  result = 0;
  if ( *((_DWORD *)this + 145) == 3 )
    return *((_DWORD *)this + 127) == -1;
  if ( *((_DWORD *)this + 145) != 4 )
    return result;
  return *((_DWORD *)this + 126) == -1;
}
