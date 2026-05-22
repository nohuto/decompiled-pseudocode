/*
 * XREFs of ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180035B88
 * Callers:
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180032D1C (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 *     ?TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180032FA4 (-TransitionToEnabled@ControllerProcessor@@AEAAJPEAUtagRECT@@PEAUtagPOINT@@@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800358DC (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z @ 0x1800987E8 (-SetInjectionRect@ManipulationInjector@@QEAAXPEBUtagRECT@@@Z.c)
 */

void __fastcall ControllerProcessor::UpdateManipulationInjectionRect(ControllerProcessor *this)
{
  bool v1; // al

  v1 = *((_DWORD *)this + 76) - *((_DWORD *)this + 74) >= 80 && *((_DWORD *)this + 77) - *((_DWORD *)this + 75) >= 80;
  *((_BYTE *)this + 1213) = v1;
  if ( v1 )
    ManipulationInjector::SetInjectionRect(
      (ControllerProcessor *)((char *)this + 392),
      (const struct tagRECT *)((char *)this + 296));
}
