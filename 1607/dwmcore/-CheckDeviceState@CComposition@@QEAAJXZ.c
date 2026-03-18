/*
 * XREFs of ?CheckDeviceState@CComposition@@QEAAJXZ @ 0x18003B324
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z @ 0x18011A2E0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_NPEAJ@Z.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x18003C36C (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?CheckDeviceState@CRenderTargetManager@@QEAAJXZ @ 0x180073820 (-CheckDeviceState@CRenderTargetManager@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 */

__int64 __fastcall CComposition::CheckDeviceState(CRenderTargetManager **this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  unsigned int v5; // esi

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Start);
  v2 = (unsigned int)CRenderTargetManager::CheckDeviceState(this[4]);
  v5 = CComposition::RenderingStatusFromHr(v3, v2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v4, &EVTDESC_MILEVENT_MEDIA_UCE_CHECKDEVICESTATE_Stop);
  CComposition::ProcessRenderingStatus(this, v5);
  return (unsigned int)v2;
}
