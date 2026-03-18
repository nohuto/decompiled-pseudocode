/*
 * XREFs of ?AxisContainsInteraction@?A0xe8837992@@YA_NAEBUInteractionAxis@@@Z @ 0x180141108
 * Callers:
 *     ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180140CB4 (--$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInterac.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall `anonymous namespace'::AxisContainsInteraction(
        _anonymous_namespace_ *this,
        const struct InteractionAxis *a2)
{
  return *(_BYTE *)this
      || *((_BYTE *)this + 1)
      || *((float *)this + 1) != 0.0
      || *((float *)this + 2) != 0.0
      || *((float *)this + 3) != 0.0;
}
