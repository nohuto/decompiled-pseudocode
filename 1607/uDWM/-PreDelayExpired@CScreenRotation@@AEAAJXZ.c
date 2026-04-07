/*
 * XREFs of ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x18009086C
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x1800907D0 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180011580 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x180012F18 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x1800131F8 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x18003A8C0 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x18007F3FC (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x1800910BC (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
 */

__int64 __fastcall CScreenRotation::PreDelayExpired(CScreenRotation *this)
{
  unsigned __int64 v1; // rbp
  int v2; // eax
  int v4; // r8d
  int v5; // ecx
  CAnimationEngine *v6; // r14
  int v7; // ebx
  int v8; // eax
  int v9; // r9d
  __int64 v10; // rax
  int started; // eax
  __int64 v12; // rcx
  char v13; // al
  void *v14; // rdx
  void *v15; // rdx
  unsigned int v17; // [rsp+50h] [rbp+50h]
  _BYTE v18[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v1 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = (int)*((double *)this + 19);
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_DWORD *)(v1 + 32) = 0;
  *((_DWORD *)this + 80) = v2;
  *(_QWORD *)((char *)this + 332) = *((_QWORD *)this + 13);
  *(_QWORD *)v1 = 0LL;
  *(_OWORD *)(v1 + 8) = 0LL;
  CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL));
  CVisual::SetRotation(this, 0.0);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 320);
  if ( v4 < 0 )
    v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 321);
  *(_DWORD *)v1 = v4;
  if ( v5 < 0 )
    v5 = 0;
  *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v5;
  CScreenRotation::UpdateBackgroundInstructionsAndSize(
    this,
    (const struct tagSIZE *)((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL),
    0);
  *((_BYTE *)this + 315) = 1;
  v6 = CDesktopManager::AcquireAnimationEngine();
  if ( v6 )
  {
    *(_QWORD *)v1 = *((_QWORD *)this + 37);
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v1 + 8, 8u, 1, (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
    if ( v7 < 0 )
    {
      v17 = 514;
      v9 = v7;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, v17);
LABEL_29:
      CAnimationEngine::Release(v6);
      goto LABEL_30;
    }
    v10 = *((_QWORD *)this + 37);
    *(_DWORD *)(v10 + 720) = 76;
    *(_DWORD *)(v10 + 724) = 1;
    started = CAnimationEngine::ScheduleStartAnimation(v6, 76, v1 + 8, (unsigned int *)this + 85);
    v7 = started;
    if ( started < 0 )
    {
      v17 = 519;
LABEL_14:
      v9 = started;
      goto LABEL_11;
    }
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v6, (CScreenRotation *)((char *)this + 264));
    v7 = started;
    if ( started < 0 )
    {
      v17 = 520;
      goto LABEL_14;
    }
    v13 = Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( *((_BYTE *)this + 364) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v14 = &UdwmHardwareExpression_Animation_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v14 = &UdwmScreenRotation_Animation_Start;
    }
    TemplateEventDescriptor(v12, (__int64)v14);
    v13 = Microsoft_Windows_Dwm_UdwmEnableBits;
LABEL_23:
    if ( *((_BYTE *)this + 364) )
    {
      if ( (v13 & 1) == 0 )
        goto LABEL_29;
      v15 = &UdwmHardwareExpression_PreDelayAnimation_Start;
    }
    else
    {
      if ( (v13 & 1) == 0 )
        goto LABEL_29;
      v15 = &UdwmScreenRotation_PreDelayAnimation_Start;
    }
    TemplateEventDescriptor(v12, (__int64)v15);
    goto LABEL_29;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x200u);
LABEL_30:
  DynArrayImpl<0>::~DynArrayImpl<0>(v1 + 8);
  return (unsigned int)v7;
}
