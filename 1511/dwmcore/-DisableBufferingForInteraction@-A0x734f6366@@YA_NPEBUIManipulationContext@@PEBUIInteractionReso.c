/*
 * XREFs of ?DisableBufferingForInteraction@?A0x734f6366@@YA_NPEBUIManipulationContext@@PEBUIInteractionResource@@K@Z @ 0x180144958
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@KPEAUInteractionAxisGroup@@2PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@6@Z @ 0x1800F2CE8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall `anonymous namespace'::DisableBufferingForInteraction(
        _anonymous_namespace_ *this,
        const struct IManipulationContext *a2,
        const struct IInteractionResource *a3)
{
  char v4; // di

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(const struct IManipulationContext *, const struct IManipulationContext *, const struct IInteractionResource *))(*(_QWORD *)a2 + 136LL))(
         a2,
         a2,
         a3) )
  {
    return (*(unsigned int (__fastcall **)(_anonymous_namespace_ *))(*(_QWORD *)this + 120LL))(this) == 0;
  }
  return v4;
}
