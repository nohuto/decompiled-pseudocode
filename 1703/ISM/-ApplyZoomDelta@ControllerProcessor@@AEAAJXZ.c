/*
 * XREFs of ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800341B8
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800337C8 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800358DC (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800359AC (-StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXM@Z @ 0x1800975C8 (-InjectZoom@ManipulationInjector@@QEAAXM@Z.c)
 */

__int64 __fastcall ControllerProcessor::ApplyZoomDelta(ControllerProcessor *this)
{
  float v1; // xmm0_4

  v1 = *((float *)this + 96);
  if ( v1 == 0.0 )
  {
    if ( ((*((_DWORD *)this + 302) - 16) & 0xFFFFFFEF) == 0 )
      ControllerProcessor::TryUpdateInteractionType(this, 0LL);
  }
  else
  {
    if ( v1 <= 1.0 )
    {
      if ( !*((_DWORD *)this + 302) && *((_BYTE *)this + 1213) )
      {
        ControllerProcessor::StartInteractionHelper(this, 32LL);
        *((_DWORD *)this + 302) = 32;
      }
    }
    else
    {
      ControllerProcessor::TryUpdateInteractionType(this, 16LL);
    }
    if ( ((*((_DWORD *)this + 302) - 16) & 0xFFFFFFEF) == 0 )
      ManipulationInjector::InjectZoom((ControllerProcessor *)((char *)this + 392), *((float *)this + 96));
    *((_DWORD *)this + 96) = 0;
  }
  return 0LL;
}
