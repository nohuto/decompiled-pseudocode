/*
 * XREFs of ?TypeSupported@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEBAHW4SupportedTypeOption@@@Z @ 0x180142EC4
 * Callers:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z @ 0x180005D50 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@HW4SupportedTypeOption@@@Z.c)
 * Callees:
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@@Z @ 0x180142E58 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$T.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::TypeSupported(
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
    return (unsigned __int8)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions(a1 + 88);
  else
    return 0LL;
}
