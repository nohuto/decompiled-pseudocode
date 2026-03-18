/*
 * XREFs of ?TypeSupported@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEBAHW4SupportedTypeOption@@@Z @ 0x18012EA9C
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHKHW4SupportedTypeOption@@@Z @ 0x18000C2F0 (-SupportsPointerType@CInteractionProcessor@@QEBAHKHW4SupportedTypeOption@@@Z.c)
 * Callees:
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x18012EA74 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMIL.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
        __int64 a1,
        int a2)
{
  unsigned int v2; // r8d
  int v3; // edx

  v2 = 0;
  if ( !a2 )
  {
    if ( *(_DWORD *)(a1 + 112) > 1u || *(_DWORD *)(a1 + 112) == 1 && *(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL) )
      return 1;
    return v2;
  }
  v3 = a2 - 1;
  if ( !v3 )
  {
    LOBYTE(v2) = (*(_BYTE *)(a1 + 16) & 0x3F) != 0;
    return v2;
  }
  if ( v3 == 1 )
    return (unsigned __int8)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(a1 + 88);
  else
    return 0LL;
}
