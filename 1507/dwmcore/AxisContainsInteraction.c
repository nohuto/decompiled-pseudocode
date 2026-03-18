/*
 * XREFs of AxisContainsInteraction @ 0x18012D33C
 * Callers:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18012CEC0 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall AxisContainsInteraction(__int64 a1)
{
  return *(_BYTE *)a1
      || *(_BYTE *)(a1 + 1)
      || *(float *)(a1 + 4) != 0.0
      || *(float *)(a1 + 8) != 0.0
      || *(float *)(a1 + 12) != 0.0;
}
