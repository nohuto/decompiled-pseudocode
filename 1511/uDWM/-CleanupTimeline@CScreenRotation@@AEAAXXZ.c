/*
 * XREFs of ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x1800917A0
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x180091E30 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180092108 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800922F4 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x1800923C8 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003D030 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 */

void __fastcall CScreenRotation::CleanupTimeline(CScreenRotation *this)
{
  __int64 v2; // rcx
  char v3; // al
  void *v4; // rdx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+24h] [rbp-34h]
  unsigned __int64 v7; // [rsp+34h] [rbp-24h]

  if ( *((_BYTE *)this + 272) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v2 = *((_QWORD *)this + 35);
    if ( v2 )
    {
      --*(_DWORD *)(v2 + 8);
      v3 = CDesktopManager::s_fTimelineDirty;
      if ( !*(_DWORD *)(v2 + 8) )
        v3 = 1;
      *((_QWORD *)this + 35) = 0LL;
      CDesktopManager::s_fTimelineDirty = v3;
    }
    *((_BYTE *)this + 272) = 0;
    if ( *((_DWORD *)this + 72) == 1 )
    {
      if ( *((_BYTE *)this + 364) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          v4 = &UdwmHardwareExpression_Delay_Stop;
LABEL_17:
          TemplateEventDescriptor(v2, (__int64)v4);
        }
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v4 = &UdwmScreenRotation_Delay_Stop;
        goto LABEL_17;
      }
    }
    else if ( *((_BYTE *)this + 364) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v4 = &UdwmHardwareExpression_HintDelay_Stop;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v4 = &UdwmScreenRotation_HintDelay_Stop;
      goto LABEL_17;
    }
    v5 = 15;
    v6 = xmmword_1800A6C08;
    v7 = (unsigned __int64)this | 0xD100000000000000uLL;
    MilResource_SendCommand(&v5, 0x1Cu, *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
    *((_DWORD *)this + 72) = 0;
  }
}
