/*
 * XREFs of ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800358DC
 * Callers:
 *     ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x18003332C (-TurnNavigationOff@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800337C8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800341B8 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x18003444C (-UpdatePointerTimer@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800359AC (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ @ 0x180035B88 (-UpdateManipulationInjectionRect@ControllerProcessor@@AEAAXXZ.c)
 *     ?EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z @ 0x180097098 (-EndManipulationInternal@ManipulationInjector@@AEAAX_N@Z.c)
 */

void __fastcall ControllerProcessor::TryUpdateInteractionType(__int64 a1, unsigned int a2)
{
  int v4; // edx

  v4 = *(_DWORD *)(a1 + 1208);
  if ( v4 == a2 )
    return;
  if ( !a2 )
  {
    ManipulationInjector::EndManipulationInternal((ManipulationInjector *)(a1 + 392), 0);
    if ( *(_BYTE *)(a1 + 1212) )
    {
      ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
      *(_BYTE *)(a1 + 1212) = 0;
    }
LABEL_16:
    *(_DWORD *)(a1 + 1208) = 0;
    return;
  }
  if ( a2 == 1 )
  {
    if ( ((v4 - 16) & 0xFFFFFFEF) == 0 )
    {
      ManipulationInjector::EndManipulationInternal((ManipulationInjector *)(a1 + 392), 0);
      if ( *(_BYTE *)(a1 + 1212) )
      {
        ControllerProcessor::UpdateManipulationInjectionRect((ControllerProcessor *)a1);
        *(_BYTE *)(a1 + 1212) = 0;
      }
    }
    if ( *(_BYTE *)(a1 + 1213) )
    {
      a2 = 1;
LABEL_8:
      ControllerProcessor::StartInteractionHelper(a1, a2);
      *(_DWORD *)(a1 + 1208) = a2;
      return;
    }
    goto LABEL_16;
  }
  if ( (a2 == 16 || a2 == 32) && !v4 && *(_BYTE *)(a1 + 1213) )
    goto LABEL_8;
}
