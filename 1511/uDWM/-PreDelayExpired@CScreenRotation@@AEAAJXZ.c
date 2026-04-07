/*
 * XREFs of ?PreDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ECC
 * Callers:
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x180091E30 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800389A4 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180038C5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?SetRotation@CVisual@@QEAAXN@Z @ 0x18007E92C (-SetRotation@CVisual@@QEAAXN@Z.c)
 *     ?UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z @ 0x180092754 (-UpdateBackgroundInstructionsAndSize@CScreenRotation@@AEAAJPEBUtagSIZE@@_N@Z.c)
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
  unsigned int v10; // edx
  __int64 v11; // rax
  int started; // eax
  __int64 v13; // rcx
  char v14; // al
  void *v15; // rdx
  void *v16; // rdx
  unsigned int v18; // [rsp+50h] [rbp+50h]
  _BYTE v19[48]; // [rsp+A0h] [rbp+A0h] BYREF

  v1 = (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL;
  v2 = (int)*((double *)this + 19);
  *(_QWORD *)(v1 + 24) = 0LL;
  *(_DWORD *)(v1 + 32) = 0;
  *((_DWORD *)this + 80) = v2;
  *(_QWORD *)((char *)this + 332) = *((_QWORD *)this + 13);
  *(_QWORD *)v1 = 0LL;
  *(_OWORD *)(v1 + 8) = 0LL;
  CVisual::SetOffset((struct tagPOINT *)this, (const struct tagPOINT *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL));
  CVisual::SetRotation(this, 0.0);
  v4 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 324);
  if ( v4 < 0 )
    v4 = 0;
  v5 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 325);
  *(_DWORD *)v1 = v4;
  if ( v5 < 0 )
    v5 = 0;
  *(_DWORD *)(((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v5;
  CScreenRotation::UpdateBackgroundInstructionsAndSize(
    this,
    (const struct tagSIZE *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL),
    0);
  *((_BYTE *)this + 315) = 1;
  v6 = CDesktopManager::AcquireAnimationEngine();
  if ( v6 )
  {
    *(_QWORD *)v1 = *((_QWORD *)this + 37);
    v8 = DynArrayImpl<0>::AddMultipleAndSet(v1 + 8, 8u, 1, (unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
    if ( v7 < 0 )
    {
      v18 = 557;
      v9 = v7;
LABEL_11:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, v18);
LABEL_29:
      CAnimationEngine::Release(v6, v10);
      goto LABEL_30;
    }
    v11 = *((_QWORD *)this + 37);
    *(_DWORD *)(v11 + 720) = 78;
    *(_DWORD *)(v11 + 724) = 1;
    started = CAnimationEngine::ScheduleStartAnimation(v6, 78, v1 + 8, (unsigned int *)this + 85);
    v7 = started;
    if ( started < 0 )
    {
      v18 = 562;
LABEL_14:
      v9 = started;
      goto LABEL_11;
    }
    started = CAnimationEngine::RegisterForAnimationCompleteNotification(v6, (CScreenRotation *)((char *)this + 264));
    v7 = started;
    if ( started < 0 )
    {
      v18 = 563;
      goto LABEL_14;
    }
    v14 = Microsoft_Windows_Dwm_UdwmEnableBits;
    if ( *((_BYTE *)this + 364) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v15 = &UdwmHardwareExpression_Animation_Start;
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
        goto LABEL_23;
      v15 = &UdwmScreenRotation_Animation_Start;
    }
    TemplateEventDescriptor(v13, (__int64)v15);
    v14 = Microsoft_Windows_Dwm_UdwmEnableBits;
LABEL_23:
    if ( *((_BYTE *)this + 364) )
    {
      if ( (v14 & 1) == 0 )
        goto LABEL_29;
      v16 = &UdwmHardwareExpression_PreDelayAnimation_Start;
    }
    else
    {
      if ( (v14 & 1) == 0 )
        goto LABEL_29;
      v16 = &UdwmScreenRotation_PreDelayAnimation_Start;
    }
    TemplateEventDescriptor(v13, (__int64)v16);
    goto LABEL_29;
  }
  v7 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x22Bu);
LABEL_30:
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)(v1 + 8));
  return (unsigned int)v7;
}
