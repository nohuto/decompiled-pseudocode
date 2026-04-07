/*
 * XREFs of ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x18008E7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18008E54C (-MidDelayExpired@CScreenRotation@@AEAAJXZ.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x18008EB98 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x18008EEC8 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 */

__int64 __fastcall CScreenRotation::OnAnimationComplete(CScreenRotation *this, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  void *v6; // rdx
  CScreenRotation *v7; // rcx
  int v8; // eax
  int v9; // eax
  void *v10; // rdx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( a2 != *((_DWORD *)this + 19) )
  {
    if ( a2 != *((_DWORD *)this + 20) )
      goto LABEL_22;
    if ( *((_BYTE *)this + 100) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      {
        v10 = &UdwmHardwareExpression_PostDelayAnimation_Stop;
LABEL_20:
        TemplateEventDescriptor(v5, (__int64)v10);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v10 = &UdwmScreenRotation_PostDelayAnimation_Stop;
      goto LABEL_20;
    }
    CScreenRotation::Stop((CScreenRotation *)((char *)this - 264), 0);
    goto LABEL_22;
  }
  *((_DWORD *)this + 19) = -1;
  if ( *((_BYTE *)this + 100) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v6 = &UdwmHardwareExpression_PreDelayAnimation_Stop;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_8;
    v6 = &UdwmScreenRotation_PreDelayAnimation_Stop;
  }
  TemplateEventDescriptor(v5, (__int64)v6);
LABEL_8:
  v7 = (CScreenRotation *)((char *)this - 264);
  if ( *((_BYTE *)this + 49) )
  {
    v8 = CScreenRotation::MidDelayExpired(v7);
    v4 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x1ACu);
  }
  else
  {
    v9 = CScreenRotation::SetupTimeline(v7, 2LL);
    v4 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x1B0u);
  }
LABEL_22:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
  return v4;
}
