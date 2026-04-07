/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002FCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18001E5C4 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x180032B4C (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CWindowList::ProcessBackChannelMessage(CWindowList *this, const struct MIL_MESSAGE *a2)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int *v4; // rdi
  int started; // eax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( *(_DWORD *)a2 == 8 )
  {
    v3 = *((_DWORD *)a2 + 2);
    v4 = (unsigned int *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 168);
    if ( v3 == v4[140] )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(CDesktopManager::s_pDesktopManagerInstance, &UdwmLivePreviewAnimation_Stop);
      v4[140] = -1;
    }
    else
    {
      if ( v3 != v4[141] )
      {
        started = CDesktopManager::PostStartAnimations(CDesktopManager::s_pDesktopManagerInstance);
        v2 = started;
        if ( started >= 0 )
          return v2;
        v8 = 958;
LABEL_18:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, v8);
        return v2;
      }
      if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
        Template_q(v7, &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info, v4[70]);
      v4[141] = -1;
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 5 )
    {
      v2 = -2147418113;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x3C7u);
      return v2;
    }
    started = CWindowList::ProcessDeviceStateChangeNotification(this, *((unsigned int *)a2 + 3));
    v2 = started;
    if ( started < 0 )
    {
      v8 = 963;
      goto LABEL_18;
    }
  }
  return v2;
}
