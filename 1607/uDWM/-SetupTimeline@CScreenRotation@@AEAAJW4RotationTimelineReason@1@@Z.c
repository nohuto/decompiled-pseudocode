/*
 * XREFs of ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x180090AA8
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x1800906C0 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?Start@CScreenRotation@@QEAAJXZ @ 0x180090D34 (-Start@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x180032C58 (-BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180041880 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?CleanupTimeline@CScreenRotation@@AEAAXXZ @ 0x18009017C (-CleanupTimeline@CScreenRotation@@AEAAXXZ.c)
 */

__int64 __fastcall CScreenRotation::SetupTimeline(__int64 a1, int a2)
{
  int v2; // edi
  _QWORD *v5; // rax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // rcx
  void *v9; // rdx
  CWindowList *v10; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-28h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-20h] BYREF

  v2 = 400;
  if ( a2 == 1 )
    v2 = 100;
  CScreenRotation::CleanupTimeline((CScreenRotation *)a1);
  v13 = (struct _GUID)xmmword_1800A5218;
  v5 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   80LL);
  if ( v5 )
    v5 = CTimeline<float>::CTimeline<float>((__int64)v5, (float)((float)v2 / 1000.0), 0.0, 1.0, 0);
  *(_QWORD *)(a1 + 280) = v5;
  if ( !v5 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x14Fu);
    return v6;
  }
  *(_DWORD *)(a1 + 288) = a2;
  v7 = CDesktopManager::RegisterForGlobalTimeChangeNotification((struct CVisual *)a1);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x153u);
    return v6;
  }
  *(_BYTE *)(a1 + 272) = 1;
  if ( a2 == 1 )
  {
    if ( *(_BYTE *)(a1 + 364) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_22;
      v9 = &UdwmHardwareExpression_Delay_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_22;
      v9 = &UdwmScreenRotation_Delay_Start;
    }
  }
  else if ( *(_BYTE *)(a1 + 364) )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_22;
    v9 = &UdwmHardwareExpression_HintDelay_Start;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      goto LABEL_22;
    v9 = &UdwmScreenRotation_HintDelay_Start;
  }
  TemplateEventDescriptor(v8, (__int64)v9);
LABEL_22:
  QueryPerformanceCounter(&PerformanceCount);
  if ( (int)CWindowList::BeginTelemetryScenario(v10, &v13, PerformanceCount.QuadPart) >= 0 )
    (*(void (__fastcall **)(_QWORD, struct _GUID *, unsigned __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                        + 4)
                                                                     + 216LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      &v13,
      a1 | 0xD100000000000000uLL);
  return v6;
}
