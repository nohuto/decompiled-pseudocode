/*
 * XREFs of ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18009017C
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800907D0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180090AA8 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x180090C60 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180090D34 (-Start@CScreenRotation@@QEAAJXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180090DA4 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 * Callees:
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

void __fastcall CScreenRotation::CleanupTimeline(CScreenRotation *this)
{
  __int64 v2; // rax
  bool v3; // zf
  char v4; // al
  void *v5; // rdx

  if ( *((_BYTE *)this + 272) )
  {
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    v2 = *((_QWORD *)this + 35);
    if ( v2 )
    {
      v3 = (*(_DWORD *)(v2 + 8))-- == 1;
      v4 = CDesktopManager::s_fTimelineDirty;
      if ( v3 )
        v4 = 1;
      *((_QWORD *)this + 35) = 0LL;
      CDesktopManager::s_fTimelineDirty = v4;
    }
    *((_BYTE *)this + 272) = 0;
    if ( *((_DWORD *)this + 72) == 1 )
    {
      if ( *((_BYTE *)this + 364) )
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        {
          v5 = &UdwmHardwareExpression_Delay_Stop;
LABEL_17:
          TemplateEventDescriptor(1LL, (__int64)v5);
        }
      }
      else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v5 = &UdwmScreenRotation_Delay_Stop;
        goto LABEL_17;
      }
    }
    else if ( *((_BYTE *)this + 364) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v5 = &UdwmHardwareExpression_HintDelay_Stop;
        goto LABEL_17;
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v5 = &UdwmScreenRotation_HintDelay_Stop;
      goto LABEL_17;
    }
    (*(void (__fastcall **)(_QWORD, __int128 *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                    + 4)
                                                                 + 224LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      &xmmword_1800A5218,
      (unsigned __int64)this | 0xD100000000000000uLL);
    *((_DWORD *)this + 72) = 0;
  }
}
