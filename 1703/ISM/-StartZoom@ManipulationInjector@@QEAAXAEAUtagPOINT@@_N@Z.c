/*
 * XREFs of ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z @ 0x180096E04
 * Callers:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800359AC (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 */

void __fastcall ManipulationInjector::StartZoom(ManipulationInjector *this, struct tagPOINT *a2, char a3)
{
  if ( *((_DWORD *)this + 22) == 64 )
    ManipulationInjector::EndManipulationInternal(this, 1);
  ManipulationInjector::StartManipulation(this, a3 != 0 ? 16 : 32, *a2);
}
