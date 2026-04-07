/*
 * XREFs of ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x18008EB98
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x18008E7B0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x18008EE58 (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180030140 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18008E230 (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenRotation::SetupTimeline(__int64 a1, int a2)
{
  int v2; // r15d
  __int64 v5; // rax
  _QWORD *v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // rdx
  CWindowList *v11; // rcx
  struct MIL_CHANNEL__ *v12; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-38h] BYREF
  struct _GUID v16; // [rsp+3Ch] [rbp-34h]
  unsigned __int64 v17; // [rsp+4Ch] [rbp-24h]
  struct _GUID v18; // [rsp+58h] [rbp-18h] BYREF

  v2 = 400;
  if ( a2 == 1 )
    v2 = 100;
  CScreenRotation::CleanupTimeline((CScreenRotation *)a1);
  v18 = (struct _GUID)xmmword_1800A4888;
  v5 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         80LL);
  if ( v5 )
    v6 = CTimeline<float>::CTimeline<float>(v5, (float)((float)v2 / 1000.0), 0.0, 1.0, 0);
  else
    v6 = 0LL;
  *(_QWORD *)(a1 + 280) = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x15Au);
    return v7;
  }
  *(_DWORD *)(a1 + 288) = a2;
  v8 = CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1);
  v7 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x15Eu);
    return v7;
  }
  *(_BYTE *)(a1 + 272) = 1;
  if ( a2 == 1 )
  {
    if ( *(_BYTE *)(a1 + 364) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v10 = &UdwmHardwareExpression_Delay_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v10 = &UdwmScreenRotation_Delay_Start;
    }
  }
  else if ( *(_BYTE *)(a1 + 364) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_23;
    v10 = &UdwmHardwareExpression_HintDelay_Start;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_23;
    v10 = &UdwmScreenRotation_HintDelay_Start;
  }
  TemplateEventDescriptor(v9, (__int64)v10);
LABEL_23:
  QueryPerformanceCounter(&PerformanceCount);
  if ( (int)CWindowList::BeginTelemetryScenario(v11, &v18, PerformanceCount.QuadPart) >= 0 )
  {
    v15 = 13;
    v12 = (struct MIL_CHANNEL__ *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
    v16 = v18;
    v17 = a1 | 0xD100000000000000uLL;
    MilResource_SendCommand(&v15, 0x1Cu, v12);
  }
  return v7;
}
