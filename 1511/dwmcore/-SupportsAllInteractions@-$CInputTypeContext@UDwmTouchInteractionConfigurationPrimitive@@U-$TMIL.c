/*
 * XREFs of ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x180005328
 * Callers:
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@@Z @ 0x1800059A0 (-TypeSupported@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180127BF0 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(
        __int64 a1)
{
  __int64 result; // rax
  _DWORD *v2; // rcx

  result = 1LL;
  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 0LL;
  v2 = *(_DWORD **)a1;
  if ( *v2 != 1 || v2[1] != -1 || v2[2] != -1 )
    return 0LL;
  return result;
}
