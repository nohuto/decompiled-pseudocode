/*
 * XREFs of ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x180142E58
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180127BF0 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 *     ?TypeSupported@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEBAHW4SupportedTypeOption@@@Z @ 0x180142EC4 (-TypeSupported@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions(
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
