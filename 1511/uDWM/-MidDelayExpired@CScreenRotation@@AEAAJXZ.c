/*
 * XREFs of ?MidDelayExpired@CScreenRotation@@AEAAJXZ @ 0x180091ABC
 * Callers:
 *     ?OnAnimationComplete@CScreenRotation@@UEAAJI@Z @ 0x180091D20 (-OnAnimationComplete@CScreenRotation@@UEAAJI@Z.c)
 *     ?OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ @ 0x180091E30 (-OnGlobalTimeUpdated@CScreenRotation@@MEAAJXZ.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800922F4 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002B384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x180036E40 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z @ 0x1800389A4 (-RegisterForAnimationCompleteNotification@CAnimationEngine@@QEAAJPEAUIAnimationListener@@@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV?$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z @ 0x180038C5C (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHAEBV-$DynArray@PEAUIAnimatedVisual@@$0A@@@PEAI@Z.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180040AFC (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ??1CBitmapSourceArray@@QEAA@XZ @ 0x18004EAA8 (--1CBitmapSourceArray@@QEAA@XZ.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800918CC (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 */

__int64 __fastcall CScreenRotation::MidDelayExpired(CScreenRotation *this)
{
  int LiveDesktopVisual; // eax
  int v3; // ebx
  CAnimationEngine *v4; // r15
  int v5; // eax
  int v6; // r9d
  unsigned int v7; // edx
  __int64 v8; // rax
  int v9; // esi
  __int64 v10; // rcx
  __int64 v11; // rax
  int started; // eax
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // rdx
  unsigned int v17; // [rsp+20h] [rbp-30h]
  __int128 v18; // [rsp+30h] [rbp-20h] BYREF
  int v19; // [rsp+40h] [rbp-10h]
  unsigned int v20; // [rsp+44h] [rbp-Ch]
  unsigned int v21; // [rsp+48h] [rbp-8h]
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF

  v19 = 0;
  v20 = 0;
  v21 = 0;
  v18 = 0LL;
  LiveDesktopVisual = CScreenRotation::CreateLiveDesktopVisual(this);
  v3 = LiveDesktopVisual;
  if ( LiveDesktopVisual < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LiveDesktopVisual, 0x1FCu);
    goto LABEL_32;
  }
  v4 = CDesktopManager::AcquireAnimationEngine();
  if ( v4 )
  {
    v22 = *((_QWORD *)this + 37);
    v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v18, 8u, 1, &v22);
    v3 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0xC0u);
    if ( v3 < 0 )
    {
      v17 = 512;
      v6 = v3;
LABEL_10:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, v17);
      goto LABEL_31;
    }
    v8 = *((_QWORD *)this + 37);
    *(_DWORD *)(v8 + 720) = 78;
    *(_DWORD *)(v8 + 724) = 2;
    v22 = *((_QWORD *)this + 38);
    if ( v21 + 1 < v21 )
    {
      v9 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v3 = -2147024362;
LABEL_22:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x203u);
LABEL_31:
      CAnimationEngine::Release(v4, v7);
      goto LABEL_32;
    }
    if ( v21 + 1 > v20 )
    {
      v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v18, 8u, 1, &v22);
      v9 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xC0u);
      v3 = v9;
      if ( v9 < 0 )
        goto LABEL_22;
    }
    else
    {
      v10 = v21++;
      *(_QWORD *)(v18 + 8 * v10) = v22;
    }
    v11 = *((_QWORD *)this + 38);
    *(_DWORD *)(v11 + 720) = 78;
    *(_DWORD *)(v11 + 724) = 3;
    started = CAnimationEngine::ScheduleStartAnimation(v4, 78, (__int64)&v18, (unsigned int *)this + 86);
    v3 = started;
    if ( started >= 0 )
    {
      started = CAnimationEngine::RegisterForAnimationCompleteNotification(v4, (CScreenRotation *)((char *)this + 264));
      v3 = started;
      if ( started >= 0 )
      {
        if ( *((_BYTE *)this + 364) )
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v15 = &UdwmHardwareExpression_PostDelayAnimation_Start;
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
            goto LABEL_31;
          v15 = &UdwmScreenRotation_PostDelayAnimation_Start;
        }
        TemplateEventDescriptor(v14, (__int64)v15);
        goto LABEL_31;
      }
      v17 = 521;
    }
    else
    {
      v17 = 520;
    }
    v6 = started;
    goto LABEL_10;
  }
  v3 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1FEu);
LABEL_32:
  CBitmapSourceArray::~CBitmapSourceArray((void **)&v18);
  return (unsigned int)v3;
}
