/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHKHW4SupportedTypeOption@@@Z @ 0x18000C2F0
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x18000BC20 (-SupportsPointerType@CInteraction@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z @ 0x180131C70 (-SupportsPointerType@CInteractionRoot@@UEBAHKHW4SupportedTypeOption@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionProcessor::SupportsPointerType(__int64 a1, int a2, int a3, unsigned int a4)
{
  int v4; // edx
  int v5; // edx
  int v6; // edx

  v4 = a2 - 2;
  if ( !v4 )
    return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
             a1,
             a4);
  v5 = v4 - 1;
  if ( !v5 )
    return *(_DWORD *)(a1 + 272) == -1;
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
      return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::TypeSupported(
               a1 + 136,
               a4);
    else
      return 0;
  }
  else if ( a3 )
  {
    return *(_BYTE *)(a1 + 276) & 1;
  }
  else
  {
    return *(_DWORD *)(a1 + 276) != 0;
  }
}
