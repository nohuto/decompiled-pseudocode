/*
 * XREFs of ?CanSkipChildren@CInteractionProcessor@@QEBAHXZ @ 0x18016D590
 * Callers:
 *     ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180145220 (-CanSkipChildren@CInteraction@@UEBAHXZ.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x18000DE50 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x180020004 (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMIL.c)
 *     ?SupportsAllInteractions@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@SA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@1@Z @ 0x18016F88C (-SupportsAllInteractions@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$T.c)
 */

char __fastcall CInteractionProcessor::CanSkipChildren(CInteractionProcessor *this)
{
  _DWORD *v1; // r11
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 856) & 3) != 0 )
  {
    anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 896, &v5, &v4);
    switch ( v1[97] )
    {
      case 1:
        return CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                 (__int64)(v1 + 80),
                 v5,
                 v4);
      case 2:
        return CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::SupportsAllInteractions(
                 v1 + 88,
                 v5,
                 v4);
      case 3:
        return v1[79] == -1;
      case 4:
        return v1[78] == -1;
    }
  }
  return 0;
}
