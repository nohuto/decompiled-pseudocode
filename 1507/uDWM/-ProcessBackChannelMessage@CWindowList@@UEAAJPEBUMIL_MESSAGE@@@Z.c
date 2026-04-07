/*
 * XREFs of ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x18002F780
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostStartAnimations@CDesktopManager@@QEAAJXZ @ 0x18001C244 (-PostStartAnimations@CDesktopManager@@QEAAJXZ.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x18002F5A8 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     Template_q @ 0x180074F24 (Template_q.c)
 *     ?HandleScreenRotation@CWindowList@@AEAAJHH@Z @ 0x180078D78 (-HandleScreenRotation@CWindowList@@AEAAJHH@Z.c)
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
  if ( *(_DWORD *)a2 != 8 )
  {
    if ( *(_DWORD *)a2 == 5 )
    {
      started = CWindowList::ProcessDeviceStateChangeNotification((__int64)this, *((_DWORD *)a2 + 3));
      v2 = started;
      if ( started >= 0 )
        return v2;
      v8 = 1008;
    }
    else
    {
      if ( *(_DWORD *)a2 != 18 )
      {
        v2 = -2147418113;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147418113, 0x3F8u);
        return v2;
      }
      started = CWindowList::HandleScreenRotation(this, *((_DWORD *)a2 + 2), *((_DWORD *)a2 + 3));
      v2 = started;
      if ( started >= 0 )
        return v2;
      v8 = 1012;
    }
    goto LABEL_21;
  }
  v3 = *((_DWORD *)a2 + 2);
  v4 = (unsigned int *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 170);
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
      v8 = 1003;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, v8);
      return v2;
    }
    if ( !GetSystemMetrics(8193) && (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
      Template_q(v7, &PerfTrack_UdwmLivePreviewAnimation_FirstFrameFinished_Info, v4[70]);
    v4[141] = -1;
  }
  return v2;
}
